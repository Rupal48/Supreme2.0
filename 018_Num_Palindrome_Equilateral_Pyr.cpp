#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int row=0;row<n;row++) {
        //Spaces or Gaps
        for (int col=0;col<n-row-1;col++) {
            cout << " ";
        }
        //First half of the pyramid
        for (int col=0;col<row+1;col++) {
            cout << col+1;
        }
        //Rest Half of the Pyramid
        for (int col=0;col<row;col++) {
            cout << row-col;
        }
        cout << endl;
    }
    return 0;
}