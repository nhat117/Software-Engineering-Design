#include <iostream>
#include <sstream> // Rememeber to include sstream
using namespace std;
class TestClass {
		int a, b;
	public:
		TestClass(int i, int j) { a = i, b = j;} 
		string showAB() {
			// Uses streams to build a strings
			stringstream str;
			str << "a = " << a <<'\t';
			str << "b = " << b << '\n';
			return str.str(); // Return a string
		}
};

int main(void) {
	TestClass ob1(10, 20); // Create object1
	TestClass ob2(0, 0); // Create object 2
	cout << "ob1 before assignment: " << ob1.showAB();
	cout << "ob2 before assignment: " << ob2.showAB();

	cout << "\nPerform assignment operation\n\n";
	ob2 = ob1; // Assign object 1 to object 2
	cout << "ob1 after assignment: "<< ob1.showAB();
	cout << "ob2 after assignment: "<< ob2.showAB();
	return 0;
}