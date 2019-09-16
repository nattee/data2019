#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x,y;
  int *p1, *p2;

  x = 20;
  y = 30;

  p1 = &x;
  p2 = p1;

  cout << "p1: " << p1 << endl;
  cout << "p2: " << p2 << endl;
  cout << "*p1: " << *p1 << endl;
  cout << "*p2: " << *p2 << endl;
  cout << "&p1: " << &p1 << endl;
  cout << "&p2: " << &p2 << endl;


  *p2 = 40;
  cout << x << endl;
  x = 99;
  cout << *p1 << endl;
  // continue
  int z = 100;
  p2 = &z;
  p1 = &y;
  y = x;
  z = 20;
  *p1 = *p2;
}

