// Leetcode 532

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        // // 2-pointer approach
        // sort(nums.begin(),nums.end());
        // set<pair<int,int>> ans;
        // int i=0, j=1, n = nums.size();
        // while (j < n) {
        //     int diff = nums[j]-nums[i];
        //      if (diff == k) {
        //         ans.insert({nums[i], nums[j]});
        //         i++;
        //         j++;
        //     } 
        //     else if (diff < k) j++;
        //     else {
        //         i++;
        //         if (i == j) j++;
        //     }
        // }
        // return ans.size();
        // // TC -> O(nlogn + n) , SC -> O(n + logn)


        // Map Approach
        unordered_map<int,int> mp;
        int ans = 0;
        for (int el : nums) mp[el]++;
        for (auto x : mp) {
            if (k == 0 && x.second > 1) ans++;
            // else if (k != 0 && mp[x.first+k] > 0) ans++;
            else if (k != 0 && mp.find(x.first+k) != mp.end()) ans++;
        }
        return ans;
        // TC -> O(n + nlogn) , SC -> O(n + n) , space comp of find is O(n)

    }
};