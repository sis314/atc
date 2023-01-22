#include <iostream>
#include <string>
using namespace std;
int main(){
  string s;
  cin >> s;
  int count = 0;
  for(int index = 0; index < s.length(); index++){
    if(s[index] == '1'){
      count++;
    }
  }
  cout << count << endl;
}