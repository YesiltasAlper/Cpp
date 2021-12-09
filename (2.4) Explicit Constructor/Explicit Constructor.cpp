#define _CRT_SECURE_NO_WARNINGS
#include<iostream>



/*
class myclass {
public:
	myclass();
	explicit myclass(double x);
	~myclass();
	myclass& operator=(const myclass right);	// copy assingment
};

myclass::myclass() {
	std::cout << "Default Constructor..." << std::endl;
}

myclass::myclass(double x) {
	std::cout << "Converting Constructor (int x)..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass& myclass::operator=(const myclass right) {
	std::cout << "Copy Assingment Function..." << std::endl;
	return *this;
}


int main() {

	myclass a;

	a = 20.12;		// Otomatik tur donusumu kapatildi.ERROR.

	// Bu donusum converting constructor sayesinde yapilabiliyordu.Eger bu donusumun yapilabilmesi istenmezse converting constructor'in basina "explicit" keywordu yazilmalidir.
	// Boylece otomatik tur donusumu kapatilir.
	// "Explicit" keywordu sadece class icindeki fonksiyonun basina yazilir ve fonksiyon class disinda tanimlarken tekrar explicit keywordu kullanilmaz.
	// Explicit keywordunden sonra 	myclass a;	a = 20.12; kodu hatali olacaktir ve otomatik donusume izin verilmeyecektir.
	// Converting constructor'in basina explicit keywordu ile derleyicinin otomatik olarak gecici nesne olusturmasi onlenir.
}
*/





/*
class myclass {
public:
	myclass();
	explicit myclass(double x);
	~myclass();
	myclass& operator=(const myclass right);	// copy assingment
};

myclass::myclass() {
	std::cout << "Default Constructor..." << std::endl;
}

myclass::myclass(double x) {
	std::cout << "Converting Constructor (int x)..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass& myclass::operator=(const myclass right) {
	std::cout << "Copy Assingment Function..." << std::endl;
	return *this;
}


int main() {

	myclass a;

	a = static_cast<myclass>(20.12);

	// Explicit keywordu ile tur donusumu manuel olarak bize kalmistir.
	// Eger bu donusume izin vermek istersek type cast islemi ile donusum yapilabilir.
	// Explicit keywordunun converting constructor'in basina yazilarak otomatik tur donusumunun engellenmesi
	// ve duruma gore type cast kullanilarak donusumun yapilmasi daha guvenlidir.
}
*/





/*
class myclass{
public:
	myclass();
	explicit myclass(double x);
	~myclass();
	myclass& operator=(const myclass right);	// copy assingment
};

myclass::myclass() {
	std::cout << "Default Constructor..." << std::endl;
}

myclass::myclass(double x) {
	std::cout << "Converting Constructor (int x)..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass& myclass::operator=(const myclass right) {
	std::cout << "Copy Assingment Function..." << std::endl;
	return *this;
}

void foo(myclass x) {

}

int main() {

	// foo(25.45);		// Explicit keywordu kullanildigi icin otomatik tur donusumune izin verilmez.ERROR


	foo(static_cast<myclass>(25.45));		// Tur donusumu bizim tarafimizdan yapildi.ERROR
}
*/
