#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  //best k of n
  //do someting....
  priority_queue<int> pq;
  
  int n = 10;
  int k = 3;
  for (int i = 0;i < n;i++) {
    int tmp;
    cout << "Please enter data #" << i << ": ";
    cin >> tmp;
    //do someting....
    pq.push(tmp);
  }

  /// do something else....
  // that print  best K member of those n data
  cout << "Best K are" << endl;
  while (!pq.empty() && k > 0) {
    auto tmp = pq.top();
    pq.pop();
    cout << tmp << endl;
    k--;
  }
}

