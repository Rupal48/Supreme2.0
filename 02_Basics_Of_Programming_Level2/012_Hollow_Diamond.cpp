#include <iostream>
using namespace std;
int main() {
    int num;
    cin >> num;
    int n=num/2;
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
    for (int row=0;row<n;row++) {
        //spaces
        for (int col=0;col<row;col++) {
            cout << " ";
        }
        //stars
        for (int col=0;col<n-row;col++) {
            if (col==0||col==n-row-1) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}