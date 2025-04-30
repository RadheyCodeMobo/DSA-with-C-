#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  vector<int> num = {12,46,2,45,778,13};
  sort(num.begin(), num.end());
  for(int i : num){
    cout << i << "\n";
  }

  cout << "in reverse order\n";
  sort(num.rbegin(), num.rend());
  for(int i : num){
    cout << i << "\n";
  }

  // sort(num.begin() + 3, num.end());
  // for(int i : num){
  //   cout << i << "\n";
  // }
  return 0;
}