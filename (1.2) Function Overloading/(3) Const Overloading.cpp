#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
void foo(int*) {
	cout << "foo(int*) cagrildi..." << endl;
}

void foo(const int*) {
	cout << "foo(const int*) cagrildi..." << endl;
}

int main() {

	int x = 15;
	const int y = 10;

	foo(&x);		// const olan nesne ile cagri yapilirsa const olan bir nesne cagrilir.
	foo(&y);		// const olmayan nesne ile cagri yapilirsa yaptiysak olmayan bir nesne cagrilir.

	// C++'da veya C'de const int* ile int* farkli turlerdir.
	// Const ile arguman gecildiginde const olan fonksiyon cagrilir buna const overloading denir.
	// Const olmayan ile arguman gecilirse o zaman const olmayan cagrilir.
}
*/




/*
void foo(int*) {
	cout << "foo(int*) cagrildi...";
}

int main() {

	const int x = 10;
	foo(&x);		// SYNTAX ERROR.

	// C++'da const int* 'dan int* 'a dogrudan donusum yoktur.
	// Bu durum pointer ve referanslarda boyledir.
	// C'de vardir ama C++'da olmadigi icin Type cast yapilmalidir.
}
*/




/*
void foo(const int*) {
	cout << "foo(const int*) cagrildi...";
}

int main() {

	int x = 10;
	foo(&x);		// NO ERROR.

	// int* 'dan const int* 'a donusum vardir.
}
*/	




/*
void foo(int&) {
	cout << "foo(int&) cagrildi..." << endl;
}

void foo(const int&) {
	cout << "foo (const int&) cagrildi..." << endl;
}

int main() {

	int x = 20;
	const int y = 20;

	foo(x);
	foo(y);
}
*/




/*
void foo(int&) {
	cout << "foo(int&) cagrildi...";
}

int main() {

	const int x = 10;
	foo(x);			// ERROR.

	// const int* 'dan int* 'a dogrudan donusum yoktur.
	// Bu durum pointer ve referanslarda boyledir.
}
*/	




/*
void foo(const int&) {
	cout << "foo(const int&) cagrildi...";
}

int main() {
	int x = 10;
	foo(x);			// NO ERROR.

	// int* 'dan const int* 'a donusum vardir.
}
*/
