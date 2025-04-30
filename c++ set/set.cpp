#include <iostream>
#include <set>
using namespace std;

int main(){
  set<int> num = {33,55,22,44,11,66};
  // for(int i : num){
  //   cout << i << "\n";
  // }

  // set<int, greater<int>> num = {33,55,22,44,11,66,11};
  // for(int i : num){
  //   cout << i << "\n";
  // }

  // num.insert(100);
  // num.insert(16);
  // for(int i : num){
  //   cout << i << "\n";
  // }

  // num.erase(22);
  // for(int i : num){
  //   cout << i << "\n";
  // }

  // num.clear();
  // for(int i : num){
  //   cout << i << "\n";
  // }
  cout << num.size() << "\n";
  cout << num.empty() << "\n";
  set<int> number = {};
  cout << number.empty() << "\n";
  for(int i : num){
    cout << i << "\n";
  }
  return 0;
}