#include <iostream>
using namespace std;
int main() {
    int ROWS=10;
    int COLS=7;

    // Outer Loop
    for (int row=0;row<ROWS;row++) {
        // Inner Loop
        for (int col=0;col<COLS;col++) {
            // If zeroth or last row, then print star
            if (row==0||row==ROWS-1) {
                cout << "* ";
            }
            // Else print 1 star at start and end filled with spaces in b/w
            else {
                if (col==0||col==COLS-1) {
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