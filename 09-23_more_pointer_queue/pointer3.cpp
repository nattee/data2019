#include <iostream>
#include <vector>

using namespace std;

void test1(int &x) {
  x = x +10;
}

void split(int input, int &o1, int &o2) {
  o1 = input / 2;
  o2 = input - o1;
}

void test2(int *x) {
  cout << "inside test2 " << endl;
  cout << x << endl;
  cout << *x << endl;
  *x = 40;

  cout << " test2  end" << endl;
}

int main() {
  int x = 20;
  int *p = &x;
  test2(p);

  cout << x << endl;

}

