#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1 = {10,20,30,40,50,60};

  vector<int> v2;

  //reverse v1 into v2 (v1 must be the same)
  //
  //DO SOMETHING HERE
  //


  cout << "This is v1" << endl;
  for (size_t i = 0;i < v1.size();i++) {
    cout << v1[i] << endl;
  }
  cout << "This is v2" << endl;
  for (size_t i = 0;i < v2.size();i++) {
    cout << v2[i] << endl;
  }
}

