#include <iostream>
#include <string>
using namespace std;

string S;
int N;

int main(void){
    cin >> N >>S;
    int count = 0;
    for(int i = 0; i < N-2; i++){
        if(S[i]=='A'&&S[i+1]=='B'&&S[i+2]=='C') count++;
    }
    cout << count << endl;
}
