#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

int convint(int *input, int t) {
	int sumint= 0;
	for (int i = 0; i < 8; i ++) {
		//Change to base 10
		sumint += input[i] * pow( 7 - i, 2);
	} 
	return sumint;
}

int arraytoint (char *array) {
	int arrayint[9], i = 0;
	for (i = 0; array[i] !='\0'; i++) {
		//Convert array of bin char to int array
		*(arrayint + i) = array[i] - '0';	
	}
	return convint(arrayint, i);
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		cout << " Invalid argument pls try again 1";
		return -1;
	}
	//Loop through the argument array to count the number of character
	int count1 = 0, count2 = 0;
	while(argv[1][count1] != '\0'|| argv[2][count2] != '\0') {
		count1 ++;
		count2 ++;
	}
	if (count1 != 7 || count2 != 7) {
		cout << "Invalid pls try again 2";
		return -1;
	}
	// Check for 0 and 1
	//Reset the counting variable
	count1 = 0, count2 = 0;
	while(argv[1][count1] != '\0' && argv[2][count2] != '\0') {
		if ((argv[1][count1] != '0') && (argv[1][count1] != '1')) {
			cout << "Invalid pls try again 3";
			return -1;
		}
		if ((argv[2][count2] != '0') && (argv[2][count2] != '1')) {
			cout << "Invalid pls try again 4";
			return -1;
		}
		count1 ++;
		count2 ++;
	}
	//Output the result
	cout << argv[1] << " is: "<< arraytoint(argv[1]) << endl;
	cout << argv[2] << " is: "<< arraytoint(argv[2]) << endl;
	return 0; 
}
