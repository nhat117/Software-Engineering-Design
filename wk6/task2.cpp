/* Task 1: Write a C++ program that defines a structure for an employment system. The items in the structure
must contain the first and last name of the employee, their identification number and date of birth.
• A function should be used to enter in the employee’s information via the console
• Another function should be used to display the employee’s information via the console
• Appropriate data types for the structure’s member variables should be chosen
Additional: Add code to perform error checking on the dates entered in via the console (check for an integer
value and if it is in range (Assume 1<date< 31). Modify the code so that the user enters in the month by name
instead of by number.
Task 2: Add functions to the program written in task 1 to find an employee’s identification number by
entering their first and last name or first name only to the console
• Use an overloaded, user defined search function to find the employee’s identification number
• If the user defined search functions are unable to find any results, a message stating that no
identification numbers have been found should be displayed on the console*/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
//Preprocessor
#define MAX_EMPLOYEE 2
//Create date 
struct date {
	int day;
	int month;
	int year;
};

struct worker {
	string fst_name;
	string lst_name;
	string id_no;
	date dob;
};
// Get dob
bool getDoB( date *dob, string dob_str) {
	int prev = 0;
	int pos = dob_str.find("/", prev); //Tokenizing the dob
	string tmp = dob_str.substr(prev, pos - prev);
	dob -> day = atoi(tmp.c_str());

	prev = pos + 1;
	pos = dob_str.find("/", prev); //Tokenizing the dob
	tmp = dob_str.substr(prev, pos - prev);
	dob -> month = atoi(tmp.c_str());

	tmp = dob_str.substr(pos + 1, dob_str.length());
	dob -> month = atoi(tmp.c_str()); // use dob accessing month cinherithance

	return true; //Error tracing
}

void printDoB(date dob) {
	cout << "Date of birth: " << dob.day << "/" << dob.month << "/" << dob.year << endl;
	return;
}

void getWorkerDetail(worker *iworker) {
	string tmp;
	cout << "Please enter first name: ";
	cin >> tmp;
	iworker -> fst_name = tmp;
	cout << "Please enter last name: ";
	cin >> tmp;
	iworker -> lst_name = tmp;
	cout << "Please enter id: ";
	cin >> tmp;
	iworker -> id_no = tmp;
	while (true) {
		cout <<"Enter dob dd/mm/yyyy";
		cin >> tmp;
		if(getDoB(&(iworker -> dob), tmp))
			break;
	}
	return;	
}
void printWorkerDetails(worker iworker) {
	cout << "Name:"	<<iworker.fst_name<<" " << iworker.lst_name<< endl;
	printDoB(iworker.dob);
	return;
}

//Task 2, implement i search
void searchEmployee(worker *employeelst, int worker_num, string fst_name ) {
	//Loop through the worker list
	for (int i = 0; i < worker_num; i ++) {
		worker e = employeelst[i];
		if (e.fst_name.compare(fst_name.c_str()) == 0) {
			cout << "Found employee "<< fst_name<< "with ID" << e.id_no << endl;
			return;
		}
	}
	cout <<"unable to found employee " << fst_name << endl;
	return;
}

void searchEmployee(worker *employeelst, int worker_num, string fst_name, string lst_name) {
	//Loop through the worker list
	for (int i = 0; i < worker_num; i ++) {
		worker e = employeelst[i];
		if (e.fst_name.compare(fst_name.c_str()) == 0) {
			if (e.lst_name.compare(lst_name.c_str()) == 0) {
				cout << "Found employee "<< fst_name<< "with ID" << e.id_no << endl;
				return;
			}
		}
	}
	cout <<"unable to found employee " << fst_name <<" "<< lst_name << endl;
	return;
}

int main() {
	worker employee_List [MAX_EMPLOYEE];
	//Loop thorugh to input
	for( int i = 0; i < MAX_EMPLOYEE; i ++) {
		getWorkerDetail(&(employee_List[i]));
	}
	//Search for employee using first and last name
	string first, last;
	cout << endl << "input first name to search";
	cin >> first;
	cout << "Input a last name to search";
	cin >> last;

	cout <<"Searching using both First name..." << endl;
	searchEmployee(employee_List, MAX_EMPLOYEE, first, last);

	// for (int i = 0; i < MAX_EMPLOYEE; i++) {
	// 	printWorkerDetails(e1);
	// }
	return 0;
}