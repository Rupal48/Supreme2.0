// Common in 3 sorted Arrays on GFG

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        
        // // Set Implementation
        // int ptr1 = 0 , ptr2 = 0 , ptr3 = 0 , n1 = arr1.size() , n2 = arr2.size() , n3 = arr3.size();
        // set<int> st;
        // vector<int> ans;
        // while (ptr1 < n1 && ptr2 < n2 && ptr3 < n3) {
        //     if (arr1[ptr1] == arr2[ptr2] && arr2[ptr2] == arr3[ptr3])  {
        //         // Inserting common elements in set to avoid duplicates
        //         st.insert(arr1[ptr1]);
        //         ptr1++;
        //         ptr2++;
        //         ptr3++;
        //     }
        //     else if (arr1[ptr1] < arr2[ptr2]) ptr1++;
        //     else if (arr2[ptr2] < arr3[ptr3]) ptr2++;
        //     else ptr3++;
        // }
        
        // for (auto x : st) ans.push_back(x);
        // return ans;
        // // TC --> O(n1+n2+n3) , SC -> O(min(n1,n2,n3))
        
        
        
        // Implementation without using any Data Structure
        int ptr1 = 0 , ptr2 = 0 , ptr3 = 0 , n1 = arr1.size() , n2 = arr2.size() , n3 = arr3.size();
        unordered_set<int> st;
        vector<int> ans;
        while (ptr1 < n1 && ptr2 < n2 && ptr3 < n3) {
            if (arr1[ptr1] == arr2[ptr2] && arr2[ptr2] == arr3[ptr3])  {
                ans.push_back(arr1[ptr1]);
                ptr1++;
                ptr2++;
                ptr3++;
                while (ptr1 < n1 && arr1[ptr1] == arr1[ptr1-1]) ptr1++;
                while (ptr2 < n2 && arr2[ptr2] == arr2[ptr2-1]) ptr2++;
                while (ptr3 < n3 && arr3[ptr3] == arr3[ptr3-1]) ptr3++;
            }
            else if (arr1[ptr1] < arr2[ptr2]) ptr1++;
            else if (arr2[ptr2] < arr3[ptr3]) ptr2++;
            else ptr3++;
        }
        return ans;
        // TC -> O(n1+n2+n3) , SC -> O(1)
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends