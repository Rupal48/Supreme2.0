#include <iostream>
using namespace std;
int main() {

    int ROWS = 4, COLS = 4;

    // Outer Loop
    for (int row=0;row<ROWS;row++) {
        //Inner Loop
        for (int col=0;col<COLS;col++) {
            // Printing stars equals to no of rows/cols so that it makes a squaare
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}