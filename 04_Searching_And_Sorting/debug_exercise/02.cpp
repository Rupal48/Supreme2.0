// Debug the code. Find square root of x.
// int mySqrt(int x) {
//         if (x == 0)
//             return x;
//         int first = 1, last = x;
//         while (first <= last) {
//             int mid = first + (last - first) / 2;
//             if (mid  == x / mid)
//                 return mid;
//             else if (mid > x / mid) {
//                 last = mid;
//             }
//             else {
//                 first = mid;
//             }
//         }
//         return mid;
//     }


#include <iostream>
#include <vector>
using namespace std;

int mySqrt(int x)
{
    if (x == 0)
        return x;
    int first = 1, last = x;
    while (first <= last)
    {
        int mid = first + (last - first) / 2;
        if (mid == x / mid)
            return mid;
        else if (mid > x / mid)
        {
            last = mid-1; // mid-1 instead of mid
        }
        else
        {
            first = mid+1; // mid+1 instead of mid
        }
    }
    return first; // first in place of mid
}