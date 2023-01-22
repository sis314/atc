#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int list[num];
    for(int i = 0; i < num ; i++){
        cin >> list[i];
    }

    int count = 0;

    for(;;count++){
        for(int i = 0; i < num; i++){
            if(list[i]%2 == 0){
                list[i] /= 2;
            }else{
                cout << count;
                return 0;
            }
        }
    }
    return 0;
}