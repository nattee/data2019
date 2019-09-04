#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> q;

  q.push(10);
  q.push(11);
  q.push(12);
  q.push(9);
  while( !q.empty() ) {
    cout << q.top() << endl;
    q.pop();

  }

}

