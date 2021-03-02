#include <iostream>
using namespace std;

class ThreeD {
		int x,y,z; //3D coordinates
	public:
		ThreeD() {x = y = z = 0;}
		ThreeD(int i, int j, int k) {x = i, y = j, z = k;}
		void show() {cout<<'\t' << x << '\t' << y << '\t' << z << '\n';}
		bool operator == (ThreeD op1);
};

//Overload ==
bool ThreeD :: operator ==(ThreeD ob2) //ob1 implied
{
	if(( x == ob2.x) && (y ==ob2.y) && (z == ob2.z))
		return true;
	else 
		return false;
}

int main() {
	ThreeD a (1, 2, 3), b (1, 4, 3);

	if(a  == b) 
		cout << "a equals b\n";
	else 
		cout << "a does not equals b\n";
}