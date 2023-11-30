#include <iostream>
#include <string>

using namespace std;

struct Boiler {
	string firm;
	string model;
	int power;
	int volume;
	int heatingTemperature;
};

void printBoiler(Boiler boiler) {
	cout << "Firm: " << boiler.firm << endl;
	cout << "Model: " << boiler.model << endl;
	cout << "Power: " << boiler.power << endl;
	cout << "Volume: " << boiler.volume << endl;
	cout << "Heating temperature: " << boiler.heatingTemperature << endl;
}

int main() {

	Boiler boiler1 = { "Bosch", "Bosch 1000", 1000, 100, 80 };
	Boiler boiler2 = { "Bosch", "Bosch 2000", 2000, 200, 80 };
	Boiler boiler3 = { "Bosch", "Bosch 3000", 3000, 300, 80 };

	printBoiler(boiler1);
	cout << endl;
	printBoiler(boiler2);
	cout << endl;
	printBoiler(boiler3);
	cout << endl;

	return 0;
}
