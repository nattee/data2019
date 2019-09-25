#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;
  x = 20;
  int &y = x;
  int *p;

  p = &x;
  cout << p << endl;
  p++;
  cout << p << endl;
  cout << *p << endl;
}

