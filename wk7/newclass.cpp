#include <iostream>

using namespace std;

//Prototype class definition
class MyNewClass;

class MyClass {
		int a,b;
		public:
			MyClass(int i, int j) {a = i, b = j;} // Constructor
			// Method function
			bool compare(MyNewClass B);
			

};

class MyNewClass{
	int x, y;
	public: 
		MyNewClass(int i, int j) {x = i, y = j;}
		// Let function have some friend
		 friend bool MyClass :: compare(MyNewClass B);

};

bool MyClass :: compare (MyNewClass B) {
	if ( a == B.x) return true;
	else return false;
}

int main(void) {
// Initiallise classes
	MyClass Ob1(5,2);
	MyNewClass Ob2(5,0);
	cout << Ob1.compare(Ob2) << endl;
	return 0;
}
