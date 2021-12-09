#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
class myclass {
	int mx;
public:
	myclass();								// Default constructor
	myclass& operator=(const myclass& r);	// Copy assingment function
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

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

int main() {

	myclass obj1;
	myclass obj2;

	obj2 = obj1;		// obj2 icin copy assingment cagrilir.

	cout << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl << endl;

	// Copy assingment'da olan This pointer'i,fonksiyon hangi nesne icin cagrildiysa onun adresini tutar bu durumda obj1'in adresini tutar.(&obj2)
	// Copy assingment'da olan r nesnesinin adresi ise (&r),hangi nesnenin kaynaklari kopyalanacaksa o nesnenin adresidir (&obj1)
}
*/





/*
class myclass {
	int mx;
public:
	myclass();								// Default constructor
	myclass& operator=(const myclass& r);	// Copy assingment function
	~myclass();								// Destructor
	void set(int val);
	void display()const;
};

myclass::myclass(){
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass& myclass::operator=(const myclass& r) {

	mx = r.mx;
	cout << "Myclass copy assingment cagrildi...This : " << this << endl;
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

	cout << endl << "Obj1.set() Before Copy Assingment =====>>>" << endl;

	obj1.display();
	obj2.display();

	cout << endl << "After Copy Assingment =====>>>" << endl;

	obj2 = obj1;

	obj1.display();
	obj2.display();

	cout << endl << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl << endl;
}
*/




