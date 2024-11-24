#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

int main() {
    // Dynamic memory allocation for an array
    int* arr = new int[5]{1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 2, 5, 3};
    vector<int> arr3 = {3, 2, 5, 3, 6};

    cout << typeid(arr).name() << endl;
    cout << typeid(arr2).name() << endl;
    cout << typeid(arr3).name() << endl;

    // Output the values of the dynamically allocated array
    // Don't forget to deallocate the memory
    delete[] arr;

    return 0;
}
