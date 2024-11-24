#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> &nums, int target) {

    int n = nums.size();
    int start = 0, end = n-1;

    while (start <= end) {

        // Base Case
        int mid = start + (end-start)/2;
        if (nums[mid] == target) return mid;
        else if (mid > 0 && nums[mid-1] == target) return mid-1;
        else if (mid < n-1 && nums[mid+1] == target) return mid+1;

        if (nums[mid] < target) start = mid+2;
        else end = mid-2;

    }

    return -1;

}

int main() {

    vector<int> nums = {20,10,30,50,40,70,60};
    int target = 60;
    cout << target << " found at index : " << bs(nums,target) << endl;

    return 0;
}