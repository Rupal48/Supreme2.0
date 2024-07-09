// Leetcode 26

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 1 , j = 0;
        // Here j is the index of unique element
        while (i < n) {
            if (nums[i] != nums[j]) {
                // We did j++ before because we only do it after we find a new element
                // Also the element at 0th index will always be new
                j++;
                nums[j] = nums[i];
            }
            i++;
        }
        // j becomes the last index of the new element
        // Hence size of the array is j+1
        return j+1;

        // TC -> O(n)
        // SC -> O(1)

    }
};