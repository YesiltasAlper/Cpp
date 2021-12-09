#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;


/*
class myclass {
	int mx, my;
};

int main() {

	cout << sizeof(myclass) << " byte" << endl;
}
*/





/*
class myclass {
	int mx, my;
public:
	int foo();
	void func();
	myclass();
	~myclass();
	myclass(const myclass& r);
};

int myclass::foo() {
	int k;
	int l;

	return 0;
}


int main() {

	cout << sizeof(myclass);

	// Class'in 3 farkli ogesi olabiliyordu.Bu ogeler data member member function type member
	// Class'in sizeof'una sadece data memberlar etki eder.
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass() {
		cout << "Constructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
	~myclass() {
		cout << "Destructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
};


int main() {

	myclass * p = new myclass;

	// Kodda derleyici myclass'in sizeof'u kadar bizim icin yer ayirdi.Ayni zamanda myclass turunden myclass() nesnesini olusturdu.
	// Nesne olusturunca class'in constructor'i cagrilir.This pointeri ile olusan nesnenin adresini yazdirilir.
	
	delete p;

	// Delete fonksiyonu ile destructor cagrilir.
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass() {
		cout << "Constructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
	~myclass() {
		cout << "Destructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
};

int main() {

	auto x = new myclass;		// auto keywordu otomatik tur belirleme yapar.

	delete x;
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass() {
		cout << "constructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}

	~myclass() {
		cout << "destructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
};


int main() {

	cout << "main basladi..." << endl;

	auto x = new myclass;

	cout << "&x = " << x << endl;		

	delete x;

	cout << "main devam ediyor..." << endl;

	// x nesnesi hayata geldiginde dinamik omurludur ve stack degil de heap'den bellek tahsis edildigi icin
	// delete edilmedigi surece destructorlari cagrilmaz.Bu nesneleri silmek bizim kontrolumuzdedir.
	// stack'den alinan nesneler gibi otomatik olarak geri verilmezler.
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass() {
		cout << "constructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}

	~myclass() {
		cout << "destructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
};


int main() {

	cout << "main basladi..." << endl;

	auto x = new myclass;

	*x;		// No ERROR

	delete x;

	// *x;		// Runtime ERROR

	cout << "main devam ediyor..." << endl;

	// Delete edilen nesneye erismeye calismak Runtime hatasidir.
}
*/





/*
class myclass {

public:
	int mx, my;

	myclass() {
		cout << "constructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}

	~myclass() {
		cout << "destructor cagrildi..." << endl;
		cout << "this : " << this << endl;
	}
};


int main() {

	cout << "main basladi..." << endl;

	auto x = new myclass;

	x->mx = 10;		// NO ERROR
	x->my = 20;		// NO ERROR

	delete x;

	// x->mx = 50;		// RUNTIME ERROR
	// x->my = 100;		// RUNTIME ERROR

	cout << "main devam ediyor..." << endl;

	// Delete edilen nesneye erismeye calismak Runtime hatasidir.
}
*/
