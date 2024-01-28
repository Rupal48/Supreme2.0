// Set Kth Bit Question on Leetcode

#include <iostream>
using namespace std;

int setKthBit(int N, int K)
{
    // Write Your Code here
    int mask = 1 << K;
    int ans = N | mask;
    return ans;
        
    // OR
    // return N | 1 << K;
}