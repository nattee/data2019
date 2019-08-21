#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1 = {10,20,30,40,50,60};

  vector<int> v2;
  //reverse v1 into v2 (v1 must be the same)

  // --- example 1 ---
//  for (size_t i = 0;i < v1.size();i++) {
//    v2.push_back(v1[v1.size() - i - 1]);
//  }

  // --- example 2 ---
  for (size_t i = 0;i < v1.size();i++) {
    v2.insert(v2.begin(),v1[i]);
  }

  // --- example 3 ---
//  v2 = v1;
//  for (int i = 0;i < v1.size()/2;i++) {
//    int tmp;
//    tmp = v2[i];
//    v2[i] = v2[v2.size() - i -1];
//    v2[v2.size() - i -1] = tmp;
//  }



  cout << "This is v1" << endl;
  for (size_t i = 0;i < v1.size();i++) {
    cout << v1[i] << endl;
  }
  cout << endl;

  cout << "This is v2" << endl;
  for (size_t i = 0;i < v2.size();i++) {
    cout << v2[i] << endl;
  }
}

