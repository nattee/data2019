#include <iostream>

using namespace std;


int main() {
  std::pair<string,int> p1("hahaha",3999);
  std::pair<float,int> p2(3.14,2);

  p1 = make_pair("somchai",200);
  p2 = make_pair(55.33, 9999);

  p1 = { "asdf", 111};

  std::cout << p1.first << " : " << p1.second << std::endl;
  std::cout << p2.first << " : " << p2.second << std::endl;

  p1.first = "nattee";
  cout << "after assigning nattee to first of p1" << endl;
  std::cout << p1.first << " : " << p1.second << std::endl;

}

