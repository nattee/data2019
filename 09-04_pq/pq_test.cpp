#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue<pair<int,int>> pq;

  pq.push( make_pair(1,2) );
  pq.push( {1,200} );
  pq.push( {1,-100} );
  pq.push( {-2,3} );
  pq.push( {4,1} );

  while (!pq.empty() ) {
    auto x = pq.top();
    pq.pop();
    cout << x.first << "," << x.second << endl;

  }

  pair<int,int> a,b;
  a = {1,3};
  b = {1,5};
  if (a < b) {
    cout << "YEAH" << endl;

  }
}

