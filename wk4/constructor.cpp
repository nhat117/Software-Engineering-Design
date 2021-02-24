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

MyObj :: ~MyObj() 
{
	cout << "Destructing ObjNum" << ObjNum <<"\n";
	ObjNum --;
}
// Pass object bt ref
void display(MyObj *ob) //No cpy made
{
	cout<< ob-> getVal() <<'\n';
}
//Pass obj by value
void change(MyObj ob) {
	ob.setval(100);// No effect
	cout <<"Val in change():"; //Debug line
	display(&ob);// Debug
}
int main(void) {
	MyObj ob1(10);
	cout <<"val in main: ";
	display(&ob1); // Pass by ref
	change(ob1); // Pass by value
	cout <<"val after change:";
	display(&ob1);
}
