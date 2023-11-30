#include <iostream>
#include <string>

using namespace std;

struct Book {
	string title;
	string author;
	string publisher;
	string genre;
};

void printBooks(Book books[], int size) {
	for (int i = 0; i < size; i++) {
		printBook(books[i]);
	}
}

void generateBooks(Book books[], int size) {
	string authors[] = { "Ivan Franko", "Taras Shevchenko", "Lesya Ukrainka", "Ivan Nechuy-Levytsky", "Ivan Kotlyarevsky", "Ostap Vyshnya", "Mykola Hohol", "Ivan Karpenko-Karyi", "Ivan Franko", "Ivan Franko" };
	string genres[] = { "novel", "poetry", "poetry", "novel", "novel", "comedy", "novel", "comedy", "novel", "novel" };
	string titles[] = { "Zahar Berkut", "Kobzar", "Forest Song", "Baida", "Eneida", "Chasing Two Hares", "Evenings on a Farm Near Dikanka", "Natalka Poltavka", "Zakhar Berkut", "Zakhar Berkut" };
}

void printBook(Book book) {
	cout << "Title: " << book.title << endl;
	cout << "Author: " << book.author << endl;
	cout << "Publisher: " << book.publisher << endl;
	cout << "Genre: " << book.genre << endl;
	cout << endl;
}

void sortBooks(Book books[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i; j++) {
			if (books[j].author > books[j + 1].author) {
				Book temp = books[j];
				books[j] = books[j + 1];
				books[j + 1] = temp;
			}
		}
	}
}

int main() {
	const int size = 10;
	Book books[size];
	generateBooks(books, size);
	printBooks(books, size);
	sortBooks(books, size);
	printBooks(books, size);
	return 0;
}

