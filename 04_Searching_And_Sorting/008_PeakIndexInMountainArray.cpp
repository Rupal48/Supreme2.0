// Leetcode 852

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        // We did start < end instead of <= because uss scenario me infinite loop
        // me chale jayenge because of end = mid
        while(start<end) {
            int mid = start + (end-start)/2;
            if (arr[mid] < arr[mid+1]) {
                // A wali line me hu
                //peak right me exist krti h
                start = mid+1;
            }
            else {
                //yaa toh main B par hu
                // ya to me Peak element pr hu
                end = mid;
            }
        }
        return start;
    }
};