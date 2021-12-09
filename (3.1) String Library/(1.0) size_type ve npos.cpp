#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


// size_type ====>>>>

/*
	Member types --> size_type		definition --> size_t

	size_t herhangi bir turu typedef bildirimi yapilmis bir tur es ismi verilmis varlik.
	It is a type able to represent the size of any object in bytes: size_t is the type returned by the sizeof operator and is widely used in the standard library to represent sizes and counts.
*/

/*
int main() {

	std::cout << "size_t : " << typeid(size_t).name() << std::endl;
	std::cout << "size_type : " << typeid(std::string::size_type).name() << std::endl;
}
*/





// npos ====>>>>

/*
	npos Maxiumum value of size_t.
	size_t bu derleyici icin unsigned long long int oldugu icin (baska derleyici veya isletim sistemi icin farkli olabilir)
	bu durumda npos'da unsigned long long int'in max degeridir.
*/

/*
int main() {

	std::cout << std::string::npos << std::endl;
	std::cout << "Sizeof(long long int) : " << sizeof(long long int) << " byte" << std::endl;

	// Unsigned long long int 64 bit ve unsigned oldugu icin max deger (2^64-1).
	// npos'un kullanim yeri en cok find fonksiyonlarinda basarisizlik degeri olarak kullanilir.
}
*/
