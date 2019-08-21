#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  set<int> s;


  s.insert(10);
  s.insert(1);
  s.insert(6);
  s.insert(-10);
  s.insert(100);
  s.insert(7);
  s.insert(-10);
  s.insert(-10);
  s.insert(-10);

  //print out
  cout << "there are " << s.size() << " members in s" << endl;
  for (auto it = s.begin();it!= s.end();it++) {
    cout << "There is a " << *it << endl;
  }

  pair<set<int>::iterator,bool> result;
  result = s.insert(100);
  cout << *(result.first) << endl;
  cout << result.second << endl;
}

