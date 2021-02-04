#include <iostream>
#include <fstream>
#include<cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
	//Initializing err stream;
	streambuf *cerrbuf = cerr.rdbuf(); //Redirect to the output error stream
	ofstream errorout("err.txt"); //Initializing an output filestream
	cerr.rdbuf(errorout.rdbuf()); //Ridirecting cerr to the output filestream
	bool isint[10];
	//Check the number of argc
	if (argc != 11) {
		cerr << "Wrong number of argument, please try again";
		return -1;
	}
	 // Check for the valid of the argument
	for (int i = 1 ; i < argc; i ++) {
		for (int j = 0; argv[i][j] !='\0'; j ++) {
			if(isdigit(argv[i][j]) == 1 || argv[i][j] == '-') { 
				//Check for sign of '.' 
				if (argv[i][j] == '.') {
					isint[i-1] = false;
					continue;
				} else {
					isint[i-1] = true;
					continue;
				}
			} else {
				//Check if the entered number is interger or not
				if (isint[i-1] == false)
					cerr << argv[i] <<" is an Invalid float entered";
				else
					cerr << argv[i] <<" is an Invalid int entered";
				return -1;
			}
		}
	} 
	for (int i = 1; i < argc; i++) {
		//Check if the entered number is interger or not
		if (isint[i-1] == false)
			cout << argv[i] << "is a valid float";
		else
			cout << argv[i] << "is a valid int";
	}
	cerr.rdbuf(cerrbuf);
	errorout.close();
	return 0; 
}
