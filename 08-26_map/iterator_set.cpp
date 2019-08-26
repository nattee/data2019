#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  set<int> s;

  cout << "Step 1:" << endl;
  s.insert(11);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << "Step 2:" << endl;
  s.insert(4);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << "Step 3:" << endl;
  s.insert(2);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << "Step 4:" << endl;
  s.insert(-3);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << "Step 5:" << endl;
  s.insert(9);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << "Step 6:" << endl;
  s.insert(100);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }

  cout << "Step 7 (erase)" << endl;
  s.erase(2);
  for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
    cout << *it << endl;
  }
}

