#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


//	This pointer'i sadece non-static uye fonksiyonlarin icinde kullanilabilir.
//	This pointer'in degeri hangi nesnenin uye fonksiyonu icin cagrilmissa o nesnenin adresidir.





/*
class myclass {

	int mx;
	void func();
public:
	void foo();
};

void f() {
	//	this;	 syntax hatasi cunku f(); member function degildir.
}

int main() {

	myclass A;

	cout << "&A : " << &A << endl;

	// this;	 syntax hatasi cunku member function icinde degildir.
}
*/





/*
class myclass {

	int mx;
	void func();
public:
	void foo();
};


void myclass::foo() {

	cout << "myclass::foo() cagrildi..." << endl;
	cout << "this : " << this << endl;	//Syntax hatasi degil cunku bu bir non-static member function.
}


int main() {

	myclass A;

	cout << "&A : " << &A << endl;

	A.foo();

	// foo(); fonksiyonu A nesnesiyle cagrildi icin this pointeri A nesnesinin adresine esit olur.
	// myclass *this_ptr = &A;	seklinde bir pointer gibi dusunulebilir.
}
*/





/*
class myclass {

	int mx;
	void func();
public:
	void foo();
};


void myclass::foo() {

	cout << "myclass::foo() cagrildi..." << endl;
	cout << "this : " << this << endl;	

	cout << "*****************" << endl;
	this->mx = 20;	// Bu iki kod

	cout << "this->mx : " << this->mx << endl;
	cout << "mx : " << mx << endl;

	cout << "*****************" << endl;
	mx = 30;		// ayni anlamdadir.

	cout << "this->mx : " << this->mx << endl;
	cout << "mx : " << mx << endl;

	// this->mx = 20; kodunda this,A nesnesinin adresini tuttugu icin mx nesnesi A.mx'dir.
	// 	mx = 30; kodunda foo(); fonksiyonu A nesnesiyle cagrildigi icin mx nesnesi A.mx'dir.

}


int main() {

	myclass A;

	cout << "&A : " << &A << endl;

	A.foo();
}

*/





/*
class myclass {
	int mx;
	void func();
public:
	void foo();
};


void myclass::foo() {

	cout << "myclass::foo() cagrildi..." << endl;
	cout << "this : " << this << endl;

	cout << "*****************" << endl;
	this->mx = 10;		// Bu uc kodun

	cout << "this->mx : " << this->mx << endl;
	cout << "mx : " << mx << endl;
	cout << "(*this).mx : " << (*this).mx << endl;

	cout << "*****************" << endl;
	mx = 20;			// hepsinin anlami

	cout << "this->mx : " << this->mx << endl;
	cout << "mx : " << mx << endl;
	cout << "(*this).mx : " << (*this).mx << endl;

	cout << "*****************" << endl;
	(*this).mx = 30;	// aynidir.

	cout << "this->mx : " << this->mx << endl;
	cout << "mx : " << mx << endl;
	cout << "(*this).mx : " << (*this).mx << endl;
}


int main() {
	myclass A;

	cout << "&A : " << &A << endl;

	A.foo();
}
*/
