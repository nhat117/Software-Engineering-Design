/*Write a C++ program that defines a structure for an employment system. The items in the structure
must contain the first and last name of the employee, their identification number and date of birth.
• A function should be used to enter in the employee’s information via the console
• Another function should be used to display the employee’s information via the console
• Appropriate data types for the structure’s member variables should be chosen */
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

struct date {
	int day;
	int month;
	int year;
};

struct worker {
	string fst_name;
	string lst_name;
	string id_num;
	date dob;
};

void printDoB(date dob) { // Pass by value
	cout << "Date of Birth: " << dob.day << "/" << dob.month << "/" << dob.year << endl;
	return;
}
void getDoB(date *dob, string dob_str) {
	int prev = 0;
	int pos = dob_str.find("/", prev); //Tokenize the string
	string tmp = dob_str.substr(prev, pos - prev);
	dob -> day = atoi(tmp.c_str());

	prev = pos + 1;
	pos = dob_str.find("/", prev);
	tmp = dob_str.substr(prev, pos- prev);
	dob -> month = atoi(tmp.c_str());

	tmp = dob_str.substr(pos +1, dob_str.length());
	dob -> year = atoi(tmp.c_str());

	return;
}

void getWorkerDetails(worker *iWorker) {
	string tmp;
	cout << "Please enter first name: ";
	cin >> tmp;
	iWorker -> fst_name = tmp;
	cout << "Please enter last name: ";
	cin >> tmp;
	iWorker -> lst_name = tmp;
	cout << "Please enter id num: ";
	cin >> tmp;
	iWorker -> id_num = tmp;

	cout << "Please enter date of birth as dd/mm/yyyy: ";
	cin >> tmp;
	getDoB(&(iWorker -> dob), tmp);
	return;
}
void printWorkerDetails(worker iWorker) {
	cout << "Name: " << iWorker.fst_name << " " << iWorker.lst_name << endl;
	cout <<"ID: " << iWorker.id_num << endl;
	printDoB(iWorker.dob);
	return;
}

int main() {
	worker w1;
	getWorkerDetails(&w1);
	printWorkerDetails(w1);
	return 0;
}