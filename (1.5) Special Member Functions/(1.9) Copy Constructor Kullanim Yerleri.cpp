#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// Copy Constructor Kullanim Durumlari ===>>>

//	1 ==>>	Bir nesneye acik acik ilk deger verilirse

//  2 ==>>  Bir fonksiyonun class turunden parametresi varsa.Call By Value (Call By Reference degil kopyalama var cunku)

//	3 ==>>  Fonksiyonun geri donus degeri class turunden ise




// 1 ==>> BIR NESNEYE ACIK BIR BICIMDE ILK DEGER VERMEK

/*
class myclass {
	int mx;
public:
	myclass();						// Default constructor
	myclass(const myclass& r);		// Copy constructor
	~myclass();						// Destructor
	void display()const;
};

myclass::myclass() :mx{ 10 } {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::myclass(const myclass& r) :mx{ r.mx } {
	cout << "Myclass copy constructor cagrildi...This : " << this << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

int main() {

	myclass obj1;
	myclass obj2{ obj1 };
	myclass obj3{ obj2 };

	cout << endl << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl;
	cout << "&obj3 : " << &obj3 << endl << endl;

	obj1.display();
	obj2.display();
	obj3.display();
	cout << endl;
}
*/





// 2 ==>> BIR FONKSIYONUN CLASS TURUNDEN PARAMETREYE SAHIP OLMASI.CALL BY VALUe

/*
class myclass {
	int mx;
public:
	myclass();						// Default constructor
	myclass(const myclass& r);		// Copy constructor
	~myclass();						// Destructor
	void display()const;
};

myclass::myclass() :mx{ 10 } {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::myclass(const myclass& r) : mx{ r.mx } {
	cout << "Myclass copy constructor cagrildi...This : " << this << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

void func(myclass obj2) {
	cout << "func(Myclass obj2) cagrildi..." << endl;
	cout << endl << "func  &obj2 : " << &obj2 << endl;

	obj2.display();
}


int main() {
	myclass obj1;
	func(obj1);

	cout << endl << "&obj1 : " << &obj1 << endl;

	obj1.display();

	// myclass obj1; kodunda obj1 icin default constructor cagrilir ve sonrasinda  func(obj1); kodunda
	// myclass obj2 = obj1; olur ve kod copy constructor'a gider ve obj2 nesnesi icin copy constructor cagrilir.
	// func(); fonksiyonundan cikinca obj2'nin omru bitecegi icin obj2 icin destructor cagrilir.Ardindan
	// 	cout << endl << "&obj1 : " << &obj1 << endl; ve obj1.display(); kodlarindan sonra obj1'in hayati
	// sonlanir ve obj1 icin destructor cagrilir.
}
*/





// 3 ==>> BIR FONKSIYONUN GERI DONUS DEGERI CLASS TURUNDEN ISE

/*
class myclass {
	int mx;
public:
	myclass();						// Default constructor
	myclass(const myclass& r);		// Copy constructor
	~myclass();						// Destructor
	void display()const;
};

myclass::myclass() :mx{ 10 } {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::myclass(const myclass& r) : mx{ r.mx } {
	cout << "Myclass copy constructor cagrildi...This : " << this << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

myclass obj;

myclass func() {

	cout << endl << endl << "&obj : " << &obj << endl;
	return obj;
}


int main() {
	cout << "main basladi..." << endl;

	func();
	func();

	cout << endl << endl << "main sonlandi..." << endl;
}
*/


