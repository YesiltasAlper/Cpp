#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// Move constructor class'in ozel uyelik fonksiyonudur.Constructor bir nesneyi hayata getiren fonksiyondu.
// Bir nesne hayata gelirken,onceden hayata gelmis diger bir nesnenin kaynaklari alarak hayata geliyorsa bu yapiya move constructor denir.
// Copy constructor ile benzerdir fakat copy constructorda lvalue referans oldugu icin nesne kalicidir.
// Move constructor da ise rvalue referans oldugu icin nesne gecicidir.

// Move fonksiyonu C++'in standart kutuphanesinde bulunan fonksiyondur.Move fonksiyonu aldigi sol taraf degerindeki nesneyi sag taraf referansina cevirir.
// Move constructor rvalue referans kabul eder.Move constructor'a lvalue degerlerinin parametre olarak girilebilmesi icin "move" fonksiyonu kullanilmalidir.



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
	myclass obj2 { move(obj1) };			// Move constructor

	// Once obj1 nesnesi icin default constructor cagrildi ve sonrasinda obj2 nesnesi icin move constructor cagrilir
	// ve obj1 ve obj2 nesneleri hayata geldi.
	// myclass obj2 { move(obj1) };	kodunda obj2 nesnesi obj1'in kaynaklarini alarak hayat geliyor.
	// Henuz move constructor kodu yazilmadigi icin konsolda gorunmez ancak derleyici bizim icin bu kodu yazdi.
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
	cout << "Myclass default constructor cagrildi...This : " << this << endl;
}

myclass::~myclass() {
	cout << "Myclass destructor cagrildi...This : " << this << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
}

int main() {
	myclass obj1;
	myclass obj2{ move(obj1) };			// Move constructor cagrilir.

	cout << endl;

	obj1.display();			// obj1 nesnesinin mx degeri yazdirildi.
	obj2.display();			// obj2 nesnesinin mx degeri yazdirildi.

	cout << endl;

	// obj2 nesnesi hayata gelirken obj1 nesnesinin kaynaklarini alarak hayata gelir.
	// obj1 nesnesinin mx uyesi ilk deger atamasi olarak 10 degerini aldi ve sonrasinda
	// obj1 nesnesinin mx uyesi obj2 nesnesine kopyalandigi icin obj2'nin mx uyesi de 10 olur.
}
*/
