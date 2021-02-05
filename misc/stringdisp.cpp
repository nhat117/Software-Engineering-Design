#include <iostream>
#include <string>
using namespace std;
int main(void) {
	string strg;
	cout << "Enter string: ";
	//Get the input whole line
	getline(cin,strg);
	cout << "Entered string is: " << strg;
	return 0;

}