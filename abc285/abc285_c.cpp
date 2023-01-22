#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(void){
    // Your code here!
    string s;
    cin >> s;
    int len = s.length();
    char t;
    long long t2;
    long long count = 0;
    for(int i = 0; i < len; i++){
        t = s[len-1-i];
        t2 = pow(26,i) * (t - 'A' + 1);
        count += t2;
    }
    cout << count << endl;
}
