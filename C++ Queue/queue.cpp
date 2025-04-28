#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> num;
  num.push(1);
  num.push(2);
  num.push(3);
  num.push(4);
  num.push(5);
  num.push(6);

  // cout<<num.front()<<"\n";
  // cout<<num.back()<<"\n";

  // num.front() = 0;
  // num.back() = 10;

  num.pop();
  cout<<num.front()<<"\n";
  cout<<num.size()<<"\n";
  cout<<num.empty()<<"\n";
  queue<int> number;
  cout<<number.empty();
  return 0;
}