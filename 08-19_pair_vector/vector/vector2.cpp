#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<string> vs1;

  cout << "Now vs1 has " << vs1.size() << " element" << endl;

//  cout << "this is vs1" << endl;
//  for (size_t i = 0;i < vs1.size();i++) {
//    cout << i << ": " <<  vs1[i] << endl;
//  }
//  return 0;

  vs1.push_back("asdf");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("asdf2");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("asdf3");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("somchai");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("xxx");

  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }

  vs1.resize(10);
  cout << "after resize 10" << endl;
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }

  vs1.resize(3);
  cout << "after resize 3" << endl;
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }
  vs1.resize(6);
  cout << "after resize 6" << endl;
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }
}

