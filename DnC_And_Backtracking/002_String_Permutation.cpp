#include <iostream>
using namespace std;

void printPermutation(string &str, int index) {
    //str ko by refernec paas kiya to save space
    //but usse ans glt ho jayega kyoki by reference pass krne pe 
    //original string change ho jayegi
    //to avoid that we addv an extra step while backtracking
    //so that the original string remains the same


    //base case
    if (index >= str.length()) {
        cout << str << " ";
        return;
    }

    for (int j = index; j<str.length(); j++) {
        swap(str[index], str[j]);

        //recursion bhaiya
        printPermutation(str,index+1);

        //backtracking -> so that actual string change na ho
        swap(str[index],str[j]);
    }
}

int main() {

    string str = "abc";
    int index = 0;
    printPermutation(str,index);

    return 0;
}