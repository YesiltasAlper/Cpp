#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// Constructor bir nesnenin hayata gelmesini saglayan bir fonksiyondur.Destructor ise bir nesnenin hayatini bitiren fonksiyondur.
// Destructor'i da biz yazmazsak bile yine derleyici bizim icin bu destructor fonksiyonunu yazar.



/*
class myclass {
public:
	myclass();		// Default constructor fonksiyonu
	~myclass();		// Destructor fonksiyonu
};

// Bir nesne hayata geliyorsa belli zaman sonra da hayati sonlaniyorsa o nesnenin destructor'i olmak zorundadir.
// Destructor'in kodunun bizim tarafimizdan veya derleyici tarafindan yazildigi fark etmeksizin eger bir nesnenin hayatisonlaniyorsa destructor'i vardir.
// Geri donus degeri kavrami yoktur.Ismi class'in ismiyle ayni olmak zorundadir.
// Destructor fonksiyonunun parametrik yapisi olamaz ~myclass(int); gecersizdir.
// Constructor'in turu ne olursa olsun tum constructorlarin hayatini sonlandirmak icin sadece ~myclass(); cagrilir.
// Static olamaz non-static olmak zorunda.Const olamaz ~myclass()const; gecersizdir.
// Class'in public private protected bolumunde olabilir.
*/





/*
class myclass {
public:
	myclass();
	myclass(int);
	~myclass();
};

myclass::myclass() {
	cout << "myclass()...Default constructor" << endl;
}

myclass::myclass(int) {
	cout << "myclass(int)...Parametrik constructor" << endl;
}

myclass::~myclass() {
	cout << "~myclass()...Destructor" << endl;
}


int main() {
	myclass obj{ 2 };

	// Once constructor cagrildi nesne hayata geldi ve sonra destructor cagrildi ve nesnenin hayati sonlandi.
}
*/





/*
class myclass {
public:
	myclass(int);
	~myclass();
};

myclass::myclass(int) {
	cout << "Constructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}

myclass::~myclass() {
	cout << "Destructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}


int main() {
	myclass obj{ 2 };
	cout << "&obj : " << &obj << endl;

	// obj nesnesi hayata gelir ve obj nesnesinin hayati sonlanir.
}
*/





/*
class myclass {
public:
	myclass(int);
	~myclass();
};

myclass::myclass(int) {
	cout << "Constructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}

myclass::~myclass() {
	cout << "Destructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}


int main() {
	myclass obj1{ 2 };
	cout << "&obj1 : " << &obj1 << endl;
	myclass obj2{ 5 };
	cout << "&obj2 : " << &obj2 << endl;

	// ilk once obj1 nesnesi icin constructor cagrilir ve sonrasinda obj2 nesnesi icin constructor cagrilir.
	// sonrasinda stack mantigi ile (last in first out) once obj2 icin destructor cagrilir sonra obj1 icin.
}
*/





/*
class myclass {
	~myclass();			
public:
	myclass(int);

};

myclass::myclass(int) {
	cout << "Constructor cagrildi..." << endl;
	cout << this << endl;
}

myclass::~myclass() {
	cout << "Destructor cagrildi..." << endl;
	cout << this << endl;
}


int main() {
	myclass obj1{ 2 };
	myclass obj2{ 5 };

	// Destructor private'a alinirsa syntax hatasi olur. Destructor cagrilmak zorundadir.Cunku biz derleyici yerine destructor yazdigimiz icin
	// artik derleyici kendisi destructor yazmaz.Private'da ise client kodlardan cagrilamadigi icin syntax hatasi.
}
*/

