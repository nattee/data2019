#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> x = {-11,-4,-2,-3,-9,-100};

  int max_value;


  //find max value here, using only iterator (do not use [ ] )
  //
//  for (size_t i = 0;i < x.size();i++) {
//    if (x[i] > max_value)
//      max_value = x[i];
//  }
  
  max_value = *(x.begin());
//  for (auto it = x.begin(); it != x.end(); it++) {
//    if (*it > max_value)
//      max_value = *it;
//  }

  for (auto a : x)
    if (a > max_value)
      max_value = a;
  }


  sort(x.begin(),x.end());
  max_value = *(x.end()-1);

  max_value = *max_element(x.begin(),x.end());

  cout << "The max value in the array is " << max_value << endl;

}

