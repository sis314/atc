#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cin >> n;
  int count = 0;
  for(int i = 1; i <= n; i++){
    int t = log10(i);
    if(t % 2 == 0) count++;
  }
  cout << count << endl;
}
