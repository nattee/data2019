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

    T top() {return x.back(); }

    void pop() {x.pop_back(); }

    void push(const T& value) {
      //write your code here

      //x.push_back(value);
      //sort(x.begin(),x.end()); //  <---- this is O(n lg n)

//      for (int i = 0;i < size()-1;i++) {
//        if ((value > x[i]) && (value < x[i+1])) {
//          x.insert(x.begin() + i + 1,value);
//
//        }

//      bool added = false;
//      for (int i = 0;i < size();i++) {
//        if (value <= x[i]) {
//          x.insert(x.begin()+i,value);
//          added = true;
//          break;
//        }
//      }
//      if (added == false) {
//        x.push_back(value);
//
//      }
      auto it = x.begin();
      while (it != x.end()); {
        if (value < *it) {
          break;
        }
        it++;
      }
      x.insert(it,value);
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

