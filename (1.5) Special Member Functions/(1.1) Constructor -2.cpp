#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
class myclass {
	
};

int main() {

	myclass obj;

	// "obj" nesnesi cagrilirken derleyici constructor'in kodunu yaziyor ve o constructor fonksiyonunun kodu calisiyor ve o fonksiyonun kodu tamamlaninca obj nesnesi olusuyor.
	// Derleyicinin default constructor'in kodunu yazdigi bu duruma implicitly constructor denir.
	// Derleyici default constructor degil de parametrik constructor yazabilir mi ?
}
*/





/*
class myclass {

};


int main() {

	myclass obj{ 12 };		// ERROR.

	// Derleyici parametrik constructor yazamaz.
}
*/





/*
class myclass {
public:
	myclass(int);
};

myclass::myclass(int) {
	cout << "myclass(int)...Parametrik constructor" << endl;
}

int main() {

	myclass obj{ 12 };		

	// Parametrik constructor kodu bizim tarafimizdan yazildi.
}
*/





/*
class myclass {
public:
	myclass();			// Default constructor olmamasi genellikle tercih edilmez.
	myclass(int);
};

myclass::myclass(int) {
	cout << "myclass(int)...Parametrik constructor" << endl;
}

myclass::myclass() {
	cout << "myclass()...Default constructor" << endl;
}

int main() {
	myclass obj1{ 12 };
	myclass obj2;			// Default constructor'u yazmazsak bu nesneyi olusturamayiz.

	// Default constructor cagirilabilecek bir nesne olusturdugumuzda hata verir.Cunku constructor yazdigimizda derleyici artik bizim adimizza dafault constructor yazmaz.
}
*/





/*
class myclass {
public:
	myclass() = default;
};

int main() {
	// Derleyiciye kodu gorunce default constructor yazmasi gerektigi bildirilir.
}
*/





/*
class myclass {
public:
	myclass() = delete;		// default constructor delete edilebilir.Ancak biz delete ettikten sonra cagri yapilirsa syntax hatasi olur.

};

int main() {
	myclass m;				// delete edilen fonksiyona cagri yapildi syntax hatasidir.
}
*/





/*
class myclass {
public:
	myclass();
};

myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
}

int main() {
	cout << "main basladi..." << endl;
	myclass obj;

	// Burada local alanda otomatik omurlu obj nesnesi tanimlandi.Kod main'e gelir ve cout << "main basladi..." << endl; kodu calisir.
	// Daha sonra myclass obj; kodunu gorunce nesne olusacagi icin kod default constructor'a gider ve ekrana  cout << "default constructor cagrildi..." << endl
	// basildiktan sonra obj nesnesi olusur.
}
*/





/*
class myclass {
public:
	myclass();
};

myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
}

myclass obj;

int main() {
	cout << "main basladi..." << endl;

	// obj nesnesi statik omurludur ve global alanda tanimlanmistir.main(); baslamadan obj nesnesi hayata gelir.
}
*/





/*
class myclass {
public:
	myclass();
};

void foo() {
	static myclass obj;
}

myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
}

int main() {
	// obj nesnesi foo(); fonksiyonuna cagri yapilirsa olusturulur.Bu durumda foo(); fonksiyonuna cagri yapilmadigi icin
	// obj nesnesi olusmaz ve default constructor cagrilmaz.
}
*/





/*
class myclass {
public:
	myclass();
};

void foo() {
	static myclass obj;
}

myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
}

int main() {
	cout << "main cagrildi..." << endl;			
	foo();

	// Bu durumda foo(); cagrilip obj; nesnesi olusacagi icin constructor olusur.
}
*/





/*
class myclass {
public:
	myclass();
};


myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}

int main() {
	myclass obj1;
	cout << "&obj1 : " << &obj1 << endl;
	myclass obj2;
	cout << "&obj2 : " << &obj2 << endl;

	// Once obj1 nesnesi olustugu icin once obj1 nesnesinin constructor'i cagrilir.
}
*/





/*
class myclass {
public:
	myclass();
};


myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}

int main() {
	myclass obj1;
	myclass* p = &obj1;
	myclass& r = obj1;
	cout << "&obj1 : " << &obj1 << endl;

	// sadece obj1 nesnesi icin constructor cagrilir.
}
*/





/*
class myclass {
public:
	myclass();
};


myclass::myclass() {
	cout << "default constructor cagrildi..." << endl;
	cout << "this : " << this << endl;
}

int main() {
	myclass obj[4];

	for (int i = 0; i < 4; i++)
		cout << "&obj[" << i << "] : " << &obj[i] << endl;

	// 4 elemani oldugu icin her bir elemani icin default constructor cagrilir.
	// Once obj[0] icin .... obj[3]
}
*/

