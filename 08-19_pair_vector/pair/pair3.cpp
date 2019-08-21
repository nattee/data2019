#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::pair<string,int> student[10];

  student[0].first = "somchai";
  student[0].second = 50;

  student[1].first = "somying";
  student[1].second = 100;

  student[2].first = "somying2";
  student[2].second = 1000;

  student[2] = student[0];

  student[9] = student[0];
  for (int i = 0 ; i < 10   ;  i++  ) {
    cout << i << "  " << student[i].first << " : " << student[i].second << endl;

  }


      /*
  cout << student[0].first << " : " << student[0].second << endl;
  cout << student[1].first << " : " << student[1].second << endl;
  cout << student[2].first << " : " << student[2].second << endl;
  cout << student[3].first << " : " << student[3].second << endl;
  cout << student[4].first << " : " << student[4].second << endl;
  cout << student[5].first << " : " << student[5].second << endl;
  cout << student[6].first << " : " << student[6].second << endl;
  cout << student[7].first << " : " << student[7].second << endl;
  cout << student[8].first << " : " << student[8].second << endl;
  cout << student[9].first << " : " << student[9].second << endl;
  cout << student[10].first << " : " << student[10].second << endl;
  */

}

