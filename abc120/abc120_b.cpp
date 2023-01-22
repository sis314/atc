#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a,b,k;
  vector<int> nums;
  cin >> a >> b >> k;
  for(int i = 1; i <= b; i++){
    if(a % i == 0 && b % i == 0){
        nums.push_back(i);
    }
  }
  cout << nums[nums.size()-k] << endl;
}