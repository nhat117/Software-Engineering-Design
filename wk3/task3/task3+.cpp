#include <fstream> 
#include <iostream> 
#include <string> 

using namespace std;

int main()
{
	int value = 0;
	int size = 0;
	streampos begin, end;
	char *membuf = NULL;

	// open binary files for input
	ifstream infile1("insertion.hex", ios::in | ios::binary);
	ifstream infile2("put.hex", ios::in | ios::binary);
	ifstream infile3("write.hex", ios::in | ios::binary);

	if (!infile1 || !infile2 || !infile3)
	{
		cerr << "issue opening file for binary output" << endl;
		return 1;
	}
	switch (value)
	{
	case 0:
		// tellg() return the position of file handler in the file
		// get the start and end positions of the file to work out the size of the file
		begin = infile1.tellg();
		infile1.seekg(0, ios::end);
		end = infile1.tellg();
		size = end - begin;
		// allocate just enough a a char buff to save the content of the file
		membuf = new char[size];
		// make sure you reset the position of the file handler back to
		// the front of the file before reading from it
		infile1.seekg(0, ios::beg);
		for (int i = 0; i < size; i++)
		{
			infile1 >> membuf[i];
			// print the value of the byte as a hexadecimal
			printf("%X ", membuf[i]);
		}
		delete[] membuf;
		
		cout << endl;
		begin = infile2.tellg();
		infile2.seekg(0, ios::end);
		end = infile2.tellg();
		size = end - begin;
		membuf = new char[size];
		infile2.seekg(0, ios::beg);
		for (int i = 0; i < size; i++)
		{
			infile2.get(membuf[i]);
			printf("%X ", membuf[i]);
		}
		delete[] membuf;
		
		cout << endl;
		begin = infile3.tellg();
		infile3.seekg(0, ios::end);
		end = infile3.tellg();
		size = end - begin;
		membuf = new char[size];
		infile3.seekg(0, ios::beg);
		infile3.read(membuf, size);
		for (int i = 0; i < size; i++)
		{
			printf("%X ", membuf[i]);
		}
		delete[] membuf;
		break;
	default:
		cerr << "Invalid choice of output option" << endl;
		return 1;
	}

	infile1.close();
	infile2.close();
	infile3.close();

	return 0;
}