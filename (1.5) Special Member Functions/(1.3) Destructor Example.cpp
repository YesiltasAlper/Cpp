#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class sayi {
public:
	sayi();		// Constructor			
	~sayi();	// Destructor
};

int number = 0;

sayi::sayi() {

	cout << "Constructor cagrildi" << endl;
	cout << "number : " << ++number << endl;
}


sayi::~sayi() {

	cout << "Destructor cagrildi" << endl;
	cout << "number : " << number-- << endl;
}


int main() {

	cout << "*******CONSTRUCTOR*********" << endl;
	sayi obj[5];
	cout << "*******DESTRUCTOR*********" << endl;
}

