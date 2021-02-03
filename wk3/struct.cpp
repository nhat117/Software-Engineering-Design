#include <iostream>

using namespace std;

#define STUDENTSIZE 100

typedef struct Student {
	char firstName[50];
	char lastName[50];
	char id[10];
	int dob[3];
	char subjects[4][50]; 
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
	Student students[STUDENTSIZE];
	for (int i = 0; i < STUDENTSIZE; i++) {
		cout << i + 1 <<"th Student\n";
		populateName(&students[i]);
		populateDOB(&students[i]);
		populateSubjects(&students[i]);
	}
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
void populateName (Student *st);
void populateSubjects (struct Student*);






