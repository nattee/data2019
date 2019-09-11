#include <iostream>
#include <vector>

using namespace std;

void test(int &x) {
  cout << "inside test function X is " << x <<endl;
  x = 20;
}

int main() {

  int y;
  y = 10;

  test(y);
  cout << "outside test function Y is " << y <<endl;
}

