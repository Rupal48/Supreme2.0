#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int row=0;row<n;row++) {
        int a=1;
        for (int col=0;col<row+1;col++) {
            if (row==0||row==n-1) {
                cout << a;
            }
            else {
                if (col==0||col==row) {
                    cout << a;
                }
                else {
                    cout << " ";
                }
            }
            a++;
        }
        cout << endl;
    }
}