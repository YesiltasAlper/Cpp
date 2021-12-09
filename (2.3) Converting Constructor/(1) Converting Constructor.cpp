#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

/*
class myclass {

};

int main() {
	myclass a;			// Derleyici biz yazmasak bile kendisi constructor yazdigi icin Syntax hatasi yok.

	myclass a(20);		// Derleyici kendisi parametreli constructor yazmayacagi icin SYNTAX ERROR.
}
*/





/*
class myclass {
public:
	myclass(int x);
};

int main() {
	myclass a(20);		// No error.

	myclass c;			// ERROR.
	
	// Parametreli constructor yazdiktan sonra derleyici kendisi default constructor yazmaz.
}
*/





/*
class myclass {
public:
	myclass();
	myclass(int x);
	~myclass();
};

myclass::myclass() {
	std::cout << "Default Constructor..." << std::endl;
}

myclass::myclass(int x) {
	std::cout << "Converting Constructor (int x)..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

int main() {

	myclass a;
	myclass b(20);

	a = 20;

	//	a = 20; kodunda a bir nesnedir ve myclass turundendir. 20 ise int turundendir int turden bir degisken myclass turune atandi.
	//	Bunun olmasini saglayan sey  myclass(int x); converting veya parametrik constructor.
	//	Tek parametreli constructor'a da converting constructor denir.Burada int degeri de myclass turune donusturuldu.
	//	Eger class dan	myclass(int x); kodu converting constructor silinirse a = 20; kodu donusumu yapilamayacagi icin error verir.
}
*/





/*
class myclass {
public:
	myclass();
	myclass(int x);
	~myclass();
};

myclass::myclass() {
	std::cout << "Default Constructor..." << std::endl;
}

myclass::myclass(int x) {
	std::cout << "Converting Constructor (int x)..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

int main() {

	myclass a;
	a = 30;
	
	// Derleyici burada a nesnesinin myclass turunden oldugunu algilar ve derleyici myclass turunden gecici bir nesne olusturur.
	// ve olusturdugu bu gecici nesneye bizim verdigimiz degeri atar ve kod myclass tempobj(30); olur.
	// Sonra a nesnesine tempobj'yi atayacaktir.

	// myclass tempobj(30);
	// a = tempobj;

	// Sonra tempobj'yi destruct eder.Derleyici bu islemleri arka planda yapar.
	// Ilk once a nesnesi hayatta oldugu icin a nesnesi icin default constructor cagrilir.Daha sonra a = 30; kodunda derleyici o islemleri yapar.
	// tempobj(30); kodu myclass(int x); koduna gider ve convertion constructor olusur.Ardindan a nesnesi de hayatta tempobj'de hayattadir ve
	// a = tempobj; kodunda her iki nesne de hayatta oldugu icin atama isleminde copy assingment cagrilir.Sonrasinda a = 30; kodu tamamlaninca
	// tempobj'nin hayati biter ve destructor'i cagrilir.Daha sonra a nesnesinin hayati biter ve a nesnesinin destructor'i cagrilir.

	// Simdi copy assingment fonksiyonunun cagrildigini gosterelim.
}
*/





/*
class myclass {
public:
	myclass();
	myclass(int x);
	~myclass();
	myclass& operator=(const myclass right);	// copy assingment
};

myclass::myclass() {
	std::cout << "Default Constructor..." << std::endl;
}

myclass::myclass(int x) {
	std::cout << "Converting Constructor (int x)..." << std::endl;
}

myclass::~myclass() {
	std::cout << "Destructor..." << std::endl;
}

myclass& myclass::operator=(const myclass right) {
	std::cout << "Copy Assingment Function..." << std::endl;
	return *this;
}


int main() {

	myclass a;
	a = 20;

	// Goruldugu gibi dediklerimizi ispatladik.

	// myclass tempobj(30);
	// a = tempobj;

	// Derleyicinin arka planda yaptiklari sayesinde int turden bir degisken myclass turune donusturuldukten sonra
	// myclass turden a nesnesine atanmistir.Bu donusum icin converting constructor gereklidir.
}
*/





/*
int main() {

	std::string str;
	str = "alper";

	// String kutuphanesinde 		string(const char* s);		fonksiyon var.
	// Bu fonksiyon yani converting constructor sayesinde string str = "alper"; kodu yazilabiliyor.

	//	  class string{
	//	  .....
	//    .....
	//    .....
	//	  string(const char* s);
	//    };

	// str'nin turu string ancak "alper"; in turu const char* oldugu icin converting constructor ile derleyici arka planda asagidaki islemleri yapar.

	//    string tempobj("alper");
	//	  str = tempobj;

	// Derleyici bu kodu bizim icin yaziyor arka planda ve converting constructor sayesinde const char* turunden degisken string turune atanabiliyor.
	// Burada str icin constructor cagriliyor sonra gecici nesne icin yani tempobj icin converting constructor cagriliyor sonra str = tempobj; kodunda
	// iki nesnede hayatta oldugu icin copy assingment cagriliyor.Daha sonra str = "alper"; kodu bittiginde tempobj'nin destructor'i cagriliyor
	// sonra str'nin destructor'i cagriliyor ve kod bitiyor.
}
*/


/*
	myclass a(12)		-->>		Direct initilization

	myclass a{12};		-->>		Brace initilization

	myclass a = 12;	    -->>		Copy initilization
*/
