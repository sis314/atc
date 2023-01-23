#include <iostream>
using namespace std;

int N;

int main(){
    cin >> N;
    int count = 0;
    for(int i = 1; i <= N; i =i+2){
        int yaku = 0;
        for(int j = 1; j <= N; j++){
            if(i%j == 0) yaku++; 
        }
        if(yaku == 8) count++;
    }
    cout << count << endl;
}