#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
class myclass {
	int mx;
public:
	myclass();						// Default constructor
	myclass(const myclass& r);		// Copy constructor
	myclass(myclass&& r);			// Move constructor
	~myclass();						// Destructor
};

myclass::myclass() {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::myclass(const myclass& r) {
	cout << "Myclass copy constructor cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
}

myclass::myclass(myclass&& r) {
	cout << "Myclass move constructor cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

int main() {

	myclass obj1;
	myclass obj2{ move (obj1) };			// obj2 icin move constructor cagrilir.	Eger kod myclass obj2 {obj1}; olsaydi copy constructor cagrilirdi.

	cout << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl << endl;


	// Move constructor'da olan This pointer'i,fonksiyon hangi nesne icin cagrildiysa onun adresini tutar bu durumda obj2'nin adresini tutar.(&obj2)
	// Move constructor'da olan r nesnesinin adresi ise (&r),olusacak yeni nesneye hangi nesnenin kaynaklari atilacaksa o nesnenin adresidir (&obj1).
}
*/





/*
class myclass {
	int mx;
public:
	myclass();						// Default constructor
	myclass(const myclass& r);		// Copy constructor
	myclass(myclass&& r);			// Move constructor
	~myclass();						// Destructor
	void display()const;
};

myclass::myclass() :mx{ 10 } {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::myclass(const myclass& r) : mx{ r.mx } {
	cout << "Myclass copy constructor cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
}

myclass::myclass(myclass&& r) :mx{ r.mx } {
	cout << "Myclass move constructor cagrildi...This : " << this << endl;
	cout << endl << "&r : " << &r << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

int main() {

	myclass obj1;
	myclass obj2{ move(obj1) };			// obj2 icin move constructor cagrilir.	Eger kod myclass obj2 {obj1}; olsaydi copy constructor cagrilirdi.

	cout << "&obj1 : " << &obj1 << endl;
	cout << "&obj2 : " << &obj2 << endl << endl;

	obj1.display();
	obj2.display();

	cout << endl;

	// Move constructorda bulunan r nesnesi,olusacak yeni nesneye hangi nesnenin kaynaklari atilacaksa o nesnedir
	// Bu durumda kod myclass&& r = move(obj1); kodundan farksizdir ve r.mx ise obj1.mx ifadesine esittir.
	// Move constructorda bulunan mx ise,move constructor hangi nesne icin cagrilmissa o nesnenin mx'idir.
	// Bu durumda mx ifadesi obj2.mx; ifadesinden farksizdir ve kod obj2.mx = obj1.mx; kodundan farksizdir.
	// Yeni olusturulacak olan nesne (obj2),daha once olusmus olan nesnenin (obj1) kaynaklarini (mx) alarak hayata gelir.
}
*/
