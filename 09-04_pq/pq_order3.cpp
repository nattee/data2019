#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Book {
  public:
    string name;
    string author;
    double price;

  bool operator<(const Book& other) const {
    return price < other.price;
  }

};

class BookComp {
  public:
    bool operator()(const Book &b1, const Book &b2) const {
      return b1.name < b2.name;
    }
};

int main() {
  priority_queue<Book,vector<Book>,BookComp> pq;
  priority_queue<Book> pq2;

  Book a,b;
  a.name = "Harry Potter"; a.author = "JK"; a.price = 10.3;
  b.name = "Harry Potter 2"; b.author = "JK"; b.price = 12;
  
  if (a < b) {
    cout << "YES 1" << endl;
  }

  BookComp bc;
  if (bc(a,b)) {
    cout << "YES 2" << endl;
  }

  pq.push(a);
  pq.push({"VAJA JAVA","Somchai",5.5});

  pq2.push(a);
  pq2.push({"VAJA JAVA","Somchai",5.5});
  
  while( !pq.empty() ) {
    auto x = pq.top();
    cout << "Title: " << x.name << endl;
    pq.pop();
  }
  cout << "PQ2" << endl;

  while( !pq2.empty() ) {
    auto x = pq2.top();
    cout << "Title: " << x.name << endl;
    pq2.pop();
  }
}

