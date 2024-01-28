#include <iostream>
using namespace std;

float areaOfCircle(float radius) {
    // Area = pi*r*r;
    return 3.14*radius*radius;
}

int main() {

    float radius;
    cin >> radius;
    float Area = areaOfCircle(radius);
    cout << "Area of Circle : " << Area << endl;

    return 0;
}