#include <iostream>
using namespace std;

void print(int n) {
    //base case
    if(n==1) {
        cout << 1;
        return;
    }

    //Processing
    cout << n << " ";

    //Recursive Call
    print(n-1);
}

int main() {
    print(5);
    return 0;
}