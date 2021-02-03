#include <iostream>

using namespace std;
int main(void) {
	const int rows = 3; //Number of rows
	const int cols = 3; //Number of cols
	//Float and Interger 3*3 arrays -randomly made up variable
	float myFloatArray[rows][cols] = { {34.235123F, 543.12345432F, 765.345871F}, {32.64345F, 34.7653F, 9658.7654F}, {29.234135F, 324843.63454234F, 69548.234534F} };
	int myIntArray[rows][cols] = { {432, 43, 25}, {124325, 765523, 23}, {64, 1, 7654526} };
	//Loops over all rows element
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j ++) {
			cout << myFloatArray[i][j] << " \n";

		}
	}
	cout << endl;
	//Formating IO Stream with member functions width and fill
	for (int h = 0; h < 2; h ++) {
		if (h == 0) {
			cout << "2D Array of Float Numbers\n";
			for (int i = 0; i < cols; i ++) {
				for (int j = 0; j < rows; j ++) {
					cout.width(10); // Set the width of the number to 8 spaces
					cout.fill('#'); //Fills preceding unused spaces (used in conjunction with the memeber function width
					cout << myFloatArray[i][j] << " ";
				}
				cout << endl;
			}
		} else {
			cout << "2D Array of Integer Numbers" << endl;	// Output to console
			for (int i = 0; i < rows; i++) {	// Loop over all row elements
				for (int j = 0; j < cols; j++) {	// Loop over all column elements
					cout.width(10);		// Set the width of the number to 8 spaces
					cout.fill('*');		// Fills preceding unused spaces (used in conjunction with member function width)
					cout << myIntArray[i][j] << " ";	// Output to console
				}
				cout << endl;
			}
		}
		cout << endl; //Insert new line
	}

	//Formating IO Stream with member function precision
	for (int h = 0; h < 2; h ++) { //Loops over 2 Array
		if (h == 0) {
			cout << "2D Array of Float numbers\n";
			for (int i = 0; i < rows; i ++) {
				for (int j = 0; j < cols; j ++) {
					cout.precision(14); // Set precision
					cout.setf(ios :: scientific); // Set scientific Formating flag
					cout << myFloatArray[i][j] << " ";
				}
				cout << endl;
			}
		} else {
			cout.setf(ios :: showbase);
			cout.setf(ios :: hex, ios :: basefield); //set scientific format flag 0 change hex to oct and dec
			cout << "2D Array of Integer Numbers" << endl;	// Output to console
			for (int i = 0; i < rows; i++) {	// Loop over all row elements
				for (int j = 0; j < cols; j++) {	// Loop over all column elements
					cout.width(10);		// Set the width of the number to 8 spaces
					cout.fill('*');		// Fills preceding unused spaces (used in conjunction with member function width)
					cout << myIntArray[i][j] << " ";	// Output to console
				}
				cout << endl;
			}
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}