#include <iostream>
using namespace std;
int main() {

    int N=4;

    // Outer Loop
    for (int row=0;row<N;row++) {
        //Inner Loop
        // print n-row-1 spaces
        for (int col=0;col<N-row-1;col++) {
            cout << "  ";
        }
        // Printing the rest of the pattern
        for (int col=0;col<2*row+1;col++) {
            // If 0th and last row print all stars
            if (row==0||row==N-1) {
                cout << "* ";
            }
            // Else print 1 star at the start and at the end and fill up space sin bw
            else {
                if (col==0||col==2*row) {
                    cout << "* ";
                }
                else {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}