#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int row=0;row<n;row++) {
        //First part of stars
        for (int col=0;col<2*n-2-row;col++) {
            cout << "*";
        }
        //Middle part of Pattern
        for (int col=0;col<2*row+1;col++) {
            if (col%2==1) {
                cout << "*";
            }
            else {
                cout << row+1;
            }
        }
        //Last part of stars
        for (int col=0;col<2*n-2-row;col++) {
            cout << "*";
        }
        cout << endl;
    } 
    return 0;
}