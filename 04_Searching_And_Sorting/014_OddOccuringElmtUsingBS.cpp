// The Repeating elmts are adjcent

#include <iostream>
#include <vector>
using namespace std;

int oddOccuring(vector<int> nums) {

    int start = 0, end = nums.size()-1, ans = -1;

    while (start <= end) {
        int mid = start + (end-start)/2;
        if (mid%2 == 0) {
            // Ab kyoki mid+1 se compare krna but out of bounds ka khatra
            // But agr last elmt ko skip krenge to ans last elmt pe bhi ho skta
            // Isliye no returning ans only changing start and end
            if (nums[mid] != nums[mid+1]) {
                ans = mid;
                end = mid-1;
            }
            else start = mid+2;
        }
        else {
            if (nums[mid] != nums[mid-1]) {
                ans = mid-1;
                end = mid-2;
            }
            else {
                start = mid+1;
            }
        }
    }

    return ans;

}

int main() {

    vector<int> nums = {10,20,20,30,30,50,50,60,60};

    int idx = oddOccuring(nums);
    if (idx != -1) cout << "The odd occuring elmt is : " << nums[idx] << endl;
    else cout << "No odd elmt" << endl;

    return 0;
}