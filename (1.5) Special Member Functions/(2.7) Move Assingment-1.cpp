#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


// Move assingment class'in ozel uyelik fonksiyonudur.
// Onceden hayata gelmis bir nesneye,onceden hayata gelmis bir nesnenin kaynaklarinin atanmasina move assingment denir.
// Copy assingment ile benzerdir fakat copy assingment da lvalue referans oldugu icin nesne kalicidir.
// Move assingment da ise rvalue referans oldugu icin nesne gecicidir.

// Move fonksiyonu C++'in standart kutuphanesinde bulunan fonksiyondur.Move fonksiyonu aldigi sol taraf degerindeki nesneyi sag taraf referansina cevirir.
// Move assingment rvalue referans kabul eder.Move assingment'a lvalue degerlerinin parametre olarak girilebilmesi icin "move" fonksiyonu kullanilmalidir.




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
	myclass obj2;

	obj2 = move (obj1);		// Move assingment

	cout << endl;

	// Once obj1 nesnesi icin default constructor cagrildi ve sonrasinda obj2 nesnesi icin de default constructor cagrilir
	// ve obj1 ve obj2 nesneleri hayata geldi.
	// obj2 = move (obj1); kodunda obj2 nesnesine obj1'in kaynaklari atanir.Burada her iki nesne de daha onceden hayata geldigi icin
	// ve daha sonra atama islemi yapildigi icin move assingment cagrilir.
	// Henuz move assingment kodu yazilmadigi icin konsolda gorunmez ancak derleyici bizim icin bu kodu yazdi.
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
	void set(int val);
	void display()const;
};

myclass::myclass() {
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::set(int val) {
	mx = val;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

int main() {

	myclass obj1;
	myclass obj2;

	obj1.set(10);			// obj1 nesnesinin mx degeri set edildi.

	cout << endl << "Before move assingment ======>>>>>" << endl;

	obj1.display();			// obj1 nesnesinin mx degeri yazdirildi.
	obj2.display();			// obj2 nesnesinin mx degeri yazdirildi.

	obj2 = move(obj1);		// MOVE ASSINGMENT

	cout << endl << "After move assingment ======>>>>>" << endl;

	obj1.display();			// obj1 nesnesinin mx degeri yazdirildi.
	obj2.display();			// obj2 nesnesinin mx degeri yazdirildi.

	cout << endl;

	// obj1 nesnesi ve obj2 nesnesi garbage value ile hayata gelirler.
	// Ardindan obj1 nesnesi 10 degerine set edilir.
	// Sonrasinda obj2 = move(obj1); koduyla move assingment cagrilir ve
	// obj1 nesnesinin kaynaklari obj2 nesnesine atanir.
}
*/
