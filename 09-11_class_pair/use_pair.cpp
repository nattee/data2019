#include <iostream>
#include "pair.h"
#include <vector>

using namespace std;

int main() {
  CP1::pair<vector<int>,int> p1,p2;

  p1.first = 10;
  p1.second = 20;

  p2 = p1;


  if (p2 == p1) {
    cout << "YES " << endl;

  }

  cout << p1.first + p1.first << endl;

}
