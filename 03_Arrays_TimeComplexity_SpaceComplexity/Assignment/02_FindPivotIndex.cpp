// 724 on leetcode

#include <vector>
using namespace std;

class Solution {
public:

    // Prefix Sum Approach

    int pivotIndex(vector<int>& nums) {
        int total=0;
        int leftSum=0;
        for(int i=0;i<nums.size();i++) {
            total+=nums[i];
        }
        for(int i=0;i<nums.size();i++) {
            total-=nums[i];
            if (total==leftSum)
                return i;
            leftSum+=nums[i];
        }
        return -1;
    }

    // TC -> O(2*n)
    // SC -> O(1)

};