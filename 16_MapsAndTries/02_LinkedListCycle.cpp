// Leetcode 141 Linked List Cycle

#include <iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        // unordered_map<ListNode*,bool> mp;
        // ListNode *temp = head;

        // while (temp) {
        //     if (mp.find(temp) != mp.end()) return true;
        //     mp[temp] = true;
        //     temp = temp->next;
        // }

        // return false;

        // // TC -> O(n) , SC -> O(n)


        // Better Approach
        // Slow and Fast Pointers
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }

        return false;

        // TC -> O(n) , SC -> O(1)

    }
};