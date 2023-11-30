#include <iostream>
#include <string>

using namespace std;

struct Iron {
	string firm;
	string model;
	string color;
	int minTemperature;
	int maxTemperature;
	bool steam;
	int power;
};

void printIron(Iron iron) {
	cout << "Firm: " << iron.firm << endl;
	cout << "Model: " << iron.model << endl;
	cout << "Color: " << iron.color << endl;
	cout << "Min temperature: " << iron.minTemperature << endl;
	cout << "Max temperature: " << iron.maxTemperature << endl;
	cout << "Steam: " << (iron.steam ? "Yes" : "No") << endl;
	cout << "Power: " << iron.power << endl;
}

int main()
{
	Iron iron1 = { "Philips", "GC2994/20", "Blue", 0, 240, true, 2400 };
	Iron iron2 = { "Bosch", "TDA 2329", "White", 0, 220, true, 2200 };
	Iron iron3 = { "Tefal", "FV 1711", "Red", 0, 220, true, 2000 };

	printIron(iron1);
	cout << endl;
	printIron(iron2);
	cout << endl;
	printIron(iron3);
	cout << endl;

	return 0;
}