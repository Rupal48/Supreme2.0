// Debug the code. Correct the code for printing the pattern.
// #include<iostream>
// using namespace std;

// /*
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// */

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){
//         for(j=i;j<n;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;

/*
Pattern for N = 4
4444
333
22
1
*/

int main() {
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++) {       // Initialized the loop with i = 0 instead of i = 1 increasing the no. of rows
        for (j = i; j < n; j++) {
            cout << n - i;          // Printing n-i insted of just i which was just wrong
        }
        cout << endl;
    }
}