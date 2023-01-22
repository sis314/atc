#include <iostream>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int result = 0;

    for(int i = 0; i <= n; i++){
        int sum = (i/10000)+(i/1000%10)+(i/100%10)+(i/10%10)+i%10;
        if(sum >= a && sum <= b){
            result += i;
        }
    }

    cout << result << endl;
}