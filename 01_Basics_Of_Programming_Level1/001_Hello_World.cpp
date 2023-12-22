#include <iostream>
using namespace std;
int main() {
    // bool n=1;
    // cout << ~n << endl;
    // cout << ~(n) << endl;
    // cout << (~n) << endl;
    int a=10;
    cout << ((++a)*(a++)) << endl;
    cout << ((a++)*(++a)) << endl;
    return 0;
}