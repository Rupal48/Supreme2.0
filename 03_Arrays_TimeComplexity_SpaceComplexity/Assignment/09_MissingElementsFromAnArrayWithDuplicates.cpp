// Missing elements from an array with duplicates
// Ek n size ka array h usem 1 to n elements but
// Usme kuch elemets missing h kyoki dosre ke duplicates h
// Find the missing elements
// eg: arr = {2,1,3,3,3} , 4 and 5 are missing

#include <iostream>
using namespace std;

// Visited Method
// We treat the array values as idexes and mark all the visited ones by making them -ve
// Atlast the indexes which remain +ve are also the values which are missing from the array
void findMissing(int *arr, int n) {
    for (int i=0;i<n;i++) {
        int index = abs(arr[i])-1;    // i-1 because indexes are from 0to(n-1) and values from 1ton
        if (arr[index] > 0) arr[index] *= -1; 
    }

    // Now printing all the +ve indexes as they are the missing values as well
    for (int i=0;i<n;i++) if (arr[i] > 0) cout << i+1 << " ";
    cout << endl;
}


// Sorting via swapping method
// Hr element ko uske designsted index pe rkhne ki koshish krenge like 1to0 , 3to2
// And this is done via swapping
// At the end the elements which are not equal to this idexes are the missing ones
void find(int *arr, int n) {
    int i=0;
    while (i < n) {
        int index = arr[i]-1;
        if (arr[i] != arr[index]) swap(arr[i],arr[index]);
        else i++;
    }
    for (int i=0;i<n;i++) if (arr[i] != i+1) cout << i+1 << " ";
    cout << endl;
}


int main() {

    int arr[] = {1,3,5,3,4};
    int arr2[] = {1,3,3,3,4}; 
    int n = sizeof(arr)/sizeof(int);
    
    // Using Visited Methhod
    // findMissing(arr,n);
    // findMissing(arr2,n);

    // Using sorting via searching method
    find(arr,n);
    find(arr2,n);

    return 0;
}

// TC of both the funcs/methods is O(n)
// SC of visited method -> O(1) , since here we can change the array back to its original state
// SC of sorting method -> O(n) , here we cannot change the aarray back to its original state , hence , we make copy of arr so n for that