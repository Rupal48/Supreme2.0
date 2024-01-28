#include <iostream>
using namespace std;

// 1 km = 0.621371 miles
float kmToMiles(float km) {
    return 0.621371*km;
}

int main() {

    float km;
    cout << "Input Distnce in km : ";
    cin >> km;
    float miles = kmToMiles(km);
    cout << "Miles : " << miles << endl;

    return 0;
}