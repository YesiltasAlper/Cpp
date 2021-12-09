#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	string substr (size_t pos = 0, size_t len = npos) const;

	Bir string'in icinden yeni bir string olusturur.

	pos --> Baslangic araligidir.		len --> pos'dan itibaren kac karakter alinacagini belirtir.
*/


void display(const std::string& str) {
	std::cout << "String :" << str << std::endl << "Size : " << str.size() << std::endl << "Length : " << str.length() << std::endl << "Capacity : " << str.capacity() << std::endl;
	std::cout << "******************************************" << std::endl;
}



/*
int main() {

	std::string str = "if you want to be loved,be lovable";

	display(str);
	std::string str2 = str.substr();			// Default
	display(str2);							
}
*/





/*
int main() {

	std::string str = "if you want to be loved,be lovable";

	display(str);
	std::string str2 = str.substr(7);			// 7.karakterden itibaren sona kadar alir ve str2'ye atar.
	display(str2);
}
*/





/*
int main() {

	std::string str = "if you want to be loved,be lovable";

	display(str);
	std::string str2 = str.substr(7,4);			// 7.karakterden itibaren 4 karakter ileriye gider ve str2'ye atar.
	display(str2);
}
*/
	




/*
int main() {

	std::string str = "if you want to be loved,be lovable";
	std::string str1 = "you";

	size_t index = str.find(str1);

	if (index != std::string::npos) {
		std::string str2 = str.substr(index);	// "you" nun baslama index'inden itibaren sonrasinin tamamini alir ve str2'ye atar.
		display(str2);
	}
}
*/





/*
int main() {

	std::string str = "if you want to be loved,be lovable";
	std::string str1 = "you";

	size_t index = str.find(str1);

	if (index != std::string::npos) {
		std::string str2 = str.substr(index, str1.size());	// "you" nun baslama index'inden itibaren you'nun size'i kadar alir.(str2 = you)
		display(str2);
	}
}
*/
