#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;



/*
class myclass {

};


int main() {

	auto x = new myclass;			// tek oge olusturmak icin

	auto array = new myclass[];		// Dinamik dizi olusturmak icin [] ile dizi oldugu belirtilir

	auto array2 = new myclass[20];	// 20 tane myclass nesnesi iceren bir dinamik dizi olusturur.[dizi elemani sayisi]

	delete x;						// tek dinamik oge silmek icin

	delete[]array;					// dinamik dizi silmek icin [] ile dizi oldugu belirtilir.

	delete[]array2;					// dinamik dizi silmek icin [] ile dizi oldugu belirtilir.
}
*/





/*
class myclass {
public:
	int mx;
	myclass() {
		cout << "Constructor cagrildi..." << endl;
		cout << "This : " << this << endl;
	}

	~myclass() {
		cout << "Destructor cagrildi..." << endl;
		cout << "This : " << this << endl;
	}
};


int main() {

	cout << "Sizeof myclass : " << sizeof(myclass) << " byte" << endl << endl << endl;

	auto p{ new myclass[3] };	// Uniform initializer kullanildi.	Kod  auto p = new myclass[3]; kodu ile aynidir.	auto p kodu da myclass* p kodu ile aynidir.

	cout << endl;

	delete []p;
}
*/
