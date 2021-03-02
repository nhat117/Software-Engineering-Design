#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
// All memeber share the same memory location
// static union {
// 	long l;
// 	double d;
// 	char s[4];
// };

// int main(void) {
// 	l = 10000000;
// 	cout << l << "\t";
// 	d = 123.2342;
// 	cout << d << "\t";
// 	strcpy(s, "hi");
// 	cout << s << endl;
// 	return 0;
// }
union u_type {
	int val;
	char ch[4];
};

int main(void) {
	u_type MyUnion;
	// Set a random memory address
	MyUnion.val = 0x00434241;

	cout << MyUnion.ch << endl;
	cout << MyUnion.ch[0] << endl;
	cout << MyUnion.ch[1] << endl;
	cout << MyUnion.ch[2] << endl;

	cout << sizeof(u_type) << endl;
}