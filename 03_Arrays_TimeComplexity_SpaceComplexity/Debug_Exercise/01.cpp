// Debug the code. Sum of array.
// #include<iostream>
// using namespace std;

// int main(){
//     int n, sum;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[0];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0; // Just did sum = 0
    cin >> n;
    int input[n];
    for (int i = 0; i < n; i++)
    {
        cin >> input[i]; // Did input[i] instead of input[0]
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + input[i];
    }
    cout << sum << endl;
    return 0;
}