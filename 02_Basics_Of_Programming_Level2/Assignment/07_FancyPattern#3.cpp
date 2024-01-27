// The Pattern itself
// for n=7;
// *
// *1*
// *121*
// *12321*
// *121*
// *1*
// *

// My way of doing it is this one , it is a bit long code
// Lakshay sir made a very small code by making formulas and using if else conditions
// He did it by using the two loops only once
// So focus on making formulas and use conditions for different parts of the code to make it smaller
// Although this one is not wrong either

#include <iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    // Putting this condition cause the code prints atleast 2 stars even for n = 1
    if (n==1) {
        cout << "*" << endl;
        return 0;
    }

    int N = n-2;
    int n1 = (N+1)/2;
    int n2 = N/2;

    cout << "*" << endl;                    // Printing star in the 1st row

    // Upper Half
    for (int row=0;row<n1;row++) {
        cout << "*";                        // Printing a star at the start of each row

        // Printing the increasing no.s
        int a=1;
        for (int col=0;col<=row;col++) {
            cout << a++;
        }

        // Printing the decreasing no.s
        a = a-2;
        while(a>=1) {
            cout << a--;
        }
        cout << "*" << endl;                // Printing a star at the start of each row
    }

    // Lower Half
    for (int row=0;row<n2;row++) {
        cout << "*";                        // Printing a star at the start of each row

        // Printing the increasing no.s
        int a=1;
        for (int col=0;col<n2-row;col++) {
            cout << a++;
        }

        // Printing the decreasing no.s
        a = a-2;
        while(a>=1) {
            cout << a--;
        }
        cout << "*" << endl;                // Printing a star at the start of each row
    }
    
    cout << "*" << endl;                    // printing star in the last row

    return 0;
}