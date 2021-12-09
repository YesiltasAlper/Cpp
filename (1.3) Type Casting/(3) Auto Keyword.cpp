#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
	// "Auto" keyword'u C++'da otomatik tur cikarimi yapar.

	int x = 20;

	double dval = 20.3;

	float f = 52.8;

	int *ptr = &x;

	long int y = 25;

	long long int z = 30;


	auto a_x = 20;			// a_x in turu ------>>>	int

	auto a_dval = 20.3;		// a_dval in turu ------>>> double

	auto a_f = 52.2f;		// a_f in turu ------>>>	float

	auto a_ptr = &x;		// a_ptr in turu ------>>>  int*

	auto a_y = 20L;			// a_y nin turu -------->>> long

	auto a_z = 25LL;		// a_z nin turu -------->>> long long

	// Goruldugu gibi turler otomatik olarak kendisi belirlendi.

	// Fakat dizilerde kullanilamaz.	 auto a[] = {5,10};	gecersizdir.	 int a[] = {5,10};	yazilmalidir.
*/





// Fonksiyonun geri donus degeri olarak kullanilabilir ============>>>>>>>

/*

int sum1(int x,int y){		

	return (x+y);
}

auto sum2(int x, int y) {

	return (x + y);
}

auto sum3(float x, float y) {

	return 5.3;	

	// Kod return 5.3f; olsaydi float olarak ayarlardi.
	// Kod return 5L; olsaydi long olarak ayarlardi.
	// Kod return 5LL; olsaydi long long olarak ayarlardi.
	// Default tur double.
}

auto sum4(int x, int y) {		// Bu kez goruldugu gibi kendisi sum'un turunu int* olarak ayarladi.

	static int* ptr = &x;
	return ptr;
}

auto sum5(auto x, int y) {		// FONKSIYON PARAMETRESI OLAMAZ.

	static int* ptr = &x;
	return ptr;
}


int main() {

	auto x1 = sum1(2, 5);
	auto x2 = sum2(4, 7);
	auto x3 = sum3(5.1, 9.5);
	auto x4 = sum4(7, 2);
}
*/

	



// Function Pointer Konusunda Buyuk Yarari Vardir ============>>>>>>>

/*
float sum(float x, float y) {
	return (x + y);
}

int main() {

	float(*fptr)(float, float) = &sum;

	float x = fptr(2.4, 2.8);
	cout << "x : " << x << endl;
}
*/
/*
float sum(float x, float y) {
	return (x + y);
}

int main() {

	auto fptr = &sum;

	float y = fptr(2.4, 2.8);
	cout << "y : " << y << endl;
}
*/





// Referanslarda Kullanilabilir ============>>>>>>>

/*
int main() {

	int x = 20;
	int& r = x;

	cout << "x : " << x << endl;
	cout << "r : " << r << endl;
}
*/
/*
int main() {

	int x = 20;
	auto& r = x;

	cout << "x : " << x << endl;
	cout << "r : " << r << endl;
}
*/





// Const Keyword ve Auto keywordu =======>>>>>>

/*
int main() {

	const int x = 10;
	auto y{ x };

	// Burada const int turunden x degiskeni y degiskenine atanacak y degiskeni auto keywordu ile tur cikarimi yapildi.
	// y'nin turu int. cunku pointerlar ve referanslarda const'dan int'e donusum olmaz.
	// Bunun disinda goz ardi edilebilir.
}
*/
/*
int main() {

	int val = 20;
	const int* x = &val;

	auto y{ x };

	// y'nin turu const int* .Const'luk bu kez goz ardi edilmedi cunku referans ve pointerlarda constluk onemlidir.
	// Ayrica referans ve pointerlarda const dan int'e donusum yoktur.Tur donusumu kesin yapilmalidir.
}
*/

