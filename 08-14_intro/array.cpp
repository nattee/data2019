#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> a = {2,3};
  vector<int> b;
  b = a;
  a[0] = 100;
  for (size_t i = 0;i < a.size();i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  for (size_t i = 0;i < a.size();i++) {
    cout << b[i] << " ";
  }
  cout << endl;
}

