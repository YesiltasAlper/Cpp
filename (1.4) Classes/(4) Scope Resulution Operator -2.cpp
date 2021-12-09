#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;



/*
class my_class {

public:
	int mx, my;
	void foo(int);
	int func(double, int);

private:
	int a, b, c;
};


void foo(int x) {
	cout << "Global    void foo(int x) cagrildi..." << endl;
}


void my_class::foo(int x) {
	cout << "Class    void my_class::foo(int x)  cagrildi..." << endl;
}


int my_class::func(double, int) {
	cout << "Class    int my_class::func(double, int) cagrildi..." << endl;
	return mx;
}


int main() {

	foo(15);

	my_class obj;
	obj.foo(15);

	// Burada ayni isimde iki fonksiyon olsa bile bunlar farkli scope'larda oldugu icin overload edilmemislerdir.Birisi namespace scope'da digeri class scope'da.
	// Ve foo(15); kodu namespace scope'daki fonksiyona cagri yapar.Class scope'daki foo fonksiyonunu cagrilmasi icin burada o turden bir nesneye ihtiyac vardir.
}
*/





// CLASS'DAKI BIR FONKSIYONUN ICINDEN, NAMESPACE SCOPE'DAKI GLOBAL BIR FONKSIYONA ERISIM SAGLANIR MI ?


/*
class my_class {

public:
	int mx, my;
	void foo(int);
	int foo(double, int);

private:
	int a, b, c;
};


void foo(int x) {
	cout << "Global    void foo(int x) cagrildi..." << endl;
}


void my_class::foo(int x) {

	::foo(20);
	cout << "Class    void my_class::foo(int x)  cagrildi..." << endl;
}


int my_class::foo(double, int) {
	cout << "Class    int my_class::foo(double, int) cagrildi..." << endl;
	return mx;
}


int main() {

	my_class obj;
	obj.foo(15);

	// obj.foo(15);	koduyla class'a ait olan foo(); fonksiyonuna cagri yapilir.
	// Bu fonksiyonun icinden ise ::foo(20) koduyla global alandaki foo(); fonksiyonuna cagri yapilir.
}
*/





// CLASS'IN ICINDEKI BIR FONKSIYONDAN CLASS'DAKI BIR DIGER FONKSIYONA CAGRI YAPILIR MI ?


/*
class my_class {

public:
	int mx, my;
	void foo(int);
	int func(double, int);

private:
	int a, b, c;
};


void func(double y,int x) {
	cout << "Global    void func(double y,int x) cagrildi..." << endl;
}


void my_class::foo(int x) {

	func(12.45, 20);
	cout << "Class    void my_class::foo(int x)  cagrildi..." << endl;
}


int my_class::func(double, int) {
	cout << "Class    int my_class::func(double, int) cagrildi..." << endl;
	return mx;
}


int main() {

	my_class obj;
	obj.foo(15);

	// obj.foo(15);	koduyla class'a ait olan foo(); fonksiyonuna cagri yapilir.
	// Bu fonksiyonun icinden func(12.45, 20); koduyla class'a ait olan func(); fonksiyonuna cagri yapilir.
}
*/
