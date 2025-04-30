#include <iostream>
#include <map>
using namespace std;

int main(){
  map<string, int> person = {
    {"Bapu", 20},
    {"Ram", 20},
    {"Mahesh", 22}
  };

  // cout << "Radhey is: " <<person["Radhey"] << "\n";
  // cout << "Ram is: " <<person["Ram"] << "\n";
  // cout << "Rakesh is: " <<person["Rakesh"] << "\n";

  // cout << "Radhey is: " <<person.at("Radhey") << "\n";
  // cout << "Ram is: " <<person.at("Ram") << "\n";
  // cout << "Rakesh is: " <<person.at("Rakesh") << "\n";
  // cout << "Rakesh is: " <<person.at("Jenny") << "\n"; give error

  // person["Rakesh"] = 24;
  // cout << "Rakesh is: " <<person.at("Rakesh") << "\n";
  // person.at("Radhey") = 30;
  // cout << "Radhey is: " << person.at("Radhey") << "\n";

  // person["Aniket"] = 19;
  // person.insert({"Rohit Sharma", 38});
  // person.insert({"Rohit Sharma", 37});
  // cout << "Aniket is: " << person.at("Aniket") << "\n";
  // cout << "Rohit Sharma is: " << person.at("Rohit Sharma") << "\n";

  // person.erase("Rakesh");
  // cout << "Rakesh is: " <<person.at("Rakesh") << "\n";
  // person.clear();
  // cout << person.size() << "\n";
  // cout << person.empty() << "\n";

  // cout << person.count("Radhey") << "\n";
  // cout << person.count("Virat") << "\n";

  for(auto i : person){
    cout << i.first << " : " <<  i.second << "\n";
  }

  // cout << "Reverse order \n";
  // map<string, int, greater<string>> people = {
  //   {"Bapu", 20},
  //   {"Ram", 20},
  //   {"Mahesh", 22}
  // };
  // for(auto i : people){
  //   cout << i.first <<  " : " << i.second << "\n";
  // }
  // return 0;

}