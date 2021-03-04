#include <iostream>

using namespace std;
//Create Class
class Data {
	public:
		int a, b;
		// Constructor
		Data (int ina, int inb) {a = ina, b = inb;}
		int Geta() {return a;}
		int Getb()	{return b;}
		// Friend 
		friend void Double (Data *Ob);
		friend void main(); // Wtf
		
};
//Calculating Function
Data MyFunction( Data ob1, Data ob2) {
	Data res(0,0);
	res.a = ob1.a * ob2.a;
	res.b = ob1.b + ob2.b;
	return res; // Return the result
}
int main(void) {
	Data ob1(5, 2);
	Data ob2(10,20);
	Data res(0,0);
	res = MyFunction(ob1, ob2);
	cout << "Result .a " << res.a << endl;
	cout << "Result.b" << res.b;
	return 0;
}

