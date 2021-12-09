#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// reserve -->>

	void reserve (size_t n = 0);

	// Bu fonksiyon kapasiteyi degistirmek icin bir istekte bulunur.


	// shrink_to_fit -->>

	void shrink_to_fit();

	// Bu fonksiyon kullanilmayan kapasite degerini kucultur.
*/



void display(const std::string& str) {
	std::cout << "Size :" << str.size() << std::endl << "Capacity :" << str.capacity() << std::endl;
}



/*
int main() {

	std::string str;

	for (int i = 0; i < 1000; i++) {	
		str.push_back('x');
		display(str);
	}
}
*/





/*
int main() {

	std::string str;

	str.reserve(529);

	for (int i = 0; i < 1000; i++) {	
		str.push_back('x');
		display(str);
	}
}
*/





/*
int main() {

	std::string str;

	str.reserve(529);

	for (int i = 0; i < 1000; i++) {	
		str.push_back('x');
		display(str);
	}

	std::cout << "**********************Before Clear***********************" << std::endl;

	display(str);

	str.clear();

	std::cout << "**********************After Clear***********************" << std::endl;

	display(str);
}
*/





/*
int main() {

	std::string str;

	str.reserve(529);

	for (int i = 0; i < 1000; i++) {	
		str.push_back('x');
		display(str);
	}

	std::cout << "**********************Before Clear***********************" << std::endl;

	display(str);

	str.clear();

	std::cout << "**********************After Clear***********************" << std::endl;

	display(str);

	std::cout << "**********************After Calling shrink_to_fit***********************" << std::endl;

	str.shrink_to_fit();

	display(str);

	// Yazinin boyutu size = 0 oldugu icin default capacity'e dusurur.
}
*/





/*
int main() {

	std::string str;

	str.reserve(529);

	for (int i = 0; i < 1000; i++) {	
		str.push_back('x');
		display(str);
	}

	std::cout << "**********************Before Assing***********************" << std::endl;

	display(str);

	str = "1234567891234567";

	std::cout << "**********************After Assing***********************" << std::endl;

	display(str);

	std::cout << "**********************After Calling shrink_to_fit***********************" << std::endl;

	str.shrink_to_fit();

	display(str);

	// Sigdirma islemi yapar ve en kucuk capacity'e sigdirir.
}
*/

