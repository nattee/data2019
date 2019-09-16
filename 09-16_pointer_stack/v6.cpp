#include <iostream>
#include <vector>

using namespace std;

int main() {
  int *p, *q;
  int x;

  p = new int;
  q = new int(20);

  x = *q;
  *p = 30;
  *q = *p;

  cout << *p << endl;
  cout << *q << endl;
  
  cout << x << endl;

  delete p;
  delete q;
}

