#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v1 = {10,20,30};
  v1.push_back(40);

  for (auto &x : v1) {
    cout << x << " ";
  }
  cout << endl;

  cout << " after .... " << endl;
  vector<int> *p1;
  p1 = &v1;

  //(*p1).push_back(50);
  p1->push_back(50);
  for (auto &x : v1) {
    cout << x << " ";
  }
  cout << endl;
}

