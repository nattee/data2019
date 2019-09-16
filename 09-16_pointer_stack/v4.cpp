#include <iostream>
#include <vector>

using namespace std;

void test(int x) {

}

int a;
int b;

int main() {
  int x = 10;
  int y = 20;
  int z;

  cout << "x: " << x << endl;
  cout << "&x: " << &x << endl;
  cout << "&y: " << &y << endl;
  cout << "&z: " << &z << endl;
  cout << "&a: " << &a << endl;
  cout << "&b: " << &b << endl;
  cout << "&test() " << (long)&test << endl;
}

