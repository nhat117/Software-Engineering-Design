#include <iostream>
using namespace std;

//Class declaration
class Data {
	//nothing in private class
	public:
		int a, b;
		Data(int i, int j) {a = i, b = j;} // Constructor
};

//Function to calculate data 
int Calc_data(Data *m) { // Pass by reference
	return (m->a * m -> b);
}

int main(void) {
	Data ob1(4,5); // Creat object data with value
	cout << Calc_data(&ob1) << endl;
	return 0;
}