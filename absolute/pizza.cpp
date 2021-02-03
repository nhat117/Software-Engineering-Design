// Determine which is the best size to order a pizza
#include <iostream>
using namespace std;
//Function declaration
void getdata(int *small_d, double *price_s, int *large_d, double *price_l);
void giveres(int small_d, double price_s, int large_d, double price_l);
double unit_price(int diameter, double price);

/* Returns the price per sqr inch of a pizza
Precondition: The diameter para is the diameter of the pizza
in: inches, the price para is the price of pizza */

int main(void) {
	int dia_s, dia_l;
	double price_s, price_l;
	getdata(&dia_s, &price_s, &dia_l, &price_l);
	giveres(dia_s, price_s, dia_l, price_l);
	return 0;
}

void getdata(int *small_d, double *price_s, int *large_d, double *price_l) {
	cout << "Welcome\n";
	cout << "Enter dia of small pizza: ";
	cin >> *small_d;
	cout <<"\nEnter small pizza price: ";
	cin >> *price_s;
	cout << "\nEnter dia of large pizza: ";
	cin >> *large_d;
	cout <<"\nEnter large pizza price: ";
	cin >> *price_l;
}

double unit_price(int diameter, double price) {
	const double PI = 3.14159;
	double r, a;
	r = diameter/static_cast<double>(2);
	a = PI * r *r;
	return (price/a);
}
