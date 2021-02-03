#include <iostream>
#include <string.h>
using namespace std;
#define MAXVEHICLE 3
class Vehicle {
	private :
		int passengers; //No of passengers
		int fuelcap;	//Fuel capacity in gallons
		int mpg;		//Fuel consumption rate
		string vtype; //vtype attribute
	public:
	///Class destructor and constructor
		~Vehicle() {cout <<"Destructing...\n";}	//Class destructor
		Vehicle (char const *invtype,int pass, int f_cap, int m) {// Class constructor
			vtype = invtype; //Convert char * to str object
			passengers = pass;
			fuelcap = f_cap;
			mpg = m;
		}
		//Class method
		int range() 			{return mpg * fuelcap;} //Inline  class method
		//Public methods to access private data
		int get_passengers() 	{return passengers;} //Inline methode to access hiden data
		int get_fuelcap()		{return fuelcap;}		
		int get_mpg()			{return mpg;}			
};

int main(void) {
	//Create Vehicle object array
	Vehicle vehicles[MAXVEHICLE] = {Vehicle("Mini van", 7, 16, 21),
									Vehicle("Sport cars", 2, 17, 12),
									Vehicle("4 door Sedan", 4, 16, 17) };

	
	//Output Result
	for(int i = 0; i < MAXVEHICLE; i++) {
		cout << vehicles[i].get_vtype() << "\t can carry ";
		cout << vehicles[i].get_passengers() << "passengers with a range of ";
		cout << vehicles[i].range() << " miles\n";
	}
	return 0;
}