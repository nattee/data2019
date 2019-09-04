#include <iostream>
#include <vector>

using namespace std;

int getDigit(int v, int k,base) {  // return the kth digit of v
    int i;
    for (i=0; i<k; i++) v /= base;
    return v % base;
}
void radixSort(vector<int> &data, int d) {  // d = #digits
    int base = 10;
    //declare queue as a vector
    for (int k=0; k<d; k++) {
        for (int i=0; i <  xxxx ; i++)  // <<- maybe do something here
            q[getDigit(data[i],k),base].push(data[i]);
        for (int i=0,j=0; i<base; i++)
            while(!q[i].empty()) {
                data[j++] = q[i].front(); q[i].pop();
            }
    }
}

int main() {
}

