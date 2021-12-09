#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

using namespace std;

class line {
	int* mptr;
public:
	line() = default;					// Default constructor
	line(int len);						// Parametrik constructor
	line(const line& right);			// Copy constructor
	line& operator=(line&& right);		// Move assingment
	~line();							// Destructor
	size_t get_lenght()const;			// Hesaplama
};


line::line(int len) :mptr{ nullptr } {			// Parametrik constructor

	cout << "Constructor cagrildi...		this : " << this << endl;

	mptr = static_cast<int*>(malloc(sizeof(int)));
	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}
	*mptr = len;
}


line::line(const line& right) {					// Copy constructor

	cout << "Copy Constructor cagrildi...	this : " << this << endl;

	mptr = static_cast<int*>(malloc(sizeof(int)));
	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}
	*mptr = *right.mptr;
}


line& line::operator=(line&& right) {			// move assingment
	cout << "Move Assingment Cagrildi...     this : " << this << endl;

	if (!mptr)
		free(mptr);

	mptr = right.mptr;
	right.mptr = nullptr;

	return *this;
}


line::~line() {									// Destructor

	cout << "Destructor cagrildi...		this : " << this << endl;

	if (mptr != nullptr)
		free(mptr);
}


size_t line::get_lenght()const {
	return *mptr;
}


void display(line obj) {
	cout << "&obj : " << &obj << endl;
	cout << "Lenght of line : " << obj.get_lenght() << endl;
}


int main() {

	line l1{ 10 };					// l1 nesnesi icin parametrik constructor cagrilir
	cout << "&L1 : " << &l1 << endl << endl;
	display(l1);					// obj nesnesi icin copy constructor cagrilir

	cout << endl;

	line l2{ 20 };					// l2 nesnesi icin parametrik constructor cagrilir
	cout << "&L2 : " << &l2 << endl << endl;
	display(l2);					// obj nesnesi icin copy constructor cagrilir

	cout << endl;

	l2 = move(l1);					// l2 nesnesi icin move assingment cagrilir

	display(l2);					// obj nesnesi icin copy constructor cagrilir

	cout << endl;
}

