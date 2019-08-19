//this is like "import" in python
#include <iostream>
#include <vector>

using namespace std;

int main() {
  //c++ is static typed, which means that each variable is associated with a fixed typed
  //Hence, we must declare the type of variables
  int x;
  x = 20;

  //to display the variable onto a screen, we use object "cout" with operator " << "
  cout << x << endl;

  cout << "Enter a value for x: ";

  //to get the input from keyboard, we use the object "cin" with operator " >> "
  cin >> x;

  cout << "You have entered a half of " << x*2 << endl;

  //this is an example of a for loop
  for (int i = 0;i < 20;i++) {
    if (i % 2 == 0) {
      //the fully qualified name of "cout" is std::cout
      //we are too lazy to type std::cout every time we use it, 
      //so we delcare "using namespace std" but it still is OK to use in the 
      //fully qualified name
      std::cout << i << ": " << i*x << std::endl;
    } else {
      cout << "skipped" << endl;
    }
  }
}

