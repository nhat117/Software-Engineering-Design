#include <iostream>

using namespace std;
//Create Class
class Data {
		int a, b;
	public:
		// Constructor
		Data (int ina, int inb) {a = ina, b = inb;}
		int Geta() {return a;}
		int Getb()	{return b;}
		// Friend 
		// Allow friend to access private stuff of class
		// friend void Double (Data *ob);
		//class method
		void Double();
		friend int main();
	
};
//Calculating Function
// Data MyFunction( Data ob1, Data ob2) {
// 	Data res(0,0);
// 	res.a = ob1.a * ob2.a;
// 	res.b = ob1.b + ob2.b;
// 	return res; // Return the result
// }
//Friend stuff
// void Double ( Data * ob) // pass by referene {
// 	ob->a = ob -> a *2;
// 	ob->b = ob -> b *2;
// }

void Data :: Double() {
	// Double have access to a and b ass it's a class method
	a = a * 2;
	b = b * 2;
}


int main(void) {
	Data ob1(5,10);
	// res = MyFunction(ob1, ob2);
	ob1.Double();
	cout << "Result .a " << ob1.Geta() << endl;
	return 0;
}

