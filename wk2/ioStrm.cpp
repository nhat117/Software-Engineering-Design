#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	int var = 0;
	cout << "This message is an output to the console\n";
	cout << "Enter interger: ";
	cin >> var;
	cerr << "This is an output error stream\n";
	streambuf *cerrbuf = cerr.rdbuf(); //Redirect to the output error stream
	ofstream errorout("err.txt"); //Initializing an output filestream
	cerr.rdbuf(errorout.rdbuf()); //Ridirecting cerr to the output filestream

	if(var > 0 && var < 10) {
		cout << "The interger is inrange\n";
	} else if (var < 0) {
		cout << "Invalid in \n";
		cerr << "Int enterd: " << var << "Is less than 0.\n";
		return -1;
	} else {
		cout << "Invalid int enterd. \n";
		cerr << "Int enterd" << var <<">10.\n";
		return -1;
	}
	cerr.rdbuf(cerrbuf); //redirecting cerr back to the console
	cerr << "This is abn output error stream.\n";
	//Exit program with no error code
	return 0;
}