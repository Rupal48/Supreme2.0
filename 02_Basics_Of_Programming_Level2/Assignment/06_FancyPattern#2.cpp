// The pattern itself
// for n=4

// 1
// 2*3
// 4*5*6
// 7*8*9*10
// 7*8*9*10
// 4*5*6
// 2*3
// 1

#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;

    // Upper Half
    int a = 1; // For printing numbers 
    for (int row=0;row<n;row++) {
        for (int col=0;col<2*row+1;col++) {

            // Since Col is starting from 0 putting * at every odd position
            // If it started from 1 we would have done it at even position
            if (col%2==1) {
                cout << "*";
            }
            // Printing the numbers and incrementing them after 1 use
            else {
                cout << a;
                a++;
            }

        }
        cout << endl;
    }

    // Lower Half
    // After the uppper half gets executed a=11 for n=4

    // Calculating start for the lower half
    int start = a - n;
    for (int row=0;row<n;row++) {
        int k = start;
        for (int col=0;col<2*(n-row)-1;col++) {
            if (col%2==1) {
                cout << "*";
            }
            else {
                cout << k;
                k++;
            }
        }
        // Updating start after each row
        start = start-(n-row-1);
        cout << endl;
    }

    return 0;
}