#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
class myclass {

public:
	void foo(int x, int y);
	int mx, my;
};


int main() {

	myclass obj;

	obj.mx = 10;
	obj.my = 20;

	cout << "obj.mx : " << obj.mx << endl;
	cout << "obj.my : " << obj.my << endl;

	// Class ogelerine erisip o ogelerin degerleri bu sekilde degistirilebilir.
	// Bunun nasil yapildigini anlamak icin C'de call by reference ve call by value yapilarina bakalim.
}
*/





/*
void foo(int x) {
	x = 500;
}

int main() {

	int a = 20;

	cout << "a = " << a << endl;
	foo(a);
	cout << "a = " << a << endl;

	// Call By Value oldugu icin fonksiyon icinde 500 degeri atanmasina ragmen a = 20 kaldi.
}
*/





/*
void foo(int* x) {
	*x = 500;
}

int main() {

	int a = 20;

	cout << "a = " << a << endl;
	foo(&a);
	cout << "a = " << a << endl;

	// Call By Reference oldugu icin a = 500 oldu degisti yani.
}
*/





/*
class myclass {

public:
	void foo(int x, int y);			
	int mx, my;						
									

	void display()const;
};


void myclass::foo(int x, int y) {

	mx = x;
	my = y;
}


void myclass::display()const {

	cout << "mx = " << mx << endl;
	cout << "my = " << my << endl;

	cout << "***********" << endl;
}


int main() {

	myclass obj1;

	obj1.mx = 1;		
	obj1.my = 2;		

	obj1.display();

	obj1.foo(150, 75);				
	obj1.display();

	// Class'larin fonksiyon memberlarinda kendi turunden gizli pointer parametresi vardir.
	// Bu sayede adresler uzerinde islem yapilarak degistirilen degerler call by reference
	// yapisinda oldugu gibi kalici olur.
}
*/
