#include<iostream> 
using namespace std;

class ThreeD {
	int x,y,z; // 3D coordinates
	public:
		ThreeD() {x = y= z= 0;}
		ThreeD(int i, int j, int k) {x = i, y = j, z = k;}
		void show() {cout<<'\t'<< x <<'\t'<< y <<'\t'<< z <<'\n';}
		ThreeD operator + (ThreeD ob2); // ob1 is implied
		ThreeD operator = (ThreeD ob2);
		ThreeD operator - (ThreeD ob2);
		ThreeD operator ++ (int nan);
};

//Overloaded + operator
ThreeD ThreeD:: operator + (ThreeD ob2) {
	ThreeD temp;
	temp.x = x + ob2.x; // Interger Addition
	temp.y = y + ob2.y; 
	temp.z = z + ob2.z; 
	return temp; // Return a new object
}

//Overloaded - operator
ThreeD ThreeD:: operator - (ThreeD ob2) {
	ThreeD temp;
	temp.x = x - ob2.x; // Interger Addition
	temp.y = y - ob2.y; 
	temp.z = z - ob2.z; 
	return temp; // Return a new object
}

// Overloaded = operator
ThreeD ThreeD:: operator = (ThreeD ob2) {
	x = ob2.x;
	y = ob2.y;
	z = ob2.z;
	return *this; // Return a modified object.
}
// Overloaded ++
ThreeD ThreeD:: operator ++ (int nan) {
	ThreeD temp = *this;
	this -> x++; //Increment x,
	y++;
	z++;
	return temp; // Return original value.
}

int main(void) {
	ThreeD a(1, 2, 3), b(10, 10, 10), c(0, 0, 0);
	cout << "Original value of a: ";
	a.show();
	cout << "Original value of b: ";
	b.show();

	// Add a and b together
	c = a + b;
	cout << "New value of c + : ";
	c.show();
	// Minus a and b
	c = b - a;
	cout << "New value of c - : ";
	c.show();

	c = c + a + b;
	cout  << "New value of c = c + b + a: ";
	c.show();
	//++ operator
	b = a++;
	cout <<"\nOriginal values of a:";
	a.show();
	cout <<"\nOriginal values of b:";
	b.show();


	// Demonstrate multiple assignment'
	c = b = a;
	cout << "\n New value of b: ";
	b.show();
	cout << "\n New value of c: ";
	c.show();
	
	return 0;
}