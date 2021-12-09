#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;





// 1 ==>> BAZI FONKSIYONLARIN GERI DONUS DEGERI CLASS'IN UYE FONKSIYONUNU DONDURMEK ISTER.HANGI NESNE ICIN CAGRILMISSA O NESNEYI GERI DONDURUR.

/*
class Myclass {
public:
	int mx;
	Myclass& func();			// referans semantigi veya pointer kullanilabilir.
};


Myclass& Myclass::func() {		// referans semantigi veya pointer kullanilabilir.
	return *this;
}


int main() {
	Myclass obj1;

	obj1.mx = 10;

	cout << "Before function call : obj1.mx : " << obj1.mx << endl;

	Myclass& obj2 = obj1.func();

	cout << "After function call : obj2.mx : " << obj2.mx << endl;

	// This pointer'i bir adres tutar ve hangi nesne icin cagrilmissa o nesnenin adresidir.
	// *This pointer'i bir adres tutar ve hangi nesne icin cagrilmissa o nesnenin kendisidir.(Indirection Operator)
	
	// Bu durumda obj1.func(); kodu sonrasi *this aslinda obj1'e esittir.obj2 bu durumda obj1'e esit olur.
}
*/





// 2 ==>> GLOBAL BIR FONKSIYONU,THIS POINTER'IN DEGERI OLAN ADRESLE,*this NESNESIYLE VEYA REFERANS SEMANTIGI ILE CAGIRMAK

/*
class myclass {
	int mx;
public:
	void func();
};

void foo(myclass* p) {
	cout << "void foo(myclass* p) cagrildi..." << endl;
	cout << "p : " << p << endl;
}

void myclass::func() {
	cout << "void myclass::func() cagrildi..." << endl;
	cout << "this : " << this << endl;
	foo(this);
}

int main() {
	myclass obj;

	cout << "&obj : " << &obj << endl;

	obj.func();

	// obj.func(); kodundan sonra foo(this); koduna gelince this pointeri burada &obj'ye esittir.
	// bu durumda myclass *p = &obj; kodu olur ve global foo(); fonksiyonuna cagri yapilir.
}
*/





// 3 ==>> BAZI DURUMLARDA NESNENIN ADRESINI DONDUREBILIR.

/*
class myclass {
public:
	int mx;
	myclass* foo();
};

myclass* myclass::foo() {
	return this;
}


int main() {
	myclass obj;

	obj.mx = 10;

	cout << "Before Funciton Call obj.mx : " << obj.mx << endl;

	(obj.foo())->mx = 20;

	cout << "After Funciton Call obj.mx : " << obj.mx << endl;

	// obj.foo(); kodunda return this; ifadesi &obj; ifadesine esit olur.
	// Bu durumda (obj.foo())->mx kodu obj->mx koduna esit olur.
}
*/
