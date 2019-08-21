#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::pair<string,int> p1,p11;
  std::pair<float,int> p2;

  p1.first = "dae";
  p1.second =20;

  p11.first = "somchai";
  p11.second = -5;

  p2.first = 2.33;
  p2.second = 9999;

  p1 = p11;
  //p2 = p1;


  p11.first = "xxx";
  cout << p1.first << " : " << p1.second << endl;
  cout << p2.first << " : " << p2.second << endl;
  cout << p11.first << " : " << p11.second << endl;
}

