#include <iostream>

using namespace std;

union u_type {
	//Constructors
	u_type(short a) { i = a;}
	u_type(char x, char y) { ch[0] = 1; ch[1] = y;}

	// memeber function (or method)
	void showchars() {
		cout << ch[0]<<" ";
		cout << ch[1]<<"\n"
	}
	short i;
	char ch[2];
};

int main(void) {
	u_type u1(16961); //0x4241
	u_type u2('X', 'Y');

	cout << "u1 is ac interger: ";
	cout << u1.i <<"\n";
	cout << " u1 as chars";
	u1.showchars();

	cout << "u2 is ac interger: ";
	cout << u2.i <<"\n";
	cout << " u1 as chars";
	u2.showchars();
	return 0;
	}

