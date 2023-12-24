#include <iostream>
using namespace std;
int main() {

    int N=6;

    // Outer Loop
    for (int row=0;row<N;row++) {
        //Inner Loop
        for (int col=0;col<N-row;col++) {
            // If 0th and last row then print all stars
            if (row==0||row==N-1) {
                cout << "* ";
            }
            // Else print one star at the start and at the end and fill it with spaces in b/w
            else {
                if (col==0||col==N-row-1) {
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