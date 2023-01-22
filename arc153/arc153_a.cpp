#include <iostream>
using namespace std;

int main(void){
    // Your code here!
    int n;
    cin >> n;
    int num = 100000;
    for(int i = 1; i < n; i++){
        num++;
    }
    int a = num / 100000;
    int b = num % 100000 / 10000;
    int c = num % 10000 / 1000;
    int d = num % 1000 / 100;
    int e = num % 100 / 10;
    int f = num % 10;
    cout << a << a << b << c << d << d << e << f << e << endl; // ABCD EF
}
