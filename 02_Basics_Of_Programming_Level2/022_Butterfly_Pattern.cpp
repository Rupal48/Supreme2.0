#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    //Upper Half
    int n1=(n+1)/2;
    for (int row=0;row<n1;row++) {
        //Half Pyr
        for (int col=0;col<row+1;col++) {
            cout << "*";
        }
        //Middle Spaces
        for (int col=0;col<2*(n1-row-1);col++) {
            cout << " ";
        }
        //2nd Half Pyr
        for (int col=0;col<row+1;col++) {
            cout << "*";
        }
        cout << endl;
    }

    //Lower Half
    int n2=n-n1;
    for (int row=0;row<n2;row++) {
        //Inv Half Pyr
        for(int col=0;col<n2-row;col++) {
            cout << "*";
        }
        //Middle Spaces or Gap
        for (int col=0;col<2*row;col++) {
            cout << " ";
        }
        //2nd Half Pyr
        for(int col=0;col<n2-row;col++) {
            cout << "*";
        }
        cout << endl;
    }
}