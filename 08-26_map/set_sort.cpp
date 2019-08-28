#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
  
  vector<int> v;

  v.push_back(10);
  v.push_back(2);
  v.push_back(-3);
  v.push_back(7);
  v.push_back(4);
  v.push_back(8);

  //sort element of v
  //  we can easily use sort(v.begin(), v.end())
  //  but please do not use that
  //  Instead, you must use a set<int> to sort the data
  //  by putting all data in v into a set and iterate
  //  every member in the set and put them back into the vector


  // display everything in the vector
  for (auto it = v.begin();it != v.end();it++) {
    cout << *it << endl;
  }
}

