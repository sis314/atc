#include <iostream>
using namespace std;
int main(){
  int n,t,max = 0;
  int count = 0;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> t;
    if(t > max){
      count += max;
      max = t;
    }else{
      count += t;
    }
  }
  if(count > max){
	cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}