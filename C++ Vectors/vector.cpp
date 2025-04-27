#include <iostream>
#include <vector>
using namespace std;

int main() {
  // //create a vector
  // vector<string> cars = {"Volvo", "BMW", "Toyata", "Quv"};

  // //print elements of the vector
  // for(string i : cars){
  //   cout << i << "\n";
  // }

  //Access Vector
  // vector<int> num = {11,22,33,44,55,66};
  // cout << num[0] << "\n";
  // cout << num[4] << "\n";
  // cout << num[7] << "\n" NO ERROR
  // //access firts and last element using function
  // cout << num.front() << "\n"; //print 1st element
  // cout << num.back() << "\n"; //print last element

  // //access at a specified index
  // cout << num.at(3) << "\n";
  // cout << num.at(2) << "\n";
  // cout << num.at(7) << "\n"; THROW AN ERROR


  // //CHANGE A VECTOR ELEMENTS
  // vector<int> num = {11,22,33,44,55,66};
  // num[4] = 99;
  // cout << num[4] << "\n";
  // num.at(4) = 55;
  // cout << num.at(4) << "\n";

  // ADD and REMOVE ELEMENTS TO THE VECTOR
  // vector<int> num = {11,22,33,44,55,66};
  // num.push_back(77);
  // num.push_back(88);
  // num.push_back(99);
  // num.push_back(100);
  // for(int i : num){
  //   cout << i << "\n";
  // }
  // cout << "Remove Last Element\n";
  // num.pop_back(); //automatically remove last element of the vector
  // for(int i : num){
  //   cout << i << "\n";
  // }
  // cout << "Remove Last Element\n";
  // num.pop_back(); //automatically remove last element of the vector
  // for(int i : num){
  //   cout << i << "\n";
  // }


  //Size of Vector
  // vector<int> num = {11,22,33,44,55,66};
  // cout << num.size() << "\n";
  // //check vector is empty or not 1= empty and 0 = not empty
  // cout << num.empty() << "\n";
  // vector<int> number;
  // cout << number.empty() << "\n";


  //loop through a vector
  vector<int> num = {11,22,33,44,55,66};
  for(int i=0; i<num.size(); i++){
    cout << num[i] << "\n";
  }
  cout << "Using fopr-each loop\n";
  for(int i : num){
    cout << i << "\n";
  }
  return 0;
}