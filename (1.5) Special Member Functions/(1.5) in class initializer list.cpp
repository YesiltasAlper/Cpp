#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
class myclass {
	int mx, my;
public:
	void get()const;
	void set(int, int);
};

void myclass::set(int a, int b) {
	cout << "Set function..." << endl;
	mx = a;
	my = b;
}

void myclass::get()const {
	cout << "Get function..." << endl;
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {

	myclass obj;

	obj.get();
	obj.set(4, 5);
	obj.get();

	// Burada elemanlara ilk deger atamasi yapilmamistir.void set(int,int); fonksiyonu burada elemanlara ilk deger atamasi yapmaz.Sonradan deger atar.
	// Bu sebeple ilk basta obj.get(); kodunda cop degerler yazilmistir.obj.set(4,5); degerleri ise birer atamadir.Ilk basta cop degerle geliyor hayata.
	// Ilk deger atama islemi olmasi icin MIL syntax'i veya in class initializer list kullanilabilir.
}
*/





/*
class myclass {
	int mx = 20, my = 20;
public:
	void get()const;
	void set(int, int);
};

void myclass::set(int a, int b) {
	cout << "Set function..." << endl;
	mx = a;
	my = b;
}

void myclass::get()const {
	cout << "Get function..." << endl;
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {
	myclass obj;
	obj.get();
	obj.set(4, 5);
	obj.get();

	// In class initializer list yontemini kullaninca ilk deger atamasi yapilmistir.Daha sonra obj.set(4,5); ile degerleri degistirilmistir.
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass();				// Default constructor
	void set(int, int);
	void get()const;
};

myclass::myclass() {		// Default constructor
	cout << "Default constructor...." << endl;
	mx = 45;
	my = 50;
}

void myclass::set(int a, int b) {
	cout << "Set function..." << endl;
	mx = a;
	my = b;
}

void myclass::get()const {
	cout << "Get function..." << endl;
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {
	myclass obj;

	obj.get();
	obj.set(4, 5);
	obj.get();

	// Bu yontemle de ilk deger atama islemi yapilabilir ancak en iyisi MIL syntaxi dir.
}
*/





/*
class myclass {
	int mx, my;
public:
	myclass(int x, int y);
	void get()const;
	void set(int, int);
};

myclass::myclass(int x, int y) {
	cout << "Parametrik constructor...." << endl;
	mx = x;
	my = y;
}

void myclass::set(int a, int b) {
	cout << "Set function..." << endl;
	mx = a;
	my = b;
}

void myclass::get()const {
	cout << "Get function..." << endl;
	cout << "mx : " << mx << endl;
	cout << "my : " << my << endl;
}


int main() {
	myclass obj{ 11,13 };

	obj.get();
	obj.set(4, 5);
	obj.get();

	// Parametrik constructor kullanilarak ilk deger atamasi.Ancak en iyisi MIL Syntax'idir.
}
*/





/*
class square {
	int edge;
public:
	square(int a);
	int area()const;
	int perimeter()const;
	void display()const;
};

square::square(int a):edge{ a }{}	// Parametrik constructor MIL Syntax'i ilk deger atamasi

int square::area()const {	
	return edge * edge;
}

int square::perimeter()const {
	return edge * 4;
}

void square::display()const {
	cout << "Area : " << area() << endl;
	cout << "Perimeter : " << perimeter() << endl;

}

int main() {
	square my_square{ 10 };
	my_square.display();

	// area(); ve perimeter(); fonksiyonlarinin const olma sebebi ikisi de class'in
	// icindeki uyenin (edge) degerini degistirmedigi icindir.
}
*/
