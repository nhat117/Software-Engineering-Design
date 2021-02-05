#include <iostream>
#include <fstream>
using namespace std;
//Function Declaration
int sizefile(ifstream &infile);
void foutput(int *value,ifstream &infile);
void foutput_read(int *value,ifstream &infile);
void foutput_get(int *value,ifstream &infile);

int main(void) {
	int value = 0;
	cout << "Default out put option is: " << value << endl;
	//Open binary files for input
	ifstream infile1("insertion.hex", ios :: out | ios:: binary); // Declare our stream is out and file type is binary
	ifstream infile2("put.hex", ios :: out | ios:: binary); 
	ifstream infile3("write.hex", ios :: out | ios:: binary);
	//Check for error in file opening operation
	if (!infile1 || !infile2 || !infile3) {
		cerr << "error opening file\n";
		return -1;
	}
	//Output 3 file
	foutput(&value, infile1);
	foutput_get(&value, infile2);
	foutput_read(&value, infile3);
	//Close file
	infile1.close();
	infile2.close();
	infile3.close();
	return 0;
}

int sizefile(ifstream &infile) {
	//Initialised the stream position
	streampos begin, end;
	int size = 0;
	//Tellg() return the position of file handler pointer in file
	begin = infile.tellg();
	//Move the file pointer to the end of the file position
	infile.seekg(0, ios :: end); 
	//Retrieving the position of the file pointer
	end = infile.tellg();
	size = end - begin;
	//reset the position of the file handling pointer to the start of the file
	infile.seekg(0, ios :: beg);
	return size;
}

void foutput(int *value,ifstream &infile) {
	char *membuf = NULL;
	int size = sizefile(infile);
	switch(*value) {
		case 0: 
			//Allocating memorry for the content of the file
			membuf = new char[size];
			for (int i = 0; i < size; i ++) {
				infile >> membuf[i]; 
				//Print the value of the byte as hex
				printf("%X ", membuf[i]);
			}
			cout <<endl;
			delete[] membuf;
			break;
		default:
			cerr <<"Invalid choice of output option \n";
			return;
	}
}

void foutput_get(int *value,ifstream &infile2) {
	char *membuf = NULL;
	int size = sizefile(infile2);
	switch(*value) {
		case 0: 
			//Allocating memorry for the content of the file
			membuf = new char[size];
			for (int i = 0; i < size; i ++) {
				infile2.get(membuf[i]);
				//Print the value of the byte as hex
				printf("%X ", membuf[i]);
			}
			cout <<endl;
			delete[] membuf;
			break;
		default:
			cerr <<"Invalid choice of output option \n";
			return;
	}
}

void foutput_read(int *value,ifstream &infile3) {
	char *membuf = NULL;
	int size = sizefile(infile3);
	switch(*value) {
		case 0: 
			//Allocating memorry for the content of the file
			membuf = new char[size];
			//Read method
			infile3.read(membuf, size);
			for (int i = 0; i < size; i ++) {
				//Print the value of the byte as hex
				printf("%X ", membuf[i]);
			}
			cout <<endl;
			delete[] membuf;
			break;
		default:
			cerr <<"Invalid choice of output option \n";
			return;
	}
}