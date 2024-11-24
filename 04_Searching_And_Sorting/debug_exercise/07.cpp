// Debug the code.
// int binarySearch(vector<int>& nums, int target) {
//         int left = 0, right = int(nums.size());

//         while (left < right) {
//             int mid = left + (right - left) / 2;
//             if (nums[mid] <= target) {
//                 left = mid;
//             } else {
//                 right = mid;
//             }
//         }

//         if (left >= 0 and nums[left] == target) {
//             return left;
//         } else {
//             return -1;
//         }
//     }



#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> &nums, int target)
{
    int left = 0, right = nums.size()-1;

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
        {
            left = mid+1;
        }
        else
        {
            right = mid;
        }
    }

    if (left >= 0 and nums[left] == target)
    {
        return left;
    }
    else
    {
        return -1;
    }
}