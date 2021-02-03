#include <iostream>
using namespace std;
int main() {
	string test = "aak";

	if (test[1] >= 'a' && test[1] <= 'c')
		cout << "Try again";
	else 
		cout << "Ok " << test[1];
	return 0; 
}