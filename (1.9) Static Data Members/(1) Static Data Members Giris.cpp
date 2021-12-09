#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
	Class elemanlari 3 turde olabilir.Bunlar data memberlar,member functionlar,type memberlar.
	Data member ve Member functionlar static-non static olabilirler.

	Data memberlar ornegin int x double y class'in icinde tanimlanan memberlardi.
	Bunlar static keywordu ile kullanilmadiklarinda non-static oluyordu.
	Eger data memberlar ve member functionlar class'in icerisinde static keywordu ile tanimlanirsa 
	static data memberlar ve static member functionlar olacak.
*/





/*
class myclass {
public:
	int x, y;		// non-static member
	static int c;	// static member

	// x ve y nesneye ozgu fonksiyonlardir.Yani her nesne icin bunlar kopyalanir.
	// Her nesnenin x'i ve y'si farklidir.Ornegin int main(); de olusturulacak olan myclass obj1,obj2; kodlarinda obj1'in x'i ve y'si ile
	// obj2'nin x'i ve y'si birbirinden tamamen farklidir hicbir baglantisi yoktur.Her obj1 icin x,y kopyalanir her obj2 icin x,y kopyalanir.
	// Dolayisiyla obj1 ve obj2 nin adresleri farkli oldugu gibi obj1.x obj2.x ve obj1.y obj2.y adresleri tamamen farklidir.

	// Ancak burada olusturulan static int c; degiskeni static memberdir ve bu c degiskeni class'a ozgudur ve her class tarafindan kullanilabilir.Bazen
	// bir degiskenin ayni class turu tarafindan olusturulan tum nesneler tarafindan paylasilmasi istenir.Ornegin int main(); de olusturulacak olan myclass obj1,obj2; kodlarinda
	// c nesnesi icin bu kez obj1.c ve obj2.c ayni elemandir adresleri aynidir.

	// Ayrica c degiskenini kullanmak bir nesneye ihtiyac yoktur ancak bir nesne ile de kullanilabilir.
	// Ancak x ve y degiskenlerini kullanabilmek icin nesneye ihtiyac vardir.
};

int main() {

	myclass obj1, obj2;

	std::cout << "&obj1.x : " << &(obj1.x) << std::endl;
	std::cout << "&obj2.x : " << &(obj2.x) << std::endl;

	std::cout << "Goruldugu gibi adresler farkli cunku nesneye ozgudur..." << std::endl;
}
*/





/*
class myclass {
public:
	int x, y;			// non-static member
	static int c;		// static member

	// Bir class'in sizeof'una sadece non-static member functionlar etki eder.
	// x,y; ler birer definition tanimlamadir.c ise declaration bildirimdir.
	// Ayrica c degiskeni statik omurludur. main()'den once hayata gelip main()'den sonra hayati biter.
};

int main() {
	myclass obj1;
	std::cout << "sizeof(myclass) : " << sizeof(myclass) << " byte" << std::endl;
}
*/





/*
class myclass {
public:
	int x, y;		// non-static member
	static int c;	// static member
};

int myclass::c = 45;	// myclass'in c si

int main() {

	myclass obj1, obj2;

	std::cout << "&(obj1.c) : " << &(obj1.c) << std::endl;
	std::cout << "&(obj2.c) : " << &(obj2.c) << std::endl;
	std::cout << "&c : " << &(myclass::c) << std::endl;

	// c bir declaration oldugu icin derleyici bunun tanimlanmasini ister.int myclass::c = 45; koduyla c tanimlanir ve 45 atanir.
	// Taniminin syntax'inda static keyword'u tekrar kullanilmaz geri donus degeri yazilir.
	// Nesneye ihtiyaci olmadigi icin obj1.c gibi tanimlamalari yapmak yanlis olur.
	// Tanimlama yapildiktan sonra c'nin nesneye ihtiyaci olmasa da bir nesne ile eriserek veya nesnesiz eriserek de kullanilabilir.

	std::cout << "c : " << myclass::c << std::endl;
	std::cout << "obj1.c : " << obj1.c << std::endl;
	std::cout << "obj2.c : " << obj2.c << std::endl;

	// static oldugu icin ve nesneye ozgu olmadigi icin int myclass::c = 45; kodundan sonra tum nesnelerde (obj1,obj2) c'nin
	// degeri 45 olur.
}
*/





/*
class myclass {
public:
	int x, y;			// non-static member
	static int c;		// static member

	myclass();
	~myclass();

	// c degiskenini kullanabilmek icin nesne olusturmak zorunlu degildir.Bu sebeple c degiskeni
	// nesne olusturulmadan kullanilirsa bu durumda constructor destructor vb cagrilmaz.
};

int myclass::c = 45;	// myclass'in c si

myclass::myclass() {
	std::cout << "Constructor..." << "this : " << this << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << "this : " << this << std::endl;
}

int main() {
	std::cout << "c : " << myclass::c << std::endl;
}
*/





/*
class myclass {
public:
	int x, y;			// non-static member
	static int c;		// static member

	myclass();
	~myclass();

	// c degiskenini kullanabilmek icin nesne olusturmak zorunlu olmasa da eger nesne olusturulursa
	// olusan nesne icin constructor destructor vb cagrilir.
};

int myclass::c = 45;	// myclass'in c si

myclass::myclass() {
	std::cout << "Constructor..." << "this : " << this << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << "this : " << this << std::endl;
}

int main() {

	myclass obj1, obj2;

	std::cout << "*****************************" << std::endl;

	std::cout << "&c : " << &(myclass::c) << std::endl;
	std::cout << "&(obj1.c) : " << &(obj1.c) << std::endl;
	std::cout << "&(obj2.c) : " << &(obj2.c) << std::endl;

	std::cout << "*****************************" << std::endl;

	std::cout << "c : " << myclass::c << std::endl;
	std::cout << "obj1.c : " << obj1.c << std::endl;
	std::cout << "obj1.c : " << obj1.c << std::endl;

	std::cout << "*****************************" << std::endl;

	obj1.c = 50;

	std::cout << "c : " << myclass::c << std::endl;
	std::cout << "obj1.c : " << obj1.c << std::endl;
	std::cout << "obj1.c : " << obj1.c << std::endl;

	std::cout << "*****************************" << std::endl;
}
*/





/*
class myclass {
	static int c;		// static member
public:
	int x, y;			// non-static member

	myclass();
	~myclass();
};

int myclass::c = 45;	// myclass'in c si

myclass::myclass() {
	std::cout << "Constructor..." << "this : " << this << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << "this : " << this << std::endl;
}

int main() {

	// std::cout << "c : " << myclass::c << std::endl;		// ERROR.

	// c degiskeni nesneye ihtiyac duymasa da sonucta class'in bir ogesidir.
	// Bu sebeple public private protected belirtecleri (encapsulation)
	// c nesnesi icin de gecerlidir.
}
*/
