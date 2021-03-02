#include <iostream>
using namespace std;

class ThreeD {
		int x,y,z; //3D coordinates
	public:
		ThreeD() {x = y = z = 0;}
		ThreeD(int i, int j, int k) {x = i, y = j, z = k;}
		
		friend ostream &operator << (ostream & stream, ThreeD obj); // Insertion operator
		friend istream &operator >> (istream & stream, ThreeD &obj); //Extraction operator
};
//Display x,y,z coordinates - Three D inserter
ostream &operator << (ostream & stream, ThreeD obj) {
	stream << obj.x << ", ";
	stream << obj.y << ", ";
	stream << obj.z << "\n";
	return stream; // return the stream
}
// Get three dimensional values - Three D Extractor
istream &operator >> (istream & stream, ThreeD & obj) {
	cout << "Enter X Y Z values: ";
	stream >> obj.x >> obj.y >> obj.z;
	return stream;
}

int main(void) {
	ThreeD a(0, 0, 0);
	cout <<"Initial value of a:" << a;
	cin >> a; // overload and then input 
	cout << "New value of a:" << a;
}

