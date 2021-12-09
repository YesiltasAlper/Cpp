#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


/*
class myclass {
private:
	static int c;	// static member
public:
	int x, y;		// non-static member
};

int myclass::c = 20;

int main() {

	std::cout << "value of c : " << myclass::c << std::endl;

	// c static member class scope'a tabi oldugu icin private'da access hatasi olusturur.
	// Bunun icin set fonksiyonu yazilabilir.
}
*/





/*
class myclass {
private:
	int x, y;		// non-static member
	static int c;	// static member
public:
	void set();
};

int myclass::c;

void myclass::set() {

	myclass::c = 45;
	//	c = 45;

	std::cout << "value of c : " << myclass::c << std::endl;
	//	std::cout << "value of c : " << c << std::endl;
	

	// myclass::c = 45; ve c = 45; kullanimlarinin ikisi de dogru olsa da myclass::c = 45; kodunu kullanmak daha faydalidir.
	// Cunku static data member syntax'i oldugu icin o ogenini static mi non-static mi oldugunu anlamayi kolaylastirir.
}


int main() {

	myclass obj1, obj2;

	obj1.set();
}
*/





/*
class myclass {
private:
	int x, y;		// non-static member
public:
	static int c = 20;	// static member
};


int main() {

	myclass obj1;

	// Class'in icinde bu sekilde deger vermek syntax hatasidir.
	// Eger class'in icerisinde deger vermek istenirse const kullanilmalidir.
}
*/





/*
class myclass {
private:
	int x, y;		// non-static member
public:
	const static int c = 20;	// static member
};


int main() {

	myclass obj1;

	std::cout << "Value of c : " << myclass::c << std::endl;

	// Const keywordu ile class'in icinde tanimlanabilir.
	// Ancak const kulanildigi icin degeri degistirilemez

	// myclass::c = 45;		// Syntax ERROR.
}
*/





/*
class myclass {
private:
	int x, y;		// non-static member
public:
	// const static bool c0 = 0;
	// const static short c1 = 1;
	// const static long c2 = 2;
	// const static long long c3 = 3;
	// const static int c4 = 4;
	// const static char c5 = 'E';

	// const static float c6 = 6.5;				// ERROR
	// const static double c7 = 7.5;			// ERROR
	// const static std::string c8 = "Alper";	// ERROR
};


int main() {

	myclass obj1;

	// Class'in icinde static memberlara  ilk deger vermek icin const keywordu kullanilsa da
	// bu islem sadece char ve tam sayi turleri icin gecerli bir islemdir.
}
*/

