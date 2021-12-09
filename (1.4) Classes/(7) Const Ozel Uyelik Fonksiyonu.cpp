#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
struct data {
	int mx;
};


int main() {

	// --- EXPRESSION 1 -------------------------------------------------------------------------------------------------------

	// struct data obj1;
	// obj1.mx = 1;
	// cout << "obj1.mx : " << obj1.mx << endl;

	// --- EXPRESSION 2 -------------------------------------------------------------------------------------------------------

	// const struct data obj2 = { 5 };			// Const nesnelere ilk deger atamasi yapilabilir.
	// cout << "obj2.mx : " << obj2.mx << endl;

	// --- EXPRESSION 3 -------------------------------------------------------------------------------------------------------

	// const struct data obj3;
	// obj3.mx = 5;								// ERROR.Const nesneler sadece salt okuma amacli kullanilabilir.

	// --- EXPRESSION 4 -------------------------------------------------------------------------------------------------------

	// struct data* obj4 = NULL;
	// obj4->mx = 20;
	// cout << "obj4.mx : " << obj2.mx << endl;

	// --- EXPRESSION 5 -------------------------------------------------------------------------------------------------------

	// struct data obj5 = { 50 };
	// const struct data* obj6 = { &obj5 };		// Const nesnelere ilk deger atamasi yapilabilir.
	// cout << "obj6->mx : " << obj6->mx << endl;
	
	// --- EXPRESSION 6 -------------------------------------------------------------------------------------------------------

	// const struct data* obj7 = NULL;
	// obj7->mx = 30;							// ERROR.Const nesneler sadece salt okuma amacli kullanilabilir.
}
*/





/*
class myclass {

public:
	void foo(int x, int y);			
	int mx, my;						
	void display()const;
};


void myclass::foo(int x, int y) {	// Fonksiyonun ogesi degistirildigi icin const keywordu kullanilamaz.

	mx = x;
	my = y;
}


void myclass::display()const {		// Const fonksiyonun herhangi bir ogesi degistirilemez.Salt okuma amaclidir.

	cout << "mx = " << mx << endl;
	cout << "my = " << my << endl;

	cout << "********" << endl;
}


int main() {

	myclass obj1;

	obj1.mx = 1;		
	obj1.my = 2;		

	obj1.display();

	obj1.foo(150, 75);				
	obj1.display();
}
*/





/*
class myclass {

public:
	void foo(int x, int y);
	int mx, my;
	void display()const;
};


void myclass::foo(int x, int y) {	// Fonksiyonun ogesi degistirildigi icin const keywordu kullanilamaz.

	mx = x;
	my = y;
}


void myclass::display()const {		// Const fonksiyonun herhangi bir ogesi degistirilemez.Salt okuma amaclidir.

	cout << "mx = " << mx << endl;
	cout << "my = " << my << endl;

	cout << "********" << endl;

	mx = 15;		// ERROR.
}


int main() {

	myclass obj1;

	obj1.mx = 1;
	obj1.my = 2;

	obj1.display();

	obj1.foo(150, 75);
	obj1.display();
}
*/
