#include <iostream>

using namespace std;

// Class Declaration
class cmplx {
	//Private members
	double real;
	double img;
	public:
		cmplx() {real = 0, img = 0;}
		cmplx(double r, double i) { real = r; img = i;} // Constructor
		cmplx operator + (cmplx var);//operator overload prototype
		void disp (); // prototype for method
		
};
// method
void cmplx :: disp() {
	cout << real; // Display real part
	cout.setf(ios :: showpos); // Set format of real part
	cout << img << "i\n"; // Display img part
}
cmplx cmplx :: operator + (cmplx var) {
	// Operations
	cmplx tmp;
	tmp.real = real + var.real;
	tmp.img = img + var.img;
	return tmp;
}
int main(void) {
//creat complex number object
	cmplx n1 (2, 3);
	cmplx n2 (5, 6);
	cmplx res;
	// sum 2 cmplx using overload operator
	res = n1 + n2;
	// Call cmplx num display methodm
	res.disp();
	return 0;
}