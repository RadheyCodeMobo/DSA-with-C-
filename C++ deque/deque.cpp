#include <iostream>
#include <deque>
using namespace std;

int main() {
  deque<int> num = {11,22,33,44,55,66};
  // for(int i: num){
  //   cout << i << "\n";

  // }

  // cout << num[0] << "\n";
  // cout << num[3] << "\n";

  // cout << num.front() << "\n";
  // cout << num.back() << "\n";
  // cout << num.at(4) << "\n";
  // cout << num.at(2) << "\n";

  // cout << num.at(6); give error

  // num[3] = 100;
  // cout << num[3];

  // num.at(4) = 122;
  // cout << num.at(4);

  // num.push_front(100);
  // num.push_back(111);
  // for(int i: num){
  //   cout << i << "\n";
  // }
  // cout << "Removing\n";
  // num.pop_front();
  // num.pop_back();
  // for(int i: num){
  //   cout << i << "\n";
  // }

  // int sizeOfDeque = num.size();
  // cout << sizeOfDeque;

  // cout << "Size: " << num.size();

  // cout << num.empty() << "\n";
  // deque<int> number;
  // cout << number.empty();

  // for(int i = 0; i < num.size(); i++){
  //   cout << num[i] << "\n";
  // }

  for(int i : num){
    cout << i << "\n";
  }
  return 0;

}