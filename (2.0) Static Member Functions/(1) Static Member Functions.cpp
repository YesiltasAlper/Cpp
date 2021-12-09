#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
	Static member fonksiyonlar class ile ilgili bir is yapar.Farkli nesneler bile olsa burada statik fonksiyonlar varsa bunlar farkli nesnelerde de ortaktir.
	Class'in geneliyle ilgili bir is yaptigi icin class nesnesine ihtiyac duymaz.Bu yuzden static member fonksiyonlarda nesneye ihtiyac olmadigi icin
	this pointerina da ihtiyac yoktur.Bu yuzden static fonksiyonlarda this pointeri yoktur.
*/

/*
	Bir fonksiyonun static olma sebebi ornegin static int get_student_counter();	fonksiyonu olsun ve bu fonksiyon okuldaki ogrenci sayisini versin.
	Ogrenci sayisi nesneden nesneye gore degismeyecegi icin class'i ilgilendiren bir ozellik oldugu icin bu sebeple boyle bir fonksiyon static olmalidir.
*/





/*
class myclass {
	int x, y;
	const static int counter = 5;
public:
	void non_static_foo();
	void static static_foo();
};

void myclass::non_static_foo() {
	std::cout << "*****non-static foo*****" << std::endl << std::endl;
	std::cout << "this : " << this << std::endl;
}

void myclass::static_foo() {		// static data memberlarda oldugu gibi burada da tekrar static keywordu yazilmaz.

	// std::cout << "this : " << this << std::endl;		// syntax ERROR.static fonksiyonlarda this pointeri yoktur.
}

int main() {

	myclass a1;

	a1.non_static_foo();
	std::cout << "&a1 : " << &a1 << std::endl;
}
*/





/*
class myclass {
	int x, y;
	const static int counter = 5;
public:
	void non_static_foo();
	void static static_foo();
};

void myclass::non_static_foo() {
	x = 20;
	this->y = 10;
}

void myclass::static_foo() {		

	x = 50;		// static fonksiyonlardan non-static data member'a erisim yoktur.ERROR.

	// Syntax hatasi.Bu x nesneye ait x'dir.Bu x'e sadece nesne ile erisilebilir.
	// Cunku non_static_foo(); fonksiyonunun kullanilabilmesi icin bir nesneye ihtiyac vardir.
	// Ancak static_foo(); fonksiyonunun kullanilabilmesi icin bir nesneye ihtiyac yoktur.
	// static_foo(); fonksiyonun nesne ile alakasi olmadigi icin static fonksiyonlarin icinde
	// nesne ile alakasi olmayan data memberlara erismek icin kullanilabilir.Bunlar da static data memberlardir.
	// Bu yuzden x de non static oldugu icin static fonksiyondan erismek syntax hatasidir.
	// Static fonksiyonlar ile sadece static data memberlara erisilebilir.

	myclass::counter = 100;				// Static fonksiyonlardan static data memberlara erisim vardir ancak const tanimlandigi icin bu kod syntax hatasi olur.

	int number1 = myclass::counter;		// counter'in degeri degistirilmedi ve static fonksiyon icinde static data member kullanildi.
}

int main() {
	myclass a1;
}
*/





/*
class myclass {
	int x, y;
	static int counter;				// const kaldirildi.
public:
	void non_static_foo();
	void static static_foo();
};

void myclass::non_static_foo() {
	x = 20;
	this->y = 10;
}

int myclass::counter = 10;			// static data member deger atama.

void myclass::static_foo() {		

	myclass::counter = 100;			// NO ERROR.
}

int main() {

}
*/





/*
class myclass {
	int x, y;
	static int counter;
public:
	void non_static_foo();
	void static static_foo();
};

int myclass::counter = 10;

void myclass::non_static_foo() {
	x = 20;
	this->y = 10;
}

void myclass::static_foo() {		

	myclass* p = new myclass();
	p->x = 25;

	std::cout << "p->x : " << (p->x) << std::endl;

	delete p;

	// x ve y non-static oldugu icin bu elemalara erismek istenirse nesneye ihtiyac vardir.Bu yuzden static fonksiyon icinde
	// erismek istenirse this pointeri da olmadigi icin ve static fonksiyonlarin nesnesi de olmadigi icin bu sekilde bir nesne olusturulur.
}

int main() {

}
*/





/*
class myclass {
	int x, y;
	static int counter;
public:
	void non_static_foo();
	void static static_foo();
};

int myclass::counter = 10;

void myclass::non_static_foo() {
	x = 20;
	this->y = 10;
}

void myclass::static_foo() {		

	std::cout << "static_foo() cagrildi..." << std::endl;
}

int main() {

	myclass::static_foo();		// Bu sekilde static fonksiyon cagrisi yapilir

	// myclass obj1;
	// obj1.non_static_foo();	    Bu sekilde non-static fonksiyon cagrilir


	// obj1.static_foo();			Hatali degil ama iyi bir teknik degil.Static member function syntax'i olmadigi icin iyi bir teknik degildir.
}
*/





/*
class myclass {
	int x, y;
	static int counter;
public:
	void non_static_foo();
	void static static_foo();
	void get();
};


void myclass::non_static_foo() {
	x = 10;
	this->y = 10;
}


int myclass::counter = 10;

void myclass::static_foo() {

	
	myclass* p = new myclass();

	p->x = 50;
	p->y = 50;
	p->counter = 50;

	delete p;
	
}


void myclass::get() {

	std::cout << "x : " << x << std::endl;
	std::cout << "y : " << y << std::endl;
	std::cout << "counter : " << counter << std::endl;
}

int main() {

	myclass obj1;

	obj1.non_static_foo();
	obj1.get();

	std::cout << std::endl << std::endl;

	myclass::static_foo();
	obj1.get();
}
*/
