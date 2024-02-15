// Three Sum on Leetcode 15

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // // BRUTE FORCE
        // // This soln will give time limit exceeded error as Time comp is very high

        // set<vector<int>> st;
        // for (int i=0;i<nums.size();i++) {
        //     for (int j=i+1;j<nums.size();j++) {
        //         for (int k=j+1;k<nums.size();k++) {
        //             if (nums[i]+nums[j]+nums[k] == 0) {
        //                 vector<int> temp = {nums[i],nums[j],nums[k]};
        //                 sort(temp.begin(),temp.end());
        //                 st.insert(temp);
        //             }
        //         }
        //     }
        // }
        // vector<vector<int>> ans(st.begin(),st.end());
        // return ans;


        // // BETER SOLN
        // // Decreasing no of loops used from 3 to 2
        // // By Using Hashing
        // // This will also give Time Limit Exceeded Error

        // set<vector<int>> st;
        // for (int i=0;i<nums.size();i++) {
        //     set<int> hashset;
        //     for (int j=i+1;j<nums.size();j++) {
        //         int third = -(nums[i]+nums[j]);
        //         if (hashset.find(third) != hashset.end()) {
        //             vector<int> temp = {nums[i],nums[j],third};
        //             sort(temp.begin(),temp.end());
        //             st.insert(temp);
        //         }
        //         hashset.insert(nums[j]);
        //     }
        // }
        // vector<vector<int>> ans(st.begin(),st.end());
        // return ans;


        // OPTTIMAL APPROACH

        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++) {
            if (i>0 && nums[i] == nums[i-1]) continue; // To make sure duplicate element is not used at ith pos
            int j = i+1;
            int k = nums.size()-1; // Starting k from the end
            while(j<k) {
                int sum = nums[i]+nums[j]+nums[k];
                if (sum < 0) {
                    j++; // To increase the value of sum
                }
                else if (sum > 0) {
                    k--; // To decrease the valllue of sum
                }
                else {
                    // When sum == 0 which is the req cond
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++; // To make sure duplicate is not used at jth posn
                    while(j<k && nums[k] == nums[k+1]) k--; // To make sure duplicate is not used at kth posn
                }
            }
        }
        return ans;

    }
};