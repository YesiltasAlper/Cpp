#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

/*
	In C++ computer programming,copy elision refers to a compiler optimization technique that eliminates unnecessary copying of objects.The C++ language
	standard generally allows implementations to perform any optimization,provided the resulting program's observable behavior is the same as if , i.e.
	pretending,the program were executed exactly as mandated by the standard.

	Copy elision gereksiz nesnelerin kopyalanmasini engelleyen bir optimizasyon teknigidir.Kopyalama islemi maliyet gerektiren bir islemdir ve derleyici
	bir optimizasyon yaparak bu gereksiz nesnelerin kopyalanmasini engeller.Boylelikle performans artisi olur.

	Bazi derleyiciler bu optimizasyonu yapabilir bazi derleyiciler de yapmayabilir.
	Cogunlukla derleyiciler bu optimizasyonu yapsa da C++ 2017 ile bu optimizasyonun yapilmasi standart haline getirilmistir.
*/





/*
class myclass {
public:
	myclass();							// Default constructor
	myclass(int);						// Parametrik constructor
	~myclass();							// Destructor
	myclass(const myclass& right);		// Copy constructor
};

myclass::myclass() {
	std::cout << "Constructor..." << std::endl;
}

myclass::myclass(int) {
	std::cout << "Parametrik constructor..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass::myclass(const myclass& right) {
	std::cout << "Copy Constructor..." << std::endl;
}

myclass foo() {
	// code
	myclass x;
	return x;				// Named Return Value Optimization (NRVO)
}

int main() {
	myclass m1{ foo() };	// Named Return Value Optimization (NRVO)
}
*/

/*
	Kod debug moddayken foo(); fonksiyonuna cagri yapilinca myclass turunden x nesnesi ile geri doner.Daha sonra kod myclass m1{x}; olur ve
	m1'e x ile ilk atama yapilarak m1 nesnesi hayata gelir.Bu durumda copy constructor cagrilir.

	Kod release moduna alindiginda ve program ayni sekilde calistirildiginda copy constructor cagrilmazBunun sebebi Copy Elision.
	Derleyici gereksiz kopyalama islemlerinden kacinarak optimizasyon yaptigi icin release modda copy constructor cagrilmadi.

	Kodda m1 nesnesine x nesnesi kopyalanacak ancak kod foo(); fonksiyonundan cikinca x nesnesinin hayati bitecegi icin derleyici burada gereksiz kopyalama islemi
	yapmiyor ve kod myclass m1 = x; seklinde oluyor ve derleyici bu sekilde optimizasyon yapiyor.
*/







/*
class myclass {
public:
	myclass();							// Default constructor
	myclass(int);						// Parametrik constructor
	~myclass();							// Destructor
	myclass(const myclass& right);		// Copy constructor
};

myclass::myclass() {
	std::cout << "Constructor..." << std::endl;
}

myclass::myclass(int) {
	std::cout << "Parametrik constructor..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass::myclass(const myclass& right) {
	std::cout << "Copy Constructor..." << std::endl;
}

myclass foo() {
	// code
	static myclass x;
	return x;				// Named Return Value Optimization (NRVO)
}

int main() {
	myclass m1{ foo() };	// Named Return Value Optimization (NRVO)
}
*/

/*
	Bu durumda x nesnesi statik omurlu oldugu icin ve kod foo(); fonksiyonundan cikinca x nesnesinin hayati sonlanmayacaktir.
	Programin akisi bitince x nesnesinin hayati sona erecektir.Bu kod bu kez release moda alinsa bile copy elision yapilmaz.
	Cunku derleyicinin optimizasyon yapmasini gerektirecek bir durum yoktur ve x nesnesinin hayati program bitine kadar surecektir.
*/







/*
class myclass {
public:
	myclass();
	myclass(int);
	~myclass();
	myclass(const myclass& right);
};

myclass::myclass() {
	std::cout << "Constructor..." << std::endl;
}

myclass::myclass(int) {
	std::cout << "Parametrik constructor..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass::myclass(const myclass& right) {
	std::cout << "Copy Constructor..." << std::endl;
}

myclass func() {
	// code
	return myclass{};		// Return Value Optimization (RVO)
}

int main() {
	myclass m1{ func() };	// Return Value Optimization (RVO)
}
*/

/*
	Burada ise temporary object kullanilmistir.Derleyici bu kez de gecici nesne oldugu icin optimizasyon yapar ve copy constructor cagrilmaz.
	Kopyalama yapmak yerine yine nesneyi direkt vermeyi tercih ediyor ve kod myclass m1{ myclass{} }; kodundan farksiz oluyor.
*/





/*
class myclass {
public:
	myclass();
	myclass(int);
	~myclass();
	myclass(const myclass& right);
};

myclass::myclass() {
	std::cout << "Constructor..." << std::endl;
}

myclass::myclass(int) {
	std::cout << "Parametrik constructor..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass::myclass(const myclass& right) {
	std::cout << "Copy Constructor..." << std::endl;
}

void foo(myclass x) {

}

int main() {

	myclass a;
	foo(a);

	// Kod release moda alinsa bile copy constructor cagrilir copy elision olmaz.
	// cunku a nesnesi kalici nesnedir.
}
*/





/*
class myclass {
public:
	myclass();
	myclass(int);
	~myclass();
	myclass(const myclass& right);
};

myclass::myclass() {
	std::cout << "Constructor..." << std::endl;
}

myclass::myclass(int) {
	std::cout << "Parametrik constructor..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass::myclass(const myclass& right) {
	std::cout << "Copy Constructor..." << std::endl;
}

void foo(myclass x) {

}

int main() {

	foo(myclass{});

	// Bu kodda copy elision olur.Cunku nesne gecicidir.
	// Derleyici copy elision yaparak kopyalama islemi yapmaz ve kod x = myclass{}; olur.
	// Bu islem 239.satirda myclass{}; gecici nesnesinin hayati bitmeden gerceklesir.
}
*/
