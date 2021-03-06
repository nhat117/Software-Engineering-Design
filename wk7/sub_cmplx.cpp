// Subtract, multiply and sum the complex number
#include <iostream>
using namespace std;
//Class declaration
class cmplx{
	private :
		double real;
		double img;
	public :
	// Initialise
		cmplx() {real = 0; img = 0;}
	// Constructor
	cmplx(double r, double i) {real = r, img = i;}
	//Operator overload prototype
	cmplx operator + (cmplx var);
	cmplx operator - (cmplx var);
	cmplx operator * (cmplx var);
	// Method prototype
	void disp();
};
// Overload instruction
cmplx cmplx :: operator + (cmplx var) {
	//Operations
	cmplx tmp;
	tmp.real = real + var.real;
	tmp.img = img + var.img;
	return tmp;
}

cmplx cmplx :: operator - (cmplx var) {
	//Operations
	cmplx tmp;
	tmp.real = real - var.real;
	tmp.img = img - var.img;
	return tmp;
}

cmplx cmplx :: operator * (cmplx var) {
	//Operations
	cmplx tmp;
	tmp.real = real *var.real - img * var.img;
	tmp.img = real * var.img + img * var.real;
	return tmp;
}
// Display method
void cmplx :: disp() {
	cout << real;
	cout.setf(ios :: showpos);
	cout << img << "i\n";
}

int main(void) {
	cmplx n1 (2,3), n2 (5,6);
	cmplx sum = n1 + n2, mult = n1 * n2;
	cout << "sum: ";
	sum.disp();
	cout << "multiply: ";
	mult.disp();
	return 0;
}