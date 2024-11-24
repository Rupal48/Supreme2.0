// Leetcode 767 Reorganize String

#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

class Solution {
public:
    string reorganizeString(string s) {
        
        unordered_map<char,int> freq;
        for(auto &ch : s) freq[ch]++;

        priority_queue<pair<int,char>> maxHeap;
        for (auto& x : freq) maxHeap.push({x.second,x.first});

        string ans = "";

        while (maxHeap.size() >= 2) {

            auto x = maxHeap.top();
            maxHeap.pop();
            auto y = maxHeap.top();
            maxHeap.pop();

            ans += x.second;
            ans += y.second;

            if (x.first > 1) maxHeap.push({x.first-1,x.second});
            if (y.first > 1) maxHeap.push({y.first-1,y.second});

        }

        if (!maxHeap.empty()) {
            auto x = maxHeap.top();
            // In this case the same char will for sure be adjacent so we return empty string
            if (x.first > 1) return "";
            ans += x.second;
        }

        return ans;

    }
};