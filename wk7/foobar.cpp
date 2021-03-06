#include <iostream>

using namespace std;

// Class declairation
class bar; // Prototype class definition

class foo {
	int a; // a is a private member
	public :
		foo(int x) {a = x;} // Constructor
		int getb(bar b); // Declare method
};

class bar{
	int b;
	public:
		bar(int x) {b = x;}
		friend int foo :: getb(bar b);
};

int foo :: getb(bar b) {
	return b.b;
}

int main(void) {
	foo foo(5);
	bar b(2);
	cout << foo.getb(b)<< endl;
}