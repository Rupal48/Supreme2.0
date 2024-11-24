#include <iostream>
using namespace std;

int findQuotient(int dividend, int divisor) {
    int start = 0, end = dividend, ans = -1;
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
    return ans;
}

int main() {

    int dividend = -29, divisor = -7;

    int quotient = findQuotient(abs(dividend),abs(divisor));

    if (dividend < 0 ^ divisor < 0) quotient = 0-quotient;

    cout << dividend << "/" << divisor << " = " << quotient << endl; 

    return 0;
}