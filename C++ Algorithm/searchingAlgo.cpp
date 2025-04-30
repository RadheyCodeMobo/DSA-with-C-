#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> num = {1,44,66,3,77,2};
  sort(num.begin(),num.end());
  auto it = upper_bound(num.begin(), num.end(), 3);
  cout << *it;

  // auto it = min_element(num.begin(), num.end());
  // cout << *it;

  // auto it = max_element(num.begin(), num.end());
  // cout << *it;


  return 0;
}

