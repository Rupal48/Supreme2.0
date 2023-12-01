#include <iostream>
using namespace std;
int main() {
    int no;
    cin >> no;
    int n1=(no+1)/2;
    int n2=no-n1;
    for (int row=0;row<n1;row++) {
        for (int col=0;col<row+1;col++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int row=0;row<n2;row++) {
        for (int col=0;col<n2-row;col++) {
            cout << "*";
        }
        cout << endl;
    }
}