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

typedef bool(*CompFunc) (Book&, Book&);

bool myComp(Book &b1, Book &b2) {
  return b1.author < b2.author;
}

int main() {
  priority_queue<Book,vector<Book>,CompFunc> pq(myComp);

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

