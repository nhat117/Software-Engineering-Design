#include <iostream>
#include <fstream>
#include <string>

using namespace std;



int main(void) {
	int value = 1;
	//Array of input value
	char line[] = { 0x5A, 0x3F, 0x33, 0x3D, 0x40, 0x6B, 0x4C, 0x58, 0x72, 0x4E, 0x2F };
	int ints[] = { 23, 36, 10, 00, 127, 256, 873, 365, 1024, 3425, 5096, 231, 943 };
	double doubles[] = { 34.25, 9e15, 3e-09, 935.23, -634.23, 345.92, -254.76, 8.9e5, 436.34e10 };

	//Open file
	ofstream outfile1("insertion.hex", ios :: out | ios:: binary); // Declare our stream is out and file type is binary
	ofstream outfile2("put.hex", ios :: out | ios:: binary); 
	ofstream outfile3("write.hex", ios :: out | ios:: binary); 
}