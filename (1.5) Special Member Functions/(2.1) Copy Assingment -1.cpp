#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// Copy assingment bir class'in ozel uyelik fonksiyonudur.Constructor bir nesneyi hayata getiren fonksiyondu.
// Onceden hayata gelmis bir nesneye,onceden hayata gelmis bir nesnenin kaynaklarinin kopyalanmasina copy assingment denir.




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

	obj2 = obj1;		// Copy assingment

	cout << endl;

	// Once obj1 nesnesi icin default constructor cagrildi ve sonrasinda obj2 nesnesi icin de default constructor cagrilir
	// ve obj1 ve obj2 nesneleri hayata geldi.
	// obj2 = obj1; kodunda obj2 nesnesine obj1'in kaynaklari kopyalaniyor.Burada her iki nesne de daha onceden hayata geldigi icin
	// ve daha sonra kopyalama islemi yapildigi icin copy assingment cagrilir.
	// Henuz copy assingment kodu yazilmadigi icin konsolda gorunmez ancak derleyici bizim icin bu kodu yazdi.
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

myclass::myclass(){
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

	cout << endl << "Before copy assingment ======>>>>>" << endl;

	obj1.display();			// obj1 nesnesinin mx degeri yazdirildi.
	obj2.display();			// obj2 nesnesinin mx degeri yazdirildi.

	obj2 = obj1;			// COPY ASSINGMENT

	cout << endl << "After copy assingment ======>>>>>" << endl;

	obj1.display();			// obj1 nesnesinin mx degeri yazdirildi.
	obj2.display();			// obj2 nesnesinin mx degeri yazdirildi.

	cout << endl;

	// obj1 nesnesi ve obj2 nesnesi garbage value ile hayata gelirler.
	// Ardindan obj1 nesnesi 10 degerine set edilir.
	// Sonrasinda obj2 = obj1; koduyla copy assingment cagrilir ve
	// obj1 nesnesinin kaynaklari obj2 nesnesine kopyalanir.
}
*/

