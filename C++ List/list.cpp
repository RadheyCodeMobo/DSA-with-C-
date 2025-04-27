#include <iostream>
#include <list>
using namespace std;

int main()
{
  // create a list
  //  list<int> num = {11,22,33,44,55,66};
  //  for(int i : num){
  //    cout << i << "\n";
  //  }

  // //Access
  // list<int> num = {11,22,33,44,55,66};
  // cout << num.front() << "\n";
  // cout << num.back() << "\n";

  // change value of fisrt and last element
  //  list<int> num = {11,22,33,44,55,66};
  //  // num.front() = 1;
  //  // num.back() = 6;
  //  // cout << num.front() << "\n";
  //  // cout << num.back() << "\n";
  //  num.push_front(00);
  //  num.push_back(77);
  //  for(int i : num){
  //    cout << i << "\n";
  //  }

  // cout << "Removing\n";
  // num.pop_front();
  // num.pop_back();
  // for(int i : num){
  //   cout << i << "\n";
  // }

  list<int> num = {11, 22, 33, 44, 55, 66};
  cout << num.size() << "\n";

  cout << num.empty() << "\n";
  list<int> number = {};
  cout << number.empty() << "\n";

  for (int i : num)
  {
    cout << i << "\n";
  }

  return 0;
}