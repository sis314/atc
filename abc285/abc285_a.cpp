#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int a,b;
    cin >> a >> b;
    if(a*2 == b || a*2 == b-1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}