#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // vector<int> num = {1,5,3,7,8,9};
  // vector<int> copyNum(5);
  // copy(num.begin(),num.end(),copyNum.begin());
  // for(int i : copyNum){
  //   cout << i << "\n";
  // }

  vector<int> num(5);
  fill(num.begin(), num.end(), 35);
  for(int i : num){
      cout << i << "\n";
    }
}