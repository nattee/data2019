#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

  priority_queue<int> q1;
  q1.push( 1 );
  q1.push( 2 );

  priority_queue<int> q2;
  q2.push( 4 );

  if (q1 < q2) {
    cout << "YEAH " << endl;

  }
}

