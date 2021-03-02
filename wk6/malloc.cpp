#include <iostream>
#include <string>
using namespace std;

const int VTYPE_LEN = 40;
const int VMAX = 3;

//Declare the vehicle class
class Vehicle {
	char vtype[VTYPE_LEN];
	int passengers; // Number of passengers
	int fuelcap;
	int mpg;
};

// This is the inline constructor for Vehicle
inline Vehicle :: Vehicle (char *vt, int p, int f, int m) {
	strncpy_s(vtype, VTYPE_LEN, vt, VTYPE_LEN -1);
	
}