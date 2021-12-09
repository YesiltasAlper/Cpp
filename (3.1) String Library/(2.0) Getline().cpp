#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	(1)	istream& getline (istream&  is, string& str, char delim);
		istream& getline (istream&& is, string& str, char delim);

	(2)	istream& getline (istream&  is, string& str);
		istream& getline (istream&& is, string& str);

	// Getline fonksiyonu standart giris olan "cin>>" ile alinan bosluk karakterinde kesilme yapmamasini saglar.
*/


int main() {

	/*
	std::string str;
	std::cout << "Enter : ";
	std::cin >> str;
	std::cout << str;

	// Bosluk iceren string'i tam olarak ekrana yazdiramadi.
	*/




	/*
	std::string str;
	std::cout << "Enter : ";

	std::getline(std::cin, str);

	std::cout << str;
	*/
}
