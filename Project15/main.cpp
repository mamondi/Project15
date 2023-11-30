#include <iostream>
#include <string>

using namespace std;

struct Animal {
	string name;
	string type;
	string nickname;
};

void printAnimal(Animal animal) {
	cout << "Name: " << animal.name << endl;
	cout << "Type: " << animal.type << endl;
	cout << "Nickname: " << animal.nickname << endl;
}

void inputAnimal(Animal& animal) {
	cout << "Enter name: ";
	cin >> animal.name;
	cout << "Enter type: ";
	cin >> animal.type;
	cout << "Enter nickname: ";
	cin >> animal.nickname;
}

void soundAnimal(Animal animal) {
	if (animal.name == "cat") {
		cout << "Meow~" << endl;
	}
	else if (animal.name == "dog") {
		cout << "Woof!" << endl;
	}
	else {
		cout << "Unknown animal" << endl;
	}
}

int main() {
	Animal animal;
	inputAnimal(animal);
	printAnimal(animal);
	soundAnimal(animal);
	return 0;
}