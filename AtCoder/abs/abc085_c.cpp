#include <iostream>
using namespace std;

int main(){
    int n, y;
    cin >> n >> y;
    y /= 1000;
    for(int i = 0; i <= y/10+1; i++){
        if(i*10 + 5*(n-i) < y){
            continue;
        }
        for(int j = 0; j <= y/5+1; j++){
            if(i*10 + j*5 + (n-j) < y){
                continue;
            }
            for(int k = 0; k <= y; k++){
                if(i*10 + j*5 + k*1 == y){
                    if(i+j+k == n){
                        cout << i << " " << j << " " << k << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "-1 -1 -1" << endl;
}