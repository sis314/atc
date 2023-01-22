#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cards[n];
    for(int i = 0; i < n; i++){
        cin >> cards[i];
    }
    
    int gap = 0;

    bool isAliceTurn = true;

    while(true){
        int max = 0;
        int maxAt;
        for(int j = 0; j < n; j++){
            if(cards[j] > max){
                max = cards[j];
                maxAt = j;
            }
        }
        cards[maxAt] = 0;

        if(max == 0){
            cout << gap << endl;
            return 0;
        }

        if(isAliceTurn){
            gap += max;
        }else{
            gap -= max;
        }

        isAliceTurn = !isAliceTurn;
      	cerr << "test" << endl;
    }

}