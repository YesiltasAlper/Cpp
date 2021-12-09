#define CRT_SUCURE_NO_WARNING
#include <iostream>

/*
class myclass {
public:
	myclass() = default;

	myclass(int x, int y) {
		std::cout << "myclass(int x, int y) cagrildi..." << std::endl;
	}
};

int main() {

	myclass m1(2, 3);
	myclass m2{ 2,3 };

	// Her iki durumda da myclass(int x,int y) cagrildi.
}
*/





/*
class myclass {
public:
	myclass() = default;

	myclass(int x, int y) {
		std::cout << "myclass(int x, int y) cagrildi..." << std::endl;
	}

	myclass(std::initializer_list<int> a) {
		std::cout << "myclass(std::initializer_list<int> a) cagrildi..." << std::endl;
	}
};

int main() {
	myclass m1(2, 3);		// Bu durumda	myclass(int x, int y) cagrildi..
	myclass m2{ 2,3 };		// Bu durumda	myclass(std::initializer_list<int> a) cagrildi...

	// Her ikisinde de iki parametre var hem parametreli constructor ile hem de initializer list ile uyumludur.
	// Ancak boyle bir durumda uniform initializer olan "{}" initializer list oldugu icin o kodda initializer list cagrildi.
	// Direct initializition da "()" ise initializer list syntax'i olmadigi icin parametrik constructor cagrildi.
	// Hangi fonksiyon cagrilmak istenirse o kullanilir.
}
*/
