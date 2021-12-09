#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

using namespace std;

class line {
	int* mptr;
public:
	line() = default;					// Default constructor
	line(int len);						// Parametrik constructor
	line(const line& r);				// Copy constructor
	line& operator=(const line& r);		// Copy assingment
	~line();							// Destructor
	size_t calcuate_lenght();			// Hesaplama
};


line::line(int len) :mptr{ nullptr } {		// Parametrik Constructor

	cout << "Constructor cagrildi...		this : " << this << endl;

	mptr = static_cast<int*>(malloc(sizeof(len)));
	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}
	*mptr = len;
}


line::line(const line& r) {					// Copy Constructor

	cout << endl << "Copy Constructor cagrildi...	this : " << this << endl;

	mptr = static_cast<int*>(malloc(sizeof(line)));
	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}
	*mptr = *r.mptr;
}


line& line::operator=(const line& r) {		// Copy Assingment

	cout << "Copy Assingment cagrildi...     this : " << this << endl;

	if (!mptr)
		free(mptr);

	mptr = static_cast<int*>(malloc(sizeof(r.mptr)));

	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}

	*mptr = *r.mptr;

	return *this;
}


line::~line() {								// Destructor

	cout << "Destructor cagrildi...		this : " << this << endl;

	if (mptr != nullptr)
		free(mptr);
}


size_t line::calcuate_lenght() {			// Hesaplama
	return *mptr;
}


void display(line obj) {					// Global Display Function
	cout << "&obj : " << &obj << endl;
	cout << "Lenght of line : " << obj.calcuate_lenght() << endl;
}


int main() {

	line l1{ 10 };					// l1 nesnesi icin parametrik constructor cagrilir

	cout << "&l1 : " << &l1 << endl << endl;

	{
		line l2{ 20 };				// l2 nesnesi icin parametrik constructor cagrilir

		cout << "&l2 : " << &l2 << endl << endl;

		l1 = l2;					// l1 nesnesi icin copy assingment cagrilir

		display(l2);				// obj nesnesi icin copy constructor cagrilir

		cout << endl;
	}

	display(l1);					// obj nesnesi icin copy constructor cagrilir

	cout << endl;
}

