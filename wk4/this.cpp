#include <iostream>

using namespace std;

class MyObject {
	int i;
public: 
	void set_i(int val) {this -> i = val;}
	// we could of written ; { i = val;}
	int get_i() {return this ->i;}
};

int main(void){
	MyObject ob1;
	ob1.set_i(100);
	cout << ob1.get_i() << endl;
}