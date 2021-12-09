#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;



/*
class myclass {
	int mx;
public:
	myclass();								// Default constructor
	myclass& operator=(const myclass& r);	// Copy assingment function
	myclass& operator=(myclass&& r);		// Move assingment function
	~myclass();								// Destructor
};

myclass::myclass() {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass& myclass::operator=(const myclass& r) {
	cout << "Myclass copy assingment cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
	return *this;
}

myclass& myclass::operator=(myclass&& r) {
	cout << "Myclass move assignment cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
	return *this;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

int main() {

	myclass obj1;
	myclass obj2;

	obj2 = move(obj1);			// obj2 icin move assingment cagrilir.	Eger kod obj2 = obj1; olsaydi copy assingment cagrilirdi.

	cout << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl << endl;

	// Move assingment'da olan This pointer'i,fonksiyon hangi nesne icin cagrildiysa onun adresini tutar bu durumda obj1'in adresini tutar.(&obj2)
	// Move assingment'da olan r nesnesinin adresi ise (&r),hangi nesnenin kaynaklari atanacaksa o nesnenin adresidir (&obj1)
}
*/





/*
class myclass {
	int mx;
public:
	myclass();								// Default constructor
	myclass& operator=(const myclass& r);	// Copy assingment function
	myclass& operator=(myclass&& r);		// Move assingment function
	~myclass();								// Destructor
	void set(int val);
	void display()const;
};

myclass::myclass() {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass& myclass::operator=(const myclass& r) {
	mx = r.mx;
	cout << "Myclass copy assingment cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
	return *this;
}

myclass& myclass::operator=(myclass&& r) {
	mx = r.mx;
	cout << "Myclass move assignment cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
	return *this;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::set(int val) {
	mx = 10;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

int main() {

	myclass obj1;
	myclass obj2;

	cout << endl << "Initialization values =====>>>" << endl;

	obj1.display();
	obj2.display();

	obj1.set(10);

	cout << endl << "Obj1.set() Before Move Assingment =====>>>" << endl;

	obj1.display();
	obj2.display();

	cout << endl << "After Move Assingment =====>>>" << endl;

	obj2 = move(obj1);			// obj2 icin move assingment cagrilir.	Eger kod obj2 = obj1; olsaydi copy assingment cagrilirdi.

	obj1.display();
	obj2.display();

	cout << endl << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl << endl;
}
*/
