#include <iostream>
#include <vector>

using namespace std;

int main() {
  //as in ex1, you have to create an array of size 5
  //but this time, the value should be read from the keyboard
  pair<int,int> A[5];

  for (int i= 0;i< 5;i++) {
    cout << "Enter value for pair " << i << ": " << endl;
    cin >> A[i].first;
    cin >> A[i].second;
  }

  //this will printout array A
  for (int i = 0;i < 5;i++) {
    cout << i << ": {" << A[i].first << "," << A[i].second << "}" << endl;
  }

  //next, you must find the index of A such that its second value is maximum
  int max = A[0].second;
  for (int i = 0;i < 5;i++) {
    if (A[i].second > max) {
      max = A[i].second;
    }
  }

  for (int i = 0;i < 5;i++) {
    if (A[i].second == max) {
      cout << i << endl;
    }
  }
}

