#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	1- CONSTRUCTOR ==>>	Bir nesneyi hayata getiren fonksiyondur.Hangi nesne olursa olsun o nesnenin hayata gelmesi icin mutlaka bir constructor fonksiyonu cagrilmasi gerekir.
						

	2 - class myclass{

	};

	myclass obj;		Burada bu obj nesnesinin hayata gelmesi icin bir constructor fonksiyonu cagrilir.Bir nesne hayata geliyorsa o nesnenin constructor'icagrilmistir.
						Derleyici kodunu kendisi yazdi ve cagirdi.Constructor'i biz de yazabiliriz derleyiciye de yazdirabiliriz.


	3 - constructor	{

	};

						Bir nesne cagrilacagi zaman constructor  fonksiyonuna girilir ve girildigi zaman sonuna kadar kodun islemesi lazim.Eger herhangi bir sebepten dolayi
						constructor'in kodu tamamlanmadan bu constructor'in icinden cikilirsa o nesne hayata gelmez.


	4 - Constructor,class'in ismiyle ayni isimli bir fonksiyondur.

	class A {

		A();	constructor class'in ismiyle ayni olmak zorundadir.Constructor'larda geri donus degeri kavrami yoktur.Overload edilebilir ve parametresi olabilir.
	};



	5 - class B {

		B(double);		constructor'in burada iki tane overload'i vardir.Constructor static veya const olamaz.Constructor non-static ve const olmayan uye islevdir.
		B(bool);		constructor class'in public private protected arayuzunde olabilir.Private'da olursa constructor'in client kodlar tarafindan cagrilmasi syntax hatasi olur ve nesne hayata gelemez.
						Constructor "." ve "->" ve "::" operatorleri ile cagrilmaz.Constructor'in cagrilabilmesi icin bir nesne olusturulmalidir.
						Constructor public private protected arayuzunde olabilse de constructor, istenen yerde nesne olusturulabilmesi icin genellikle public arayuzunde olur.
	};

*/





/*
class myclass {
public:
	myclass();
};

myclass::myclass() {
	cout << "constructor cagrildi..." << endl;
}


int main() {

	myclass obj;

	// Constructor class ismiyle ayni isimli bir fonksiyondur ve constructor'in cagrilabilmesi icin bir nesne olusturulmalidir.
	// myclass obj; kodu ile obj nesnesi olusturulmustur ve constructor cagirlmistir.Bu kodda constructor'i biz bildirdik.
	// Eger constructor kodu bizim tarafimizdan yazilmasaydi bile derleyici kendisi yazacakti.
}
*/





/*
class myclass {
	myclass();
public:

};

myclass::myclass() {
	cout << "constructor cagrildi..." << endl;
}


int main() {

	myclass obj;	
	
	// private arayuzunde oldugu icin client kodlardan erisim olmaz ve obj nesnesi olusturulamaz.
}
*/





/*
class myclass {
};


int main() {
	myclass obj;
	
	// obj nesnesi olustugu icin constructor kodlari derleyici tarafindan yazilir.
}
*/




/*
class myclass {
public:
	myclass(int);
	myclass(double);
	myclass(int, double);

	// 3 tane constructor vardir.Overload edilmistir.
};

myclass::myclass(int x) {
	cout << "myclass(int)" << endl;
}

myclass::myclass(double x) {
	cout << "myclass(double)" << endl;
}

myclass::myclass(int x , double y) {
	cout << "myclass(int , double)" << endl;
}
int main() {

	myclass obj1 = { 5 };
	myclass obj2 = { 5.12 };
	myclass obj3 = { 5,5.12 };
}
*/




// ===>>>> DEFAULT CONSTRUCTOR  :   Bir class'in parametresi olmayan veya parametleri varsayilan arguman olan constructor'a default constructor denir.


/*
class myclass {
public:
	myclass();				// Bu bir default constructor dir.
	myclass(int x = 7);		// Bu da default constructor'dir.
	myclass(int,double);	// Bu bir default constructor degildir.Parametrik constructor'dir.
};


int main() {

}
*/


