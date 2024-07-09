// Leetcode 75

#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int idx = 0, left = 0, right = n-1;
        // we end at idx <= right because after right all elements are 2 acc to DUtch National Flag
        while (idx <= right) {
            if (nums[idx] == 0) swap(nums[idx++],nums[left++]);
            // We dont do idx++ since we dont know what we are swapping idx with
            else if (nums[idx] == 2) swap(nums[idx],nums[right--]);
            else idx++;
        }

        // TC -> O(n)
        // SC -> O(1)

    }
};