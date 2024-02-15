// Sort Colors on Leetcode -> 75

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {

        // 1. Basic Sorting Approach , TC -> O(nlogn)
        // 2. Counting the 0,1,2s , TC -> O(2n) or 2*O(n)


        // 3. Dutch National Flaag Algorithm
        // TC -> O(n)
        // SC -> O(1)

        int n=nums.size();
        int index=0;
        int left=0;
        int right=n-1;
        while(index<=right) {

            if (nums[index]==0) {
                swap(nums[index],nums[left]);
                index++;
                left++;
            }
            else if (nums[index]==2) {
                swap(nums[index],nums[right]);
                right--;
                //catch index++ nhi krna
                //cause right is at the end of unsorted array
                //hence we dont know what will come at the index posn
            }
            else {
                index++;
            }

        }
    }
};