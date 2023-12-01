#include <iostream>
#include <limits.h> 
#include <vector>
using namespace std;

void printArray(int arr[],int size,int index) {

    //base case
    if (index >= size) {
        return;
    }

    //processing
    cout << arr[index] << " ";

    //recursive call
    printArray(arr,size,++index);

}

bool searchArray(int arr[], int size, int target, int index) {

    //base case
    if (index >= size) {
        return false;
    }

    if (arr[index] == target) {
        return true;
    }

    //recursive call
    // bool aageKaAns = searchArray(arr,size,target,++index);
    // return aageKaAns;

    searchArray(arr,size,target,++index);

}

void findMin(int arr[], int size, int index, int &mini) {
    //base case
    if (index >= size) {
        return;
    }

    //processing
    mini = min(mini, arr[index]);

    //Recursive Call
    findMin(arr, size, ++index,mini);
}

void solve(int arr[], int size, int index,  vector<int> &ans) {
    //base case
    if (index >= size) {
        return;
    }

    //processing
    if (arr[index] % 2 == 0) {
        ans.push_back(arr[index]);
    }

    //Recursive Call
    solve(arr,size,++index,ans);
}

void findMax(int arr[], int size, int index, int &maxi) {
    //base case
    if (index >= size) {
        return;
    }

    //processing
    maxi = max(maxi, arr[index]);

    //Recursive Call
    findMax(arr, size, ++index,maxi);
}

void Double(int arr[], int size, int index) {
    //base case
    if (index >= size) {
        return;
    }

    //processing
    arr[index]*=2;

    //Recursive Call
    Double(arr,size,++index);
}

int searchArrayReturnIndex(int arr[], int size, int index, int target) {

    //base case
    if (index >= size) {
        return -1;
    }

    if (arr[index] == target) {
        return index;
    }

    //recursive call
    // bool aageKaAns = searchArray(arr,size,target,++index);
    // return aageKaAns;
    searchArrayReturnIndex(arr,size,++index,target);

}

void AllOccurence(int arr[], int size, int index, int target) {
    //base case
    if (index >= size) {
        return;
    }

    //processing
    if (arr[index] == target) {
        cout << index << " ";
    }

    //Recursive Call
    AllOccurence(arr,size,++index,target);
}

vector<int> AllOccurenceReturnVector(int arr[], int size, int index, int target) {

    vector<int> ans;

    //base case
    if (index >= size) {
        return ans;
    }

    //processing
    if (arr[index] == target) {
        ans.push_back(index);
    }

    //Recursive Call
    vector<int> aageKaAns = AllOccurenceReturnVector(arr,size,++index,target);
}

int main() {

    int arr[] = {1,40,30,40,50};
    int size = 5;
    int index = 0;

    //Find all occurence of target elements by storing them in a vector
    int target = 40;
    vector<int> ans = AllOccurenceReturnVector(arr,size,index,target);
    for (auto num : ans) {
        cout << num << " "; 
    }

    // //Find all occurence of target elemnt
    // int target = 40;
    // AllOccurence(arr,size,index,target);

    //Search Array and return index if found
    // int target = 40;
    // cout << "Target found at index : " << searchArrayReturnIndex(arr,size,index,target);

    // //Doubling the Array
    // Double(arr,size,index);
    // printArray(arr,size,index);

    // int maxi = INT_MIN;
    // findMax(arr,size,index,maxi);
    // cout << "Maximum number in array : " << maxi << endl;

    // vector<int> ans;
    // solve(arr,size,index,ans);
    // for (auto elm : ans) {
    //     cout << elm << " ";
    // }

    // int mini = INT_MAX;
    // findMin(arr,size,index,mini);
    // cout << "Minimum number in array : " << mini << endl;

    // int target = 50;
    // cout << "Target found or not " << searchArray(arr,size,target,index) << endl;

    //printArray(arr,size,index);

    return 0;
}