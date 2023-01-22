#include <iostream>
using namespace std;

int funct(int a, int b, int c, int x){
    a *= 10;
    b *= 2;
    c *= 1;
    x /= 50;
    int count = 0;
    for(int i = 0; i <= a/10; i++){
        for(int j = 0; j <= b/2; j++){
            for(int k = 0; k <= c; k++){
                if(i*10+j*2+k*1 == x){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    int a;
    cin >> a;
    int b;
    cin >> b;
    int c;
    cin >> c;
    int x;
    cin >> x;
    cout << funct(a,b,c,x) << endl;
}