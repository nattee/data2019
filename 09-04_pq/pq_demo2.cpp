#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  vector<int> v = {11,20,-3,4,9};
  priority_queue<int> q(v.begin(), v.end());

  
  while( !q.empty() ) {
    cout << q.top() << endl;
    q.pop();
  }
}

