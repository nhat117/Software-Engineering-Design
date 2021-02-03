#include <iostream>
#include <stdlib.h>

using namespace std;

bool intchck(char *innum) {
	for (int i = 0; innum[i] != '\0'; i++) {
		if(isdigit(innum[i]) != 0) 	
			return false;
	}
	return true;
}

//Store in int array 
void storeint(char *innum, int *stoarr, int *index) {
	if (intchck(innum) == 0) {
		//Convert char array into an interger
		*(stoarr + *index) = atoi(innum);
	} else 
		cout << "Invalid" << intchck(innum);
}
	
int main(int argc, char * argv[]) {
	//Error handling
	if (argc < 1 || argc >10) {
		cout << " Invalid argument pls try again 1";
		return -1;
	}
	//initialise
	int *stoarr;
	for (int i = 1; i <= argc -1; i++) {
		storeint(argv[i], stoarr, &i);
		//Out put the content of the array;
		cout << " " << *(stoarr + i);
	}
	return 0;
}