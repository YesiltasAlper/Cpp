#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
class my_class {

public:
	int mx, my;
	void foo(int x);
	void foo(double y);

private:
	int a, b, c;
};

void my_class::foo(int x) {
	cout << "void foo(int x);...cagrildi" << endl;
}

void my_class::foo(double y) {
	cout << "void foo(double y);...cagrildi" << endl;
}

int main() {

	my_class ob;
	ob.foo(20);

	// Exact match
}
*/





/*
class my_class {

public:
	int mx, my;
	void foo(int x);
	void foo(int y);

private:
	int a, b, c;
};

void my_class::foo(int x) {
	cout << "void foo(int x);...cagrildi" << endl;
}

void my_class::foo(int y) {
	cout << "void foo(int y);...cagrildi" << endl;
}

int main() {
	my_class ob;
	ob.foo(20);

	// Redeclaration yuzunden function overloading basarisiz olur.
}
*/





/*
class my_class {

public:
	int mx, my;
	void foo(int x);
	double foo(int y);

private:
	int a, b, c;
};

void my_class::foo(int x) {
	cout << "void foo(int x);...cagrildi" << endl;
}

double my_class::foo(int y) {
	cout << "double foo(int y);...cagrildi" << endl;
	return 2.1;
}


int main() {
	my_class ob;
	ob.foo(20);

	// Bu kez redeclaration yoktur cunku redeclaration olabilmesi icin geri donus turleri de ayni olmaliydi.
	// Ama bu kez de fonksiyon imzalari ayni oldugu icin ayni scope'daki iki ayni isimli fonksiyon Function overloading olamadi.
	// Function Overloading basarisiz oldu.
}
*/





/*
class my_class {

public:
	int mx, my;
	void foo(char x);
	void foo(double y);

private:
	int a, b, c;
};

void my_class::foo(char x) {
	cout << "void foo(char x);...cagrildi" << endl;
}

void my_class::foo(double y) {
	cout << "void foo(double y);...cagrildi" << endl;
}

int main() {
	my_class ob;
	ob.foo(20);

	// Burada da bir ambiquity durumu belirsizlik durumu vardir.Bu sebeple iki ayni scope'daki (class scope) iki ayni isimli fonksiyon overload edilemez.
	// Cunku int'den char'a donusum de standart convertion int'den double'a donusum de standart convertion.
}
*/





/*
class my_class {

public:
	int mx, my;
	void foo(char x);

private:
	void foo(double y); 		
	int a, b, c;
};

void my_class::foo(char x) {
	cout << "void foo(char x);...cagrildi" << endl;
}

void my_class::foo(double y) {
	cout << "void foo(double y);...cagrildi" << endl;
}

int main() {
	my_class ob;
	ob.foo(20);

	// Bu durumda ambiquity mi olur yoksa zaten private'da oldugu icin bir tane fonksiyona erisilir sorunsuz calisir mi ?

	// Bu durumda public private protected belirtecleri bir scope belirtemiyordu.Hepsi ayni class scope icindeydi.
	// Bu durumda yine ambuquity olur ve function overloading basarisiz olur.
}
*/

