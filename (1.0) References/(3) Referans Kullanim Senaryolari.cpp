#include<iostream>
using namespace std;


/*
int x = 75;

int& foo() {

	return x;
}

int main() {

	cout << "x : " << x << endl;

	++foo();	

	cout << "x : " << x << endl;
}
*/




/*
int x = 75;

int& foo() {

	return x;
}

int main() {

	cout << "x : " << x << endl;

	int& r = foo();

	r++;

	cout << "x : " << x << endl;
}
*/




/*
int main() {

	int x = 20, y = 30;

	int& r = x;

	r = y;

	cout << "x : " << x << endl;
	cout << "r : " << r << endl;

	// Kodda r x'e referanstir.r = y kodunda r, x'e referans oldugu icin y'nin degeri x 'e kopyalanmistir x = 30 ve y = 30 olmustur.
	// Bir referans sadece bir nesneyi referans alabilir. r referansi x'den baska bir seyi referans alamaz.
	// Kodda r,y'ye referans olmamistir y'nin degeri r'ye atanmistir.y'ye referans isteniyorsa yeni bir nesne olusturulmalidir.
	// int& r2 = y; gibi.Cunku bir referans sadece bir nesneyi referans alabilir.
}
*/




/*
int main() {

	int x = 20, y = 30;

	int& r = x;

	r = y;


	int* const ptr = &y;

	*ptr = x;

	ptr = &x;		// ptr pointer degiskeni y'den baska bir nesnenin adresini tutamaz.ERROR
}
*/




/*
int main() {

	int x = 20, y = 30;

	const int& r = x;

	r = y;		// ERROR


	const int* ptr = &y;

	*ptr = x;	// ERROR

	ptr = &x;

	// Iki kod pointer reference benzerligidir.Ikisinin de degeri degistirilemez.
}
*/




/*
int main() {

	int x = 20, y = 30;

	{
		int& r = x;
		r = 58;
	}

	r = 45;		// ERROR

	// Referanslarin bir omru yoktur. Referanslar icin statik dinamik omurlu gibi kavramlari kullanmamiz mumkun degildir.
	// Bu sebeple auto ve static gibi anahtar sozcuklerin kullanimi referanslar icin gecerli degildir.
	// Ama referanslarin bir scope'u vardir.  Goruldugu gibi bir referans SCOPE'U BOYUNCA sahip oldugu ismi temsil ediyor.Scope boyunca r degiskeni x'e referanstir.
}
*/




/*
int main() {

	int x = 20;
	int* ptr = &x;
	int** pptr = &ptr;

	// Pointer bir nesnenin adresini tutuyorsa pointer to pointer ise bir pointerin adresini tutuyordu.Pointer to Pointer var ama reference to reference yoktur.

	int& r = x;
	int&& r1 = r;		// ERROR
}
*/




/*
int main() {

	int x = 20, y = 30, z = 40;

	int* pa[] = { &x,&y,&z };

	// Elemanlari adres tutan bir pointer dizi vardir pointer array olabilir.

	int& r[] = { x,y,z };

	// Reference dizi yoktur reference array olamaz.Fakat elemanlari reference olan bir dizi olabilir.

	int& r1 = x;
	int& r2 = y;
	int& r3 = z;

	int a[] = { r1,r2,r3 };
}
*/




/*
int main() {

	int x = 20;
	int y = 5;

	int* ptr = &x;

	int*& r = ptr;

	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "*ptr : " << *ptr << endl;

	cout << "**********" << endl;

	r = &y;
	*r = y;

	cout << "x : " << x << endl;
	cout << "y : " << y << endl;
	cout << "*ptr : " << *ptr << endl;

	// Bir pointer'i referans alinabilir.Syntax'i ise		int *&r = ptr	seklinde olmalidir.
	// ptr'nin turu (int *) o zaman referans alinacak nesnenin turu (int *) oldugu icin (int *)&r ifadesini kullanilmalidir.
}
*/




/*
	OZETLE =============>>>>>>

	=> Pointer to Pointer vardir. Reference to Reference yoktur.

	=> Reference dizi olamaz.Elemanlari referans olan dizi olabilir. Pointer dizi olur.

	=> Null Reference yok. Null Pointer var.

	=> Void Reference yok. Void Pointer var.

	=> Function Reference vardir. Function Pointer vardir.

	=> Bir pointer referans alinabilir.

	=> Referanslarin scope'u vardir ve scopelari boyunca ayni nesneyi gostermek zorundalardir.
*/

