#include <iostream>
using namespace std;

float sqrtUptoNPlaces(int x, int n) {
    int start = 0, end = x;
    float ans = -1;
    while (start <= end) {
        // We took mid as long long because mid*mid will go out of range of int
        // when we take int mid
        long long mid = start + (end - start) / 2;
        if (mid * mid <= x) {
            ans = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }

    float precision = 0.1;
    for (int i=0;i<n;i++) {
        while ((ans+precision)*(ans+precision) <= x) ans += precision;
        precision /= 10;
    }
    return ans; 
}

int main() {
    int x = 10, n = 4;
    float ans = sqrtUptoNPlaces(x,n);
    cout << "Sqrt of " << x << " : " << ans << endl; 
    return 0;
}