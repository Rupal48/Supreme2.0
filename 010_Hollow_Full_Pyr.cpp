#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int row=0;row<n;row++) {
        //spaces
        for (int col=0;col<n-row-1;col++) {
            cout << " ";
        }
        //stars
        for (int col=0;col<row+1;col++) {
            //printing star for first and last col
            if (col==0||col==row) {
                cout << "* ";
            }
            //for every other col
            else {
                cout << "  ";
            }
        }  
        cout << endl;
    }
    return 0;
}