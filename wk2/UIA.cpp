#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	//Assuming argc not greater than 9
	if(argc > 10) {
		cerr <<"More than 9 argument\n";
		//Exit with error code
		return -1;
	} else {
		const int SIZE = 9;
		int inputArgs[SIZE] = {}; //Int arr initialised
				// Output all user arguments to the console
		for (int i = 0; i < argc; i++) {	// Loop over all arguments
			cout << argv[i] << endl;	// Output to console
		}
		cout << endl;	// New line
		//Output all user arguments
		for (int i = 0; i < argc; i++ ) {
			for (int j = 0; argv[i][j] != '\0'; j++) {
				cout << argv[i][j] << endl;
			}
		} 
		cout << endl; //Newline
		//Check if user argument is valid
		for (int i = 1; i <argc; i++) {
			//Loop over all elements of the arra
			for (int j = 0; argv[i][j] != '\0'; j++) {
				if (j == 0) {
					//Check for invalid character
					if (!isdigit(argv[i][j] && argv[i][j] != '+' && argv[i][j] != '-')) {
						cout << "The " << i << " th input argument is not a valid interger.\n";
						cout << j << "th element is the non-compliant character.\n";
						//Exit program with error code
						return -1;
					} else {
						//Checking for invalid character
						if (!isdigit(argv[i][j])){
							//Output msg to the console
							cout <<"The " << i << "th input argument is not a valid interger.\n";
							cout << j + 1 << "th element is the non-compliant character.\n";
							return -1;
						}
					}
				}
			}
		}
		/* Note : Th inpurArgs are stored as C strings, if we want to use them in our program:
		1. Err checking has to be performed 
		2. Convert c string to the valid data type */
		//Loop iterate over all user input arguments
		for(int i = 1; i <argc; i++) {
			inputArgs[i] = atoi(argv[i]);
			cout << "The " << i << "the user argument is " << inputArgs[i] << endl; 
		}
	}
	return 0;
}