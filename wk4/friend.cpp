#include <iostream>

using namespace std;

//Class declaration
//a Forward declaration
class Cylinder; 
class Cube;

enum colors { red, green, yellow};

class Cube {
		colors color; // Private memeber
	public:
		Cube(colors c) { color = c;}
		inline bool sameColor(Cylinder y);
};

class Cylinder {
		colors color; // Private member
	public:
		Cylinder(colors c) { color = c;}
		friend class Cube;
};

bool Cube :: sameColor(Cylinder y) {
	if(color == y.color) return true;
	else return false; 
}

int main(void) {
	Cube cube1 (red);
	Cube cube2 (green);
	Cylinder cyl(green);

	if(cube1.sameColor(cyl))
		cout << "cube 1 and cyl are the same color\n";
	else
		cout << "cube1 and cyl are different color \n";
	if(cube2.sameColor(cyl))
		cout << "cube2 and cyl are the same color\n";
	else 
		cout <<"cube2 and cyl are different color\n";
	
	return 0;
}