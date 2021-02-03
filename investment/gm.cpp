#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

int main(void){
	int n ;
	cout <<"Please enter n:";
	cin >> n;
	double a[n],gm;
	//file opening
	ifstream infile("B.txt");
	//Check for file opening
	if (infile.is_open()) {
		int i = 0;
		while(!infile.eof()) {
			infile >> a[i];
			a[i] +=1;
			i++; 
		}
	}
	//Mult elementof the array
	double mult = 1;
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
		mult *= a[i];
	}
	//Compute gm
	gm = pow(mult, 1/n) - 1;
	//Out put gm
	cout.precision(14);
	cout << "mult: " << mult << "gm: " << gm;
	infile.close();
	return 0;
}