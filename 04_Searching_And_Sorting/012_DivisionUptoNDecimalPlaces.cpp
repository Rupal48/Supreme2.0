#include <iostream>
using namespace std;

float findQuotient(int dividend, int divisor, int n) {
    int start = 0, end = dividend;
    float ans = -1;
    if (divisor == 0) return ans;
    while (start <= end) {
        int mid = start + (end-start)/2;
        if (mid*divisor == dividend) return mid;
        if (mid*divisor < dividend) {
            ans = mid;
            start = mid+1;
        }
        else end = mid-1;
    }

    float precision = 0.1;
    for (int i=0;i<n;i++) {
        while ((ans+precision)*divisor <= dividend) ans += precision;
        precision /= 10;
    }
    return ans; 
}

int main() {
    int dividend = 29, divisor = 7, n = 2;

    float quotient = findQuotient(abs(dividend),abs(divisor),n);

    if (dividend < 0 ^ divisor < 0) quotient = 0-quotient;

    cout << dividend << "/" << divisor << " = " << quotient << endl; 

    return 0;
}