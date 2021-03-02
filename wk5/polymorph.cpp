#include <iostream>
//Using 1 function in multiple class is polymorphysm
using namespace std;

class Shape {
	public:
	virtual float getA() const  = 0; 
};

class Rect : public Shape {
		float width;
		float height;
	public: 
		Rect(float width, float height) : width (width), height(height) {}
		virtual float getA() const {return width * height;}
};

class Circle : public Shape {
		float r;
	public:
		Circle(float r) : r(r) {} //Constructor
		virtual float getA() const {return 3.14159f * r * r;}
};

void printArea(const Shape & shape) {
	cout << "area: " << shape.getA() <<endl; 

}
int main() {
	Rect r(2,2);
	Shape* shape = &r; // Only wwork wwith pointer, could modify, shape 
	printArea(r);
	Circle c(5);
	shape = &c;
	printArea(c);
	return 0;
}