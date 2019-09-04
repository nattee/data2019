#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::greater<int> comp;

  if (comp(1,3)) {
    cout << "YES " << endl;
  } else {
    cout << "NOT YES " << endl;
  }
}

