#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> nums, int n) {
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    while (start < end) {
        if (nums[mid]>nums[n-1]) {
            return mid;
        }
    }
}

int main() {
    vector<int> nums = {4,5,1,2,3};
    int n = nums.size();
    
    int pivot = findPivot(nums,n);

    return 0;
}