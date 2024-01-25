// Debug the code. Return true if the number is member of fibonacci series else false.
// void checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return true;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return false;
//             }
//             else if(temp>n){
//                 return true;
//             }
//         }
//     }

// }

#include <iostream>
using namespace std;

bool checkMember(int n){            // Changed return type from void to bool
    int f1 = 1, f2 = 1;
    if(n==0 && n==1){
        return true;
    }
    else{
        while(1){
            int temp = f1 + f2;
            f1 = f2;
            f2 = temp;
            if(temp==n){
                return false;
            }
            else if(temp>n){
                return true;
            }
        }
    }

}

int main() {

    bool fib = checkMember(8);
    if (fib == 0) {
        cout << "Fibonacci Member" << endl;
    }
    else {
        cout << "Not a Fibonacci member" << endl;
    }

    return 0;
}