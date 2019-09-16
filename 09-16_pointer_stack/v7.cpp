#include <iostream>
#include <vector>

using namespace std;

int main() {

  unsigned short  *x;
  x = new unsigned short[10];
  for (int i = 0;i < 10;i++) {
    x[i] = i * 10;
  }

  cout << "Address: " << endl;
  cout << x << endl;
  cout << &x[0] << endl;
  cout << &x[1] << endl;
  cout << &x[2] << endl;
  cout << (x+4) << endl;

  cout << endl << "value: " << endl;
  cout << *x << endl;
  cout << x[1] << endl;
  cout << x[2] << endl;
  cout << *(x+4) << endl;
}

