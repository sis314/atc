#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n;
    int l;
    string s;
    cin >> n >> s;
    bool isok = true;
    for(int i = 1; i < n; i++){
        int count = 0;
        int keep = 0;
        for(l = 0; l+i <= n; l++){
            isok = true;
            for(int k = keep; k <= l; k++){
                keep = k;
                if(s[k-1] == s[k+i-1]){
                    isok = false;
                    break;
                }
            }
            if(!isok) break;
        }
        cout << l-1 << endl;
    }
}