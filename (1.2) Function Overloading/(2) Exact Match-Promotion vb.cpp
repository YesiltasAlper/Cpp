#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// 1- EXACT MATCH SURECI ==> Tam uyum demektir ve 1.oncelige sahiptir.

/*
void foo(int) {
	cout << "foo(int) cagrildi..." << endl;
}

void foo(double) {
	cout << "foo(double) cagrildi..." << endl;

}

int main() {

	foo(5);
	foo(5.2);

	// Fonksiyon parametresinin turunun ve girilen argumanin
	// tam eslesme durumudur.
}
*/


/*
void foo(int*) {
	cout << "foo(int*) cagrildi..." << endl;
}

void foo(double*) {
	cout << "foo(double*) cagrildi..." << endl;
}


int main() {

	int x = 10;
	double y = 7.3;

	foo(&x);
	foo(&y);
}
*/


/*
void foo(const int*) {
	cout << "foo(const int*) cagrildi..." << endl;
}

void foo(const double*) {
	cout << "foo(double*) cagrildi..." << endl;
}


int main() {

	int a[] = { 8,10 };
	double b = 10.5;

	foo(a);	// Burada array to pointer convertion oluyor ve tur tam uyustugu icin exact match oluyor.
	foo(&b);

	// Pointer ve referanslarda (int*)'dan (const int*)'a donusum oldugu icin exact match.
	// Ancak (const int*)'dan (int*)'a donusum yoktur.
}
*/





// 2- PROMOTION SURECI ==>	

// Ornegin short x = 10;  ve  unsigned char y = 20;		x + y;		int alti turler vardir. char-short-long-long long-unsigned long long gibi ve C++'da bool veri tipi de int alti turlerdendir.

// Bu int alti turlerde koddaki gibi x+y; islem yapilacaginda int'e yukseltilip yapiliyordu ve bu isleme de integral promotion deniyordu.
// int alti turlerin int turune yukseltilerek islem yapilmasina integral promotion denir.
// float'dan double'a yapilan donusume ise "promotion" denir.
// int alti turlerin int turune yapilan donusumu "integral promotion" float dan double yapilan donusume "promotion" denir ve bunlar "PROMOTION" surecidir ve 2.oncelige sahiptir.


/*
void foo(int) {
	cout << "foo(int) cagrildi...";
}
void foo(short int) {
	cout << "foo(short int) cagrildi...";
}

int main() {
	bool x = true;
	foo(x);

	// Burada bool int alti bir veri turu ve int'e donusturulmesi bir promotion olur.
	// Fakat short int'e donusturulmesi standart convertion olur bunu anlatacagiz asagida daha gecmedik buraya.
	// Bu sebeple promotion standart convertion'dan daha yuksek oncelik seviyesine sahip oldugu icin int olan cagirilir.
	// Ancak void foo (short int) fonksiyonunun yerine void foo (bool) fonksiyonu olsaydi o zaman direkt exact match olacagi icin bu fonksiyon cagrilirdi.
}
*/


/*
void foo(double) {
	cout << "foo(double) cagrildi...";
}
void foo(int) {
	cout << "foo(int) cagrildi...";
}

int main() {
	float x = true;
	foo(x);

	// float'dan double'a yapilan donusum promotion.
	// float'dan int'e yapilan donusum ise standart convertion.
}
*/





/*
// 3- STANDART CONVERTION SURECI ==>	int alti bir turun yukseltilmedigi donusumlerdir.3.oncelik sirasina sahiptir.


	// int      -----------> char
	// long int -----------> bool

	// double ----------> char
	// double ----------> int

	// int ------------> double

	// Bu tarz yapilan donusumlerin hepsi standart convertion dur.int alti turlerin int'e yukseltilmesi integral promotion du.Float dan double a yapilan donusum promotion idi.
	// Standart convertion'da int alti bir turu yukseltilmez.Ornegin unsigned char -----> short veya bool a yapilan donusum yine standart convertion dur.
*/





// 4- USER DEFINED CONVERTION SURECI ==>	Daha cok class'larda gorulur.4.oncelik sirasina sahiptir.

/*
	Bir class turunden baska bir class turune veya bir class turunden default turlere yapilan donusumlere user defined convertion denir.
	Bir class olusturduktan sonra bir class'dan baska bir class'a veya bir class'dan bool'a int'e char'a float'a double'a vb.
	Diger turlere yapilan donusumlere user defined convertion denir.
	4.oncelik sirasina sahiptir ve sadece variadic fonksiyonlara ustunlugu vardir.
*/

