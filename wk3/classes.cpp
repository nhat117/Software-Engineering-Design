#include <iostream>
using namespace std;

class Light { //Class template for a Light
	private :
		bool light;
		int dimLevel;
	public :
		Light() {light = false, dimLevel = 100;}
		Light(bool state) { light = state, dimLevel = 100;} //Constuctor
		Light(int val) {light = true, dimLevel = val;}
		Light(bool state, int val) { light = state, dimLevel = val;}
		~Light() { ; } //Destructor
		void lightstatus();
		void turnOn();
		void turnOff();
		int getDimLevel();	//Return the dim level
		void setDimLevel(int value) { dimLevel = value;} //Set the light Brightbess
} ;

int main(void) {
	Light lamp1, lamp2(true), lamp3(20), lamp4(true, 50); //Create instance/Objects of the Class
	cout <<"Lamp 1\n";
	lamp1.lightstatus();
	lamp1.turnOn();
	lamp1.setDimLevel(40);
	lamp1.getDimLevel();
	lamp1.turnOff();
	cout << "Lamp 2" << endl;	// Output to console
	lamp2.lightstatus();				// Output light state
	lamp2.getDimLevel();		// Get light brightness
	lamp2.setDimLevel(40);		// Set light brightness
	lamp2.getDimLevel();		// Get light brightness
	lamp2.turnOff();			// Turn light off
	cout << "Lamp 3" << endl;	// Output to console
	lamp3.lightstatus();				// Output light state
	lamp3.getDimLevel();		// Get light brightness
	lamp3.setDimLevel(60);		// Set light brightness
	lamp3.getDimLevel();		// Get light brightness
	lamp3.turnOff();			// Turn light off
	cout << "Lamp 4" << endl;	// Output to console
	lamp4.lightstatus();				// Output light state
	lamp4.getDimLevel();		// Get light brightness
	lamp4.setDimLevel(74);		// Set light brightness
	lamp4.getDimLevel();		// Get light brightness
	lamp4.turnOff();			// Turn light off
	return 0;
}

void Light :: lightstatus() {
	cout << "The ligh is currently" << boolalpha << light << endl;

}

void Light :: turnOn() {
	light = true;
	cout << "The light is On\n";
}

void Light :: turnOff() {
	light = false;
	cout << "The light is off\n";
}

int Light::getDimLevel() {
	cout << "The brightness of the light is " << dimLevel << "%." << endl;
	return dimLevel;
}