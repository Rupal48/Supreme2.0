#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int row=0;row<n;row++) {
        char ch;
        for (int col=0;col<row+1;col++) {
            int number=col+1;
            ch = number+'A'-1;  //char ch = col + 'A' will work too
            cout << ch;
        }
        //Jab tk A ni aata tb tk print krenge
        for (char alphabet=ch;alphabet>'A';) {
            alphabet--;
            cout << alphabet;
        }
        cout << endl;
    }
    return 0;
}