#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

//	Eger bir nesne sadece bir defaligina kullanilacaksa temporary object kullanmak tercih edilir.
//	Genel olarak bu yapida kullanilirlar.





/*
class X {
public:
	X() {
		std::cout << "Default Constructor..." << std::endl;
	}

	~X() {
		std::cout << "Destructor..." << std::endl;
	}
};

void foo(const X& parameter) {
	std::cout << "void foo() cagrildi..." << std::endl;
}

int main() {

	//  X obj1;		
	//	foo(obj1);	

	// foo(); fonksiyonuna bu sekilde de cagri yapilabilir ancak burada obj1 nesnesi sadece foo(); fonksiyonuna cagri yapmak icin olusturuldugu icin
	// kalici nesne yerine gecici nesne kullanmak daha dogrudur.

	foo(X{});	

	// X nesnesinin hayati 36. satirda foo(); fonksiyonuna cagri yaptiktan sonra bitecektir.
}
*/





/*
class X {
public:
	X() {
		std::cout << "Default Constructor..." << std::endl;
	}

	~X() {
		std::cout << "Destructor..." << std::endl;
	}
};

void foo(const X& parameter) {
	std::cout << "void foo() lvalue cagrildi..." << std::endl;
}


void foo(const X&& parameter) {
	std::cout << "void foo() rvalue cagrildi..." << std::endl;
}

int main() {

	X obj1;
	foo(obj1);

	std::cout << "**********************" << std::endl;


	// obj1 nesnesinin bellekte bir adresi vardir bu sebeple obj1 nesnesi lvalue degeridir.
	// Bu sebeple lvalue referans alan foo(); fonksiyonu cagrilir.

	foo(X{});

	std::cout << "**********************" << std::endl;

	// Bu kodda ise bir nesne hayata gelmedigi icin bellekte bir adresi olacak nesne yoktur bu yuzden temporary object'ler rvalue degerleridir.
	// Bu sebeple rvalue referans alan foo(); fonksiyonu cagrilir.
}
*/





/*
class X {
public:
	X() {
		std::cout << "Default Constructor..." << std::endl;
	}

	~X() {
		std::cout << "Destructor..." << std::endl;
	}
};

void foo(X& parameter) {
	std::cout << "void foo() lvalue cagrildi..." << std::endl;
}

void foo(const X& parameter) {
	std::cout << "void foo() const lvalue cagrildi..." << std::endl;
}

void foo(X&& parameter) {
	std::cout << "void foo() rvalue cagrildi..." << std::endl;
}


int main() {

	X obj1;
	foo(obj1);
	std::cout << "**********************" << std::endl;


	const X obj2;
	foo(obj2);
	std::cout << "**********************" << std::endl;


	foo(X{});
	std::cout << "**********************" << std::endl;
}
*/





/*
void foo(const std::string& parameter) {
	std::cout << "const lvalue fonksiyon cagrildi..." << std::endl;
}

void foo(const std::string&& parameter) {
	std::cout << "const rvalue fonksiyon cagrildi..." << std::endl;
}


int main() {

	const std::string mystring{ "alper" };
	foo(mystring);

	std::cout << "**********************" << std::endl;

	// mystring adinda string turunde bir degisken olusturuldu ve bu degiskenin bellekte bir adresi var.
	// Bu yuzden lvalue foo(); fonksiyonuna cagri yapilir.

	foo(std::string{ "alper" });

	std::cout << "**********************" << std::endl;

	// Herhangi bir degisken olusturulmadigi icin bellekte tutulan bir degisken yok ve adres yok.
	// Bu yuzden rvalue foo(); fonksiyonuna cagri yapilir.

	// Ancak sadece foo(); fonksiyonuna cagri yapilmak isteniyorsa bellekte degisken olusturmak yerine
	// temporary object kullanilmasi daha iyi bir tekniktir.
}
*/
