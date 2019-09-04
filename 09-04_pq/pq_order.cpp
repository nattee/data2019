#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue<int,vector<int>, std::greater<int>> pq;

  pq.push(1);
  pq.push(5);
  pq.push(4);
  pq.push(2);
  pq.push(3);

  
  while( !pq.empty() ) {
    cout << pq.top() << endl;
    pq.pop();
  }
}

