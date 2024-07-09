// Leetcode 287

#include <vector>
using namespace std;

class Solution {
public:

    // // Making functions for Bitwise Approach
    // int findMaxNo(vector<int> nums) {
    //     int maxi = 0;    // 0 works cause elements in nums lie bw 1 and n
    //     for (int i=0;i<nums.size();i++) maxi = max(maxi,nums[i]);
    //     return maxi; 
    // }
    // int calcMaxBits(int maxNo) {
    //     int bits = 0;
    //     while(maxNo) {
    //         maxNo /= 2;
    //         bits++;
    //     }
    //     return bits;
    // }

    int findDuplicate(vector<int>& nums) {
        
        // 1. Brute Force -> Just using 2 for loops and checking for each pair if they are same or not
        // TC -> O(N2) , SC -> O(1)


        // 2. Using hashmap, array or hashset to store the count of the respective elements
        // TC -> O(n) , SC -> O(n)


        // 3. There are other approaches like sorting too but since they modify the original array we do not consider them


        // // 4. Using Binary Search -> This way Tc incr. but we reduce SC to O(1)
        // // Here we take low = 1 , high = n and find mid for it
        // // Then we check how many elements are smaller than my mid 
        // // if count <= mid then that means the repeaating element is > mid

        // int n = nums.size();
        // int low = 1 , high = n-1 , ans = 0;
        // while(low <= high) {
        //     int mid = low + (high-low)/2;
        //     int count = 0;
        //     for (int i=0;i<n;i++) if(nums[i] <= mid) count++;   // Calc count of smaller elements than mid

        //     if (count <= mid) low = mid+1;
        //     else {
        //         ans = mid;
        //         high = mid-1;
        //     }

        // }
        // return ans;
        // // TC -> O(nlogn) , logn as we are doing binary search and n as we are finding countt for each mid


        // // 4. Bit Manipulation Approach
        // // All the deatils are written in the notebook
        // int duplicate = 0;
        // int n = nums.size()-1;
        // int maxNo = findMaxNo(nums);
        // int maxBits = calcMaxBits(maxNo);

        // for (int bit=0;bit < maxBits;bit++) {
        //     int mask  = (1 << bit);
        //     int numsCount = 0 , baseCount = 0;

        //     // For bit traversing thorugh the entire array
        //     for (int i=0;i<=n;i++) {
        //         if ((i & mask) > 0) baseCount++;
        //         if ((nums[i] & mask) > 0) numsCount++;
        //     }
        //     if (numsCount > baseCount) duplicate |= mask;

        // }
        // return duplicate;
        // // TC -> O(nlogn) , n for n-elements and logn for no of bits for every integer


        // Optimal Approach
        // 5. Using slow and fast pointers
        // Details in the Notebook
        int slow = 0 , fast = 0;
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = 0;
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        
        return slow;
        // TC -> O(N) , since only one traversal/loop was used at a time
        // SC -> O(1)

        // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
        // Also watch its solution from assignment week 3 from supreme 2.0
        // It has some really nice solutions
        // @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

    }
};