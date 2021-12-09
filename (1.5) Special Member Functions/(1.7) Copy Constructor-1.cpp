#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// Copy constructor bir class'in ozel uyelik fonksiyonudur.Constructor bir nesneyi hayata getiren fonksiyondu.
// Copy constructor da yeni bir nesneyi hayata getirir.Ancak hayata gelen bu nesneye,daha once olusmus olan baska bir nesnenin kaynaklari kopyalanir.
// Yeni nesne bu sekilde hayata gelir ve ilk deger atamasi olarak kendisine kopyalanan nesnenin degerlerini alir.


// Bir class'in copy constructor'i olmak zorundadir.Eger copy constructor bizim tarafimizdan yazilmazsa
// Derleyici bizim icin non-static public inline bir copy constructor yazar.




/*
class myclass {
	int mx;
public:
	myclass();
	~myclass();
};

myclass::myclass() {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

int main() {

	myclass obj1;
	myclass obj2{ obj1 };	// Copy constructor cagrilir.

	// Once obj1 nesnesi icin default constructor cagrildi ve sonrasinda obj2 nesnesi,obj1 nesnesinin kaynaklari kopyalanarak
	// hayata geldi.Bu durumda obj2 nesnesi olustu ve obj2 nesnesi icin copy constructor cagrildi.
	// Henuz copy constructor kodu yazilmadigi icin konsolda gorunmez ancak derleyici bizim icin bu kodu yazdi.
	// obj1 ve obj2 farkli nesneler olduklari icin adresleri farklidir.
	// Daha sonra her iki nesne icin de first in last out mantigiyla destructor cagrilir.
}
*/




/*
class myclass {
	int mx;
public:
	myclass();
	~myclass();
	void display()const;
};

myclass::myclass() :mx{ 10 } {
	cout << "Myclass default constructor cagrildi...This : " << this << endl << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

int main() {

	myclass obj1;
	myclass obj2{ obj1 };	// Copy constructor cagrilir.

	obj1.display();			// obj1 nesnesinin mx degeri yazdirildi.
	obj2.display();			// obj2 nesnesinin mx degeri yazdirildi.
	cout << endl;

	// obj2 nesnesi hayata gelirken obj1 nesnesinin kaynaklari kopyalanarak hayata gelir.
	// obj1 nesnesinin mx uyesi ilk deger atamasi olarak 10 degerini aldi ve sonrasinda
	// obj1 nesnesinin mx uyesi obj2 nesnesine kopyalandigi icin obj2'nin mx uyesi de 10 olur.
}
*/

