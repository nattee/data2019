#include <iostream>
#include <vector>

using namespace std;

void square(int &x) {
  x = x*x;
}
void half(int x) {
  x = x/2;

}

int main() {
  int y = 20;
  square(y);
  cout << "y = " << y << endl;
  half(y);
  cout << "y = " << y << endl;


  //square(30);


}

