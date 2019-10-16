#include <iostream>
#include <vector>

using namespace std;
//write your class here 
//the class should be named "ArrayPQ"

template <typename T>
class ArrayPQ {
  protected:
    vector<T> x;
  public:
    size_t size() {return x.size(); }

    bool empty() {return x.empty(); }

    T top() {
      //write your code here
    }

    void pop() {
      //write your code here
    }

    void push(const T& value) {
      x.push_back(value);
    }
};

int main() {

  ArrayPQ<int> p;
  p.push(1);
  p.push(10);
  p.push(5);
  p.push(3);

  while (p.empty() == false) {
    cout << "Size = " << p.size() << " top = " << p.top() << endl;
    p.pop();
  }
}

