#include<iostream>
using namespace std;

/*
	C'de bulunmayan C++'a ait bir ozelliktir.

	Ornegin int foo(int x, int y); fonksiyonu olsun.

	Bu fonksiyon C'de int main icinde 2 parametre ile cagirilirsa hata olusmaz.Ancak C'de 3 veya 2 veya 1 arguman gecilemez.Mutlaka 2 tane arguman gecilmelidir.
	C++'da ise bu fonksiyon 2 argumanla cagirabiliriz bu zaten olagan bir durumdur.Fakat default argumanlar sayesinde bu fonksiyon 1 veya 0 argumanla daha az argumanla cagirilabilir.

	C++'da bulunan "Default Arguments" sayesinde fonksiyonlar,sahip oldugu parametre sayisindan daha az argumanla cagrilabilir.
*/




/*
void foo(int x, int y = 50) {

	cout << "*******" << "\n";
	cout << "x : " << x << "\n";
	cout << "y : " << y << "\n";
}


int main() {

	foo(1);
	foo(8, 20);

	// Ikinci parametresine default olarak 50 degeri verildi.Boylece fonksiyon tek parametre ile cagrildiginda foo(1) y degeri default olarak 50 degerini aldi.
	// Aslinda foo(1) kodu foo(1,50) ile aynidir.Veya foo(8,20); kodunda ise bu kez fonksiyon 2 parametre ile cagrildi ve y degeri kullanici tarafindan 20 degerini aldi.
}
*/




/*
void foo(int x, int y = 50);


int main() {

	foo(1);
	foo(8, 20);
}


void foo(int x, int y = 50) {

	cout << "*******" << "\n";
	cout << "x : " << x << "\n";
	cout << "y : " << y << "\n";
}

	// Fonksiyonun hem prototip bildiriminde hem de fonksiyonu yazarken 2 kez default argument
	// bildirimi redefinition olusturur.ERROR
*/




/*
void foo(int x, int y = 50);


int main() {

	foo(1);
	foo(8, 20);
}


void foo(int x, int y) {

	cout << "*******" << "\n";
	cout << "x : " << x << "\n";
	cout << "y : " << y << "\n";
}

// NO ERROR.
*/




/*
void screen(int ht = 50, int wd = 80, const char* pname = "alper") {
	cout << "***************" << endl;
	cout << "ht : " << ht << endl;
	cout << "wd : " << wd << endl;
	cout << "pname : " << pname << endl;
}

int main(){

	screen();                               // screen(50,80,"alper");
	screen(20);                             // screen(20,80,"alper");
	screen(20, 70);                         // screen(20,70,"alper");
	screen(100, 50, "yesiltas");            // screen(100,50,"yesiltas");
}
*/




/*
int g = 20;

void foo(int& r = g) {

	cout << "*******" << endl;
	cout << "r : " << r << endl;
}

int main() {

	int x = 40;

	foo();
	foo(x);
}
*/




/*
int f1() {
	return 10;
}

int f2() {
	return 20;
}


void foo(int x = f1(), int y = f2()) {

	cout << "**********" << endl;
	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
}


int main() {

	foo();
	foo(5);
	foo(5, 80);
}
*/




/*
void foo(int a,        int b,         int c = 30,         int d = 40) {   // NO ERROR

	// int a = 10    int b,         int c = 30          int d = 40;          ERROR

	// int a,        int b,         int c = 15          int d;               ERROR

	// int a = 10;   int b = 7;     int c = 5;          int d = 11;          NO ERROR

	// int a,        int b,         int c,              int d = 10;          NO ERROR

}

int main() {

	// Simdiye kadar default arguman son parametreye yazilmisti.
	// Default arguman gectikten sonra sol tarafindaki parametreler default arguman almak zorunda degildir.
	// Ancak sag tarafinda eger parametre varsa bu parametreler default arguman almak zorundadir.
}
*/




/*
void foo(int x, int y, int z = 10);

void foo(int x = 200, int y = 50, int z);

// void foo(int x = 200, int y = 50; int z = 10);       Aynisi olur.


int main() {
	foo();
}


void foo(int x, int y, int z) {

	cout << "x : " << x << "\n";
	cout << "y : " << y << "\n";
	cout << "z : " << z << "\n";
}
*/




/*
void date(int day, int month, int year = -1);

void date(int day, int month, int year) {

	if (year == -1) 
		cout << "Default argument was used..." << "\n" ;
	

	else 
		cout << "Default argument was not used..." << "\n";
}

int main() {
	date(2, 18);
	date(1, 45, 2021);
}

// Default argument kullanmamizin bir sebebi de arguman kullanilip kullanilmadigini kontrol etmektir.
*/
