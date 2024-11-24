#include <iostream>
#include <vector>
using namespace std;




int BS(vector<int>& nums, int start, int end, int target) {
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) start = mid+1;
        else end = mid-1;
    }
    return -1;
    
}



int exponentialSearch(vector<int>& nums, int x) {

    if (nums[0] == x) return 0;
    int i=1, n = nums.size();
    while (i < n && nums[i] <= x) i *= 2;

    return BS(nums,i/2,min(i,n-1),x);

}



int main() {

    vector<int> nums = {3,4,5,6,11,13,14,15,56,70};
    int x = 13; // Target

    cout << "Target is found at : " << exponentialSearch(nums,x);

    return 0;
}