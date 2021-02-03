#include <iostream>
using namespace std;
int main(void) {
	string hex;
	cout << "Enter a Hex: ";
	cin >> hex;
	int i = 0, res = 0;
	// Error handling
	while(hex[i] != '\0') {
		hex[i] = :: toupper(hex[i]); //Convert the char to uppercase
		i ++;
	}
	if (i != 4 || hex[1] != 'X') {
		cout << "Invalid hex";
		return -1;
	}
	// Check for the value in range
	if (hex[3] >= '0' && hex[3] <= '9') {
		res = 0;
	} else if(hex[3] >= 'A' && hex [3] <= 'F') {
		res = 0;
	} else if (hex[2] >= '0' && hex[2] <= '9') {
		res = 0;
	} else if(hex[2] >= 'A' && hex [2] <= 'F') {
		res = 0;
	} else 
		res = -1;
	// Check for result
	if (res == 0) {
		cout << "Valid hex" << hex;
		return 0;
	} else {
		cout <<"Invalid hex";
		return -1;
	}
}
