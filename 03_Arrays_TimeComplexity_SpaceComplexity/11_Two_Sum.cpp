// Two Sum on Leetcode Question 1

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // // BRUTE FORCE

        // vector<int> ans;
        // for (int i=0;i<nums.size()-1;i++) {
        //     for (int j=i+1;j<nums.size();j++) {
        //         if ((nums[i]+nums[j]) == target) {
        //             ans.push_back(i);
        //             ans.push_back(j);
        //             return ans;
        //         }
        //     }
        // }

        // // In case no pair is found just return the empty array/vector
        // return ans;


        // BETTER APPROACH USING HASHMAP

        map<int,int> mapp;
        for (int i=0;i<nums.size();i++) {

            // Calculaating the rest needed to reach the target
            int restReq = target - nums[i];

            // Check if the rest needed is already present in the hashmap or not 
            if (mapp.find(restReq) != mapp.end()) {
                // If present return the current index i and the index of the lement needed from the map
                // as mapp[restReq]
                return {i , mapp[restReq]};
            }

            // In case it is not present in the hashmap
            // we insert the value the element with its index in the hashmap

            mapp[nums[i]] = i;
        }

        // In case no pair is found we return {-1,-1}
        // Through we can return naything as the question tells us
        // To assume that each input will have exactly one solution
        return {-1,-1};


        // FINAL OPTIMAL APPROACH

        // Slightly better approach
        // If we need to solve it without using Hashmap
        // We will have to sort the array
        // Then use left and right pointers at the start and end resp
        // if sum of elements at left and right > target right-- if < target then left++
        // if equals then return YES

        // -------------BUT-----------------------
        // In case we need to return the indexes just like leetcode here
        // We will need to store the elemnts with their indexes 
        // Which will make the complexity same as previous
        // Hence No optimal solution exists in case we need to return indexes 

    }
};