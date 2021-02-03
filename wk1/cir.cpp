#include <iostream>
using namespace std;
int main(void) {
	const float PI = 3.14;
	float r; 
	float area, circumference;
	cout << "Enter r: ";
	cin >> r;
	area = PI * r * r;
	circumference = 2 * PI * r;
	cout << "Area is: " << area << " Circumference is: " << circumference;
	return 0;
}