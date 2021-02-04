#include <iostream>
#include <string.h>

using namespace std;

#define STUDENTSIZE 100
#define NAMELIM 50
#define STUDNO 4

typedef struct Student {
	char firstName[NAMELIM];
	char lastName[NAMELIM];
	char id[10];
	int dob[3];
	char subjects[STUDNO][NAMELIM]; 
} Student;
//Function Prototype
void populateDOB (Student*);
void populateName (Student*);
void populateSubjects (Student*);
void printDOB(Student*);
void printName(Student*);
void printSubjects(Student*);
void populateID (Student* st);
void printID (Student* st);


int main(void) {
	Student student1;

	//Populate the entire entry of student
	populateName(&student1);
	populateID(&student1);
	populateDOB(&student1);
	populateSubjects(&student1);
	//Display entities of student
	printName(&student1);
	printDOB(&student1);
	printSubjects(&student1);
	printID(&student1);

	//Create an array of variable of type student, use for loops to populate entities
	// Student students[STUDENTSIZE];
	// for (int i = 0; i < STUDENTSIZE; i++) {
	// 	cout << i + 1 <<"th Student\n";
	// 	populateName(&students[i]);
	// 	populateDOB(&students[i]);
	// 	populateSubjects(&students[i]);
	// }
	return 0;
}

void populateID (struct Student* st) {
	cout << "Enter id: ";
	cin >> st -> id; //Store ID into Struct
}
//Pass in struct by the pointer
void populateDOB  (Student* st) { 
	cout << "Enter the day of birth: ";
	cin >> st-> dob[0];
	cout << "Enter the month of birth: ";
	cin >> st-> dob[1];
	cout << "Enter the year of birth: ";
	cin >> st-> dob[2];
}

void populateName (Student *st) {
	char name[2][NAMELIM]= {}; //Empty the char array
	for (int i = 0; i < 2; i++) {
		cout << "Enter the" << i + 1 << "th name: ";
		cin.getline(name[i], NAMELIM);
	}
	//Store 1st name into structure
	strcpy(st->firstName, name[0]);
	//Store last into structure
	strcpy((*st).lastName, name[1]);

}

void populateSubjects (Student *st) {
	char tmp[NAMELIM] = {};
	for(int i = 0; i < STUDNO; i ++) {
		cout << "Enter the name of the " << i + 1 << "st subject: ";
		cin.getline(tmp, 50);
		strcpy(st -> subjects[i], tmp); //Store subject into structure
	}
}

void printDOB(struct Student* st) { 	// Pass in structure by pointer
	cout << "Date of bith: " << st->dob[0] << "/" << st->dob[1] << "/" << st->dob[2] << endl;	// Output to console
}

void printName(struct Student* st) {	// Pass in structure by pointer
	cout << "Student Name: " << st->firstName << " " << st->lastName << endl;	// Output to console
}

void printSubjects(struct Student* st) { // Pass in structure by pointer
	cout << "Subjects: " << endl;	// Output to console
	for (int i = 0; i < STUDNO; i++)		// Loop over all subjects
		cout << "\t" << i+1 << ". " << st->subjects[i] << endl;	// Output to console
}

void printID(struct Student* st) {
	cout << "Student identification: " << st->id << endl;	// Output to console
}




