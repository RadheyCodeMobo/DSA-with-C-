#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  // vector<int> num = {11,22,33,44,55,66};
  // vector<int>::iterator it;

  // for(it = num.begin(); it != num.end(); ++it){
  //   cout << *it << "\n";
  // }

  // vector<string> cars = {"A","B","C","D","E","F"};
  // vector<string>::iterator name;
  // name = cars.begin();
  // // name = cars.begin() + 1;
  // name = cars.end() -1 ;
  // name = cars.begin();
  // *name = "Z";
  // cout << *name;

  // vector<string> cars = {"A","B","C","D","E","F"};
  // // auto name = cars.begin();
  // // cout << *name;
  // for(auto name = cars.begin(); name != cars.end();++name){
  //   cout << *name << "\n";
  // }

  // for(string i : cars){
  //   cout << i << "\n";
  // }

  // vector<string> cars = {"A","B","C","D","E","F"};
  // for(auto name = cars.begin(); name != cars.end();){
  //   if(*name = "B"){
  //     name = cars.erase(name);
  //   }else {
  //     ++name;
  //   }
  // }
  // for(const string& car : cars){
  //   cout << car << "\n";
  // }

  // vector<string> brand = {"M", "A", "D", "B", "F", "C"};
  vector<int> brand = {2,5,1,3,65,32,78,35};
  sort(brand.rbegin(), brand.rend());

  for(int i : brand){
    cout << i << "\n";
  }
  return 0;
}