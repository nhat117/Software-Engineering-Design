#include <iostream>
using namespace std;
int ObjNum = 0;// Global Variable to count objects
class MyObj {
		int val;
	public :
		MyObj(int i); // Normal Constructor
		MyObj(const MyObj &o); // Cpy Constructor
		~MyObj(); // Destructor
		int getVal() {
			return val;
		}
		void setval(int i ) {
			val = i;
		}
		MyObj twice();
};

MyObj :: MyObj(int i) // Normal Constructor
{
	val = i;
	ObjNum ++;
	cout <<"In Constructor, ObjNum" << ObjNum << "\n";
}

MyObj :: MyObj(const MyObj &o) //Copy Constructor
{
	val = o.val;
	ObjNum ++;
	cout <<"In Constructor, ObjNum" << ObjNum << "\n";
}

MyObj MyObj :: twice () // Normal Constructor
{
	MyObj NewObj(val* 2); // Val is current memeber
	return NewObj; // Return an object
}

MyObj :: ~MyObj() 
{
	cout << "Destructing ObjNum" << ObjNum <<"\n";
	ObjNum --;
}
// Pass object bt ref
void display(MyObj &ob) //No cpy made
{
		// -> replace with .
	cout <<ob.getVal();
}
int main(void) {
	MyObj ob1(10);
	cout <<"val in main: ";
	display(ob1); // Pass by ref
	ob1 = ob1.twice();
	cout <<"val after ob1.twice:";
	display(ob1);
}
