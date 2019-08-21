#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<int> v;
  std::vector<int> v1(6);
  std::vector<int> v2(20,5);

  v1[4] = 20;
  v = v1;

  cout << "this is v1" << endl;
  for (size_t i = 0;i < v1.size();i++) {
    cout << i << ": " <<  v1[i] << endl;
  }
  cout << "this is v" << endl;
  for (size_t i = 0;i < v.size();i++) {
    cout << i << ": " <<  v[i] << endl;
  }

  cout << "this is v2 BEFORE" << endl;
  for (size_t i = 0;i < v2.size();i++) {
    cout << i << ": " <<  v2[i] << endl;
  }
  v2 = v1;
  v1[0] = 0;
  v1[1] = 1;
  cout << "this is v2" << endl;
  for (size_t i = 0;i < v2.size();i++) {
    cout << i << ": " <<  v2[i] << endl;
  }
}

