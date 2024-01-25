// Debug the code. This code is trying to calculate area of a rectangle.
// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	int area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

#include<iostream>
using namespace std;

int main() {
	double width, height;
	cin >> width >> height;
	double area = width * height; // int area chamged to double area as int loses the decimal values
	cout << area << endl;
	return 0;
}