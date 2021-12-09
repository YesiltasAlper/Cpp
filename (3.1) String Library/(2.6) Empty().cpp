#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// empty -->>

	bool empty() const noexcept;


	// String'in icinin bos olup olmadigini kontrol eder.Eger string bos ise = 1 degil ise = 0 dondurur.
*/


void display(const std::string& str) {
	std::cout << "String :" << str << std::endl << "Size :" << str.size() << std::endl << "Length :" << str.length() << std::endl << "Capacity :" << str.capacity() << std::endl;
	std::cout << "**************************" << std::endl;
}



void control(const std::string& x) {

	if (x.empty())
		std::cout << "String is empty" << std::endl;
	else
		std::cout << "String is NOT empty" << std::endl;

	std::cout << "**************************" << std::endl;
}


int main() {

	std::string str = "Alper Yesiltas Merhaba";
	display(str);
	control(str);

	std::cout << "**********CLEAR***********" << std::endl;

	str.clear();

	display(str);
	control(str);

	// string silinse bile capacity ayni kalir.
	// Eger o kapasiteye ihtiyac duyulmayacaksa o zaman capacity'i sigdirip alinan byte'lar heap'e geri verilmelidir.

	std::cout << "********SHRINK_TO_FIT*********" << std::endl;

	str.shrink_to_fit();

	display(str);
	control(str);
}
