#include <iostream>
#include <string>

using namespace std;

struct washingMachine
{
	string firm;
	string color;
	int width;
	int length;
	int depth;
	int height;
	int power;
	int spinSpeed;
	int boilingTemperature;
};

int main() {

	washingMachine washingMachine1;
	washingMachine1.firm = "LG";
	washingMachine1.color = "White";
	washingMachine1.width = 60;
	washingMachine1.length = 60;
	washingMachine1.depth = 60;
	washingMachine1.height = 85;
	washingMachine1.power = 2000;
	washingMachine1.spinSpeed = 1000;
	washingMachine1.boilingTemperature = 90;

	washingMachine washingMachine2;
	washingMachine2.firm = "Samsung";
	washingMachine2.color = "Black";
	washingMachine2.width = 60;
	washingMachine2.length = 60;
	washingMachine2.depth = 60;
	washingMachine2.height = 85;
	washingMachine2.power = 2000;
	washingMachine2.spinSpeed = 1000;
	washingMachine2.boilingTemperature = 90;

	washingMachine washingMachine3;
	washingMachine3.firm = "Bosch";
	washingMachine3.color = "White";
	washingMachine3.width = 60;
	washingMachine3.length = 60;
	washingMachine3.depth = 60;
	washingMachine3.height = 85;
	washingMachine3.power = 2000;
	washingMachine3.spinSpeed = 1000;
	washingMachine3.boilingTemperature = 90;


	cout << "Firm: " << washingMachine1.firm << endl;
	cout << "Color: " << washingMachine1.color << endl;
	cout << "Width: " << washingMachine1.width << endl;
	cout << "Length: " << washingMachine1.length << endl;
	cout << "Depth: " << washingMachine1.depth << endl;
	cout << "Height: " << washingMachine1.height << endl;
	cout << "Power: " << washingMachine1.power << endl;
	cout << "Spin speed: " << washingMachine1.spinSpeed << endl;
	cout << "Boiling temperature: " << washingMachine1.boilingTemperature << endl;

	cout << endl;

	cout << "Firm: " << washingMachine2.firm << endl;
	cout << "Color: " << washingMachine2.color << endl;
	cout << "Width: " << washingMachine2.width << endl;
	cout << "Length: " << washingMachine2.length << endl;
	cout << "Depth: " << washingMachine2.depth << endl;
	cout << "Height: " << washingMachine2.height << endl;
	cout << "Power: " << washingMachine2.power << endl;
	cout << "Spin speed: " << washingMachine2.spinSpeed << endl;
	cout << "Boiling temperature: " << washingMachine2.boilingTemperature << endl;

	cout << endl;

	cout << "Firm: " << washingMachine3.firm << endl;
	cout << "Color: " << washingMachine3.color << endl;
	cout << "Width: " << washingMachine3.width << endl;
	cout << "Length: " << washingMachine3.length << endl;
	cout << "Depth: " << washingMachine3.depth << endl;
	cout << "Height: " << washingMachine3.height << endl;
	cout << "Power: " << washingMachine3.power << endl;
	cout << "Spin speed: " << washingMachine3.spinSpeed << endl;
	cout << "Boiling temperature: " << washingMachine3.boilingTemperature << endl;
}