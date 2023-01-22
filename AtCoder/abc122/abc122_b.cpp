#include <iostream>
#include <string>
using namespace std;
int main(){
  string s;
  cin >> s;
  int count = 0;
  int max = 0;
  for(int i = 0; i < s.length(); i++){
    if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T') count++;
    else count = 0;
    if(count > max) max = count;
  }
  cout << max << endl;
}