#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// Constructor Initializer List veya Member Initializer List (MIL) denir.
// Constructor'in bir gorevi bir nesneyi hayata getirmektir.Bir baska islevi ise hayata getirdigi nesnelerin tamamina veya bir kismina ilk deger atamasi yapmayi saglamaktir.
// Boylece nesneler o degerle hayata gelir.Buna Member Initializer List (MIL) denir.



/*
class myclass {
	int mx, my;
public:
	myclass();
	void display()const;
};

myclass::myclass(){		
	cout << "Default constructor..." << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {

	myclass obj;
	obj.display();

	// Ilk deger atamasi yapilmayan obj nesnesinin mx ve my uyeleri garbage value ile hayata gelir.
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass();
	void display()const;
};

myclass::myclass() :mx{ 10 }, my{ 20 }{			// Bu syntax'a "MIL" denir ve mx ile my bu degerlerle hayata gelecektir.
	cout << "Default constructor..." << endl;

}

void myclass::display()const {
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {

	myclass obj;
	obj.display();

	// Burada obj nesnesinin mx ve my'si hayata gelirken 10 ve 20 degerleri ile hayata gelir.
}
*/





// Class'in bazi elemanlarina da zorunlu ilk deger verme vardir.
// Eger ilk deger verilmezse syntax hatasi olur.


/*
class myclass {
	int mx;
	const int my;
public:
	myclass();
	void display()const;
};

myclass::myclass() :my{ 10 }{			// my const oldugu icin zorunlu olarak ilk deger atamasi yapilmalidir.
	cout << "Default constructor..." << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {
	myclass obj;
	obj.display();

	// const turden uye islevlerine ilk deger atamasi yapmamak syntax hatasi olusturur.
	// Ayni sekilde referanslar bir nesnenin yerine gectigi icin mekanizma oldugu icin onlara da ilk deger atamasi yapilmalidir.
}
*/





/*
class myclass {
	int mx;
	int &r;
public:
	myclass();
	void display()const;
};


myclass::myclass() :mx{ 10 }, r{ mx } {			// r referans turunden oldugu icin zorunlu olarak ilk deger atamasi yapilmalidir.
	cout << "Default constuctor..." << endl;
}

void myclass::display()const {
	cout << "mx : " << mx << endl;
	cout << "r  : " << r << endl;
}


int main() {
	myclass obj;
	obj.display();

	// Referans turlere ilk deger atamasi yapilmazsa syntax hatasi olusur.
}
*/





/*
class complex_number {
	double complex_im, complex_re;
public:
	complex_number(double im,double re);		// Parametrik constructor
	void display()const;
};


complex_number::complex_number(double im, double re) :complex_im{ im }, complex_re{ re }{
}


void complex_number::display()const {
	cout << "complex_im : " << complex_im << endl;
	cout << "complex_re : " << complex_re << endl;
}

int main() {

	complex_number obj{ 5.3,7.4 };
	obj.display();

	// MIL Syntax'i default constructor yapisi disinda diger constructor yapilarinda da kullanilabilir.
	// complex_number obj{ 5.3,7.4 }; koduyla complex_number(double im,double re); parametrik constructor'ina
	// cagri yapilir ve im = 5.3   re = 7.4 olur.Parametrik constructor'in icerisinde MIL Syntax'i kullanilarak
	// class'in private ogeleri olan complex=im = 5.3 ve complex_re = 7.4 ilk degerlerini almistir.
}
*/
