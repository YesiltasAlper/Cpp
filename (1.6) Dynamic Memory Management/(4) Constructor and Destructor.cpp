#include <iostream>

using namespace std;

/*
class myclass {
	int mx, my;
public:

	myclass();
	~myclass();
};

myclass::myclass() {
	cout << "Default constructor..." << endl;
	cout << "this : " << this << endl;
}

myclass::~myclass() {
	cout << "Destructor..." << endl;
	cout << "this : " << this << endl;
}

int main() {

	myclass *ptr = new myclass;			// Heap'den bellek tahsis edildi.

	cout << "ptr : " << ptr << endl;

	delete ptr;							// Heap'den tahsis edilen bellek iade edildi.
}
*/





/*
class myclass {
	int mx, my;
public:

	myclass();
	~myclass();
};

myclass::myclass() {
	cout << "Default constructor..." << endl;
	cout << "this : " << this << endl;
}

myclass::~myclass() {
	cout << "Destructor..." << endl;
	cout << "this : " << this << endl;
}

int main() {

	int number_of_arrays;

	cout << "how many arrays : ";
	cin >> number_of_arrays;

	myclass* ptr = new myclass[number_of_arrays];

	cout << "***********************" << endl;
	cout << "ptr : " << ptr << endl;
	cout << "***********************" << endl;

	delete []ptr;
}
*/





/*
class myclass {
	int mx, my;
public:

	myclass();
	~myclass();
};

myclass::myclass() {
	cout << "Default ctor..." << endl;
	cout << "this : " << this << endl;
}

myclass::~myclass() {
	cout << "Destructor..." << endl;
}

int main() {

	int number_of_arrays;

	cout << "how many arrays : ";
	cin >> number_of_arrays;

	cout << "Sizeof myclass : " << sizeof(myclass) << endl << endl;

	myclass* ptr = new myclass[number_of_arrays];

	cout << "******************" << endl;

	delete[] ptr;

	// myclass'in sizeof'u kadar artarak ilerler.
}
*/
