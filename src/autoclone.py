import os
import yaml
from datetime import datetime

from bs4 import BeautifulSoup
import requests

CONFIG_PATH = "config/config.yml"
PROBLEMS_API_ENDPOINT = "https://kenkoooo.com/atcoder/atcoder-api/v3/user/submissions"
EXTENSIONS = {
    "C++": "cpp",
    "Bash": "sh",
    "C#": "cs",
    "JavaScript": "js",
    "OpenJDK": "java",
    "Haskell": "hs",
    "OCaml": "ml",
    "Perl": "pl",
    "PHP": "php",
    "Python": "py",
    "PyPy": "py",
    "Pascal": "pas",
    "Perl": "pl",
    "Ruby": "rb",
    "Scala": "scala",
    "Text": "txt",
    "Visual Basic": "vb",
    "Objective-C": "m",
    "Swift": "swift",
    "Rust": "rs",
    "Sed": "sed",
    "Awk": "awk",
    "Standard ML": "ml",
    "Crystal": "cr",
    "Julia": "jl",
    "Octave": "m",
    "Nim": "nim",
    "TypeScript": "ts",
    "Perl6": "p6",
    "Kotlin": "kt",
    "COBOL": "cob",
    "C": ".c",
}


class AutoClone(object):

    def __init__(self, time_range):
        self.cur_unix_time = int(datetime.timestamp(datetime.now()))
        self.unix_time = self.cur_unix_time - time_range

        self.ac_only = True

        self.user_id = self.load_yml()["user_id"]
        if self.user_id is None:
            raise Exception("user_id not found.")

    #AtCoderProblemsAPIからユーザーの提出一覧を取得
    def get_submissions(self) -> None:
        params = {"user": self.user_id, "from_second": self.unix_time}
        response = requests.get(url=PROBLEMS_API_ENDPOINT, params=params)

        #異常終了を検知
        if not response.status_code == 200:
            raise Exception(f"{response.status_code} : Something went wrong")
        
        #json形式で保存
        self.submissions = response.json()
    
    def get_and_write_submitted_codes(self) -> None:
        for record in self.submissions:
            contest_id = record["contest_id"]
            language = record["language"]
            problem_id = record["problem_id"]
            submission_id = record["id"]
            result = record["result"]

            if self.ac_only and result == "AC":
                code = self.get_code(contest_id, submission_id)
                self.write_code(code, contest_id, problem_id, language)
            else:
                pass

    def __call__(self):
        self.get_submissions()
        self.get_and_write_submitted_codes()

    @staticmethod
    def get_code(contest_id: str, submission_id: int) -> str:
        submission_url = (
            f"https://atcoder.jp/contests/{contest_id}/submissions/{submission_id}"
        )
        return BeautifulSoup(
            requests.get(submission_url).content, "html.parser"
        ).pre.string

    @staticmethod
    def write_code(code, contest_id, problem_id, language) -> None:
        extension = AutoClone.get_extension(language)
        path = f"../AtCoder/{contest_id}/{problem_id}.{extension}"
        os.makedirs(os.path.dirname(path), exist_ok=True)
        with open(path, "w", newline="") as f:
            f.write(code)

    @staticmethod
    def load_yml() -> dict:
        with open(CONFIG_PATH, "r") as f:
            config = yaml.safe_load(f)
        return config

    @staticmethod
    def get_extension(language: str) -> str:
        extension = None
        for lang in EXTENSIONS.keys():
            if lang in language:
                extension = EXTENSIONS[lang]
                break
        if extension is None:
            raise Exception(
                f"Extension for {language} did not found."
            )
        return extension


if __name__ == "__main__":
    pass
