#define CRT_SUCURE_NO_WARNING
#include <iostream>


/*
int main() {

	// "begin" ve "end" ise iterator interface'de kullaniliyor.Iterator interface bu tarz yapilari dolasmak icin kullanilan bir arayuz.
	// "begin" bellekte ilk elemanin adresini tutar "end" ise son elemanin adresini tutar.
	// Iteratorler pointer olmayan ama pointer gibi davranan nesnelerdir.


	std::initializer_list<int> test = { 2,4,6,8,10 };


	std::cout << "size : " << test.size() << std::endl;

	std::cout << "& begin : " << test.begin() << std::endl;
	std::cout << "begin : " << *test.begin() << std::endl;

	std::cout << "& end : " << (test.end()-1) << std::endl;
	std::cout << "end : " << *(test.end()-1) << std::endl;

	std::cout << "& end : " << test.end() << std::endl;
	std::cout << "end : " << *test.end() << std::endl;
}
*/





/*
int main() {

	std::initializer_list<int> test = { 2,4,6,8,10 };

	 // *(test.begin()) = 15;		// ERROR. Cunku initializer list'in ilk elemanina (2) 15 degeri atanmaya calisildi ancak initializer list const oldugu icin degistirilemez.

	auto value = test.begin();		// Auto keyword otomatik tur belirler.

	// *value = 45;					// ERROR. Cunku 2 yazan yere 45 yazmaya calistik ancak initializer list const oldugu icin degistirme yapilamaz.
}
*/





/*
int main() {

	std::initializer_list<int> test = { 2,4,6,8,10 };

	for (auto iter = test.begin(); iter != test.end(); iter++) {		// YOL-1	Iterasyon
		std::cout << *iter << std::endl;
	}
}
*/





/*
int main() {

	std::initializer_list<int> test = { 2,4,6,8,10 };

	for (int i : test) {												// YOL-2	Range Based For Loop
		std::cout << i << std::endl;
	}
}
*/
