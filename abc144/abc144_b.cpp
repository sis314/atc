#include <iostream>
using namespace std;

int X;

int main(void){
    cin >> X;
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            if(X == i*j){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}