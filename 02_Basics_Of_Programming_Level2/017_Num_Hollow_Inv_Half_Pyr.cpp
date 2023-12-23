#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int row=0;row<n;row++) { 
        for (int col=0;col<n-row;col++) {
            //First and the last two rows
            if (row==0||row>=n-2) {
                cout << row+col+1;
            }
            //Rest of the rows
            else {
                //First and Last Col
                if (col==0||col==n-row-1) {
                    cout << row+col+1;
                }
                //Gaps in b/w rows
                else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}