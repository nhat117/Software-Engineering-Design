#include <iostream>

using namespace std;
class Student {
	public:
		string name;
		string major;
		double gpa;
		//Constructor
		Student(string iName, string iMajor, double igpa) {
			name = iName;
			major = iMajor;
			gpa = igpa;
		}

		//Honorol (make the code super lean
		bool hasHonors () {
			if (gpa >= 3.5) {
				return true;
			}
			return false;
		}
};

int main() {
	Student stud1 ("Jim", "Business", 2.4);
	Student stud2 ("Joan", "Art", 3.5);

	cout << stud2.hasHonors();
}