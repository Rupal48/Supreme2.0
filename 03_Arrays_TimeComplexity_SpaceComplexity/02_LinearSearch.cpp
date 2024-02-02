#include <iostream>
using namespace std;
int main() {

    int arr[5] = {2,3,4,5,6};
    int target = 5;
    int n = 5;

    bool flag = 0;
    // 0 -> not found
    // 1 -> found

    for (int i=0;i<n;i++) {
        
        if (arr[i] == target) {
            // found
            flag = 1;
            break;
        }

    }

    if (flag == 1) {
        cout << "Target found." << endl;
    }
    else {
        cout << "Target not found." << endl;
    }

    return 0;
}