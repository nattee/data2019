#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> x = {11,4,2,-3,9,100};

  for (vector<int>::iterator it = x.begin(); it != x.end(); it++) {
    cout << *it << endl;
  }

  //sort function, taking iterator of the position to be sorted
  sort(x.begin(),x.end());

  cout << "After sort" << endl;
  for (auto a : x) {
    cout << a << endl;
  }
}

