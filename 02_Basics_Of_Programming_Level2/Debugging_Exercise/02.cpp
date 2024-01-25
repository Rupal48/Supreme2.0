// Debug the code. Convert Binary to Decimal.
// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n/10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n%10;
//     }
//     cout<<sum;
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int n,sum=0,factor=1;
    cin>>n;
    while(n!=0){
        int digit = n%10;          // Changed n/10 to n%10 here
        sum = sum + digit*factor;
        factor = 2*factor;
        n = n/10;                 // Changes n%10 to n/10 here
    }
    cout<<sum;
    return 0;
}