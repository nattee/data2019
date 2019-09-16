#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;
  int &y = x;
  x = 10;
  y = 20;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
}

