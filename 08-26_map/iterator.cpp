#include <iostream>
#include <vector>

using namespace std;

int main() {
  //example of vector iterator
  vector<int> x = {10,20,30,40,50};

  vector<int>::iterator it;
  it = x.begin();
  cout << *it << endl;

  cout << *(it+1) << endl;

  it = it+2;
  cout << *it << endl;

  it = x.end()-2;
  cout << *it << endl;

  it = x.end();
  it--;
  cout << *it << endl;

  //this is wrong.... but compilable
  it = x.end();
  cout << "This should not be right" << endl << *it << endl;
}

