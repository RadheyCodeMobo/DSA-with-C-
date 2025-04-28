#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> num;
  num.push(11);
  num.push(22);

  // num.top() = 33;
  // num.pop();
  
  // // cout << num.top();
  // cout << num.size();
  cout << num.empty() << "\n";
  stack<int> number;
  cout << number.empty()<< "\n";
  return 0;
}