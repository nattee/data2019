#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue< vector<int> > pq;

  pq.push( {1,200} );
  pq.push( {1,2,3,4,5} );
  pq.push( {1,2,3,4,5,6} );
  pq.push( {1,2,3,4} );
  pq.push( {1,2,3,5} );

  pq.push( {-2,3} );
  pq.push( {4,1} );

  while (!pq.empty() ) {
    auto x = pq.top();
    pq.pop();
    for (auto y : x) {
      cout << y << ", ";
    }
    cout << endl;
  }

}

