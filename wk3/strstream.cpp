#include <iostream>
#include <sstream>

using namespace std;

int main(void) {
	stringstream ss; //Create a string stream 
	int day, month, year;
	char myChar = 0;
	ss << "14/08/1999" << endl; //stringstream
	ss >> day >> myChar >> month >> myChar>> year;
	cout << "Date of birth is " << day << endl;		// Output to console
	cout << "Month of birth is " << month << endl;	// Output to console
	cout << "Year of birth is " << year << endl;	// Output to console

	int wholeNum, dec; 
	ss.str("");
	ss << "3.14159" << endl;
	ss >> wholeNum >> myChar >> dec;
	cout << "pi contain: " << wholeNum <<" whole unit\n";
	cout << "num after dec: " << dec << endl;
	return 0; 
}