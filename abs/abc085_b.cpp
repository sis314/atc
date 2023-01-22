#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int moti[n];
    for(int i = 0; i < n; i++){
        cin >> moti[i];
    }

    int count = 0;
    while(true){
        int max = 0;
        for(int i = 0; i < n; i++){
            if(max < moti[i]){
                max = moti[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(max == moti[i]){
                moti[i] = 0;
            }
        }

        if(max == 0){
            cout << count << endl;
            return 0;
        }

        count++;
    }
}