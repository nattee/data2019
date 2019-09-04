#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Book {
  public:
    string name;
    string author;
    double price;

    bool operator<(const Book &other) const {
      return price < other.price;
    }
};

int main() {
  priority_queue<Book> pq;

  Book a;
  a.name = "Harry Potter"; a.author = "JK"; a.price = 10.3;

  pq.push(a);
  pq.push({"VAJA JAVA","Somchai",5.5});


  while( !pq.empty() ) {
    auto x = pq.top();
    cout << "Title: " << x.name << endl;
    pq.pop();
  }
}

