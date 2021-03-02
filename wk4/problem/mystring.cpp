#define SIZE 100 // Max string size of the object
#define MXSIZE SIZE -2 //For newline a null
#include <iostream>
#include <sstream>
using namespace std;

class MyString {
	char str [SIZE];
	public: 
		MyString() {for(int i = 0;  i < SIZE; i++) str[i] = 0;}
		int MyString :: length() {int l; for(l = 0; this -> str[l] != '\0'; l++);return l;}

		MyString MyString operator = (char *val);
		MyString MyString operator + (MyString obj);
		friend MyString operator + (MyString &obj, char *val);
		friend MyString operator + (char *val, MyString & obj);

		friend ostream &operator << (ostream & stream, MyString obj); // insertion operator
};

MyString operator + (MyString obj) {
	MyString tmp;
	int i = 1;
	for (i = 0; this -> str[i] != '\0' && i < MXSIZE; i++) {
		tmp.str[i] = this -> str[i];
	}

	if(i < MXSIZE) {
		int j;
		for (j = 0;obj.str[j] != '\0' && i < MXSIZE; j++, i ++) {
			tmp.str[i] = obj.str[j];
		}
		tmp.str[i] = '\0'; // Add null terminator
	}
	return tmp; // Return modified ObJECT
}

MyString MyString :: operator  = ( char *val) {
	int i;
	for ( i = 0; *val!='\0'&& i < MXSIZE; i++) {
		this -> str[i] = *val; //Increment Pointer
	}
	this -> str[i] = '\0'; // Add null terminator
	return *this; // Return modified object
}

ostream &operator << (ostream & stream, MyString obj) {
	stream << obj . str << '\n';
	return stream; // Return the stream
}

// Friebd function to overload append(+)
MyString operator + (MyString & obj, char *val) {
	MyString tmp;
	int i;
	for ( i = 0; obj.str[i] !='\0' && i < MXSIZE; i ++) {
		tmp.str[i] = obj.str[i];
	}

	// Now add the text from char * to tmp.str
	if ( i < MXSIZE) {
		int j ;
		for (j = 0; *val != '\0' && i < MXSIZE; j++, i ++) {
			tmp.str[i] = *val;
			val ++; //Increment Pointer
		}
		tmp.str[i] = '\0'; // Add Null terminator
	}
	return tmp; // Return Modified Object
}

MyString operator + (char *val, MyString &obj) {
	MyString tmp;
	int i;
	for ( i = 0; obj.str[i] !='\0' && i < MXSIZE; i ++) {
		tmp.str[i] = obj.str[i];
	}

	// Now add the text from char * to tmp.str
	if ( i < MXSIZE) {
		int j ;
		for (j = 0; *val != '\0' && i < MXSIZE; j++, i ++) {
			tmp.str[i] = *val;
			val ++; //Increment Pointer
		}
		tmp.str[i] = '\0'; // Add Null terminator
	}
	return tmp; // Return Modified Object
}

int main(void) {
	MyString str1, str2, str3;
	str1 = "Hello";
	str2 = "World";
	cout << "str1\t\t= "<< str1; // << operation
	cout << "str2\t\t= "<< str2; // << operation

	str3 = str1 + str2; // Obj + Obj
	cout <<"str1 + str2\t" << str3;

	str3 = str1 + "random text"; // Obj + Obj
	cout <<"str1 + text\t= " << str3;
	//... Continues next column
	//Continues from the previous column
	str3 = "random text" + str2;
	cout <<"text + str2\t = " << str3;

	cout << "str1\t\t= "<< str1; //Check if originals are still okay
	cout << "str2\t\t= "<< str2;

	cout <<"str1 length= " << str1.length() << endl;
	cout <<"str2 length= " << str2.length() << endl;
	cout <<"str3 length= " << str3.length() << endl;	
}
