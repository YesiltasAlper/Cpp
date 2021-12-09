#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// Front ->>		String'in ilk karakterine erisilmesini saglar.

	char& front();
	const char& front() const;


	// Back ->>			String'in son karakterine erisilmesini saglar.

	 char& back();
	const char& back() const;


	// At ->>			String'in belirli bir index'indeki elemanina erisilmesini saglar.

	char& at (size_t pos);
	const char& at (size_t pos) const;
*/




//****************FRONT****************

/*
int main() {

	std::string str = "alper";

	std::cout << str.front();
}
*/





/*
int main() {

	std::string str = "alper";

	str.front() = 'A';		// veya str.front() = 65;
	std::cout << str;
}
*/





//********************BACK********************

/*
int main() {

	std::string str = "alper";

	std::cout << str.back();
}
*/





/*
int main() {

	std::string str = "alper";

	str.back() = 'R';		// veya str.front() = 82;
	std::cout << str;
}
*/






//********************AT********************

/*
int main() {

	std::string str = "alper";

	std::cout << str.at(2);		// string'in 2.indexli elemani
}
*/





/*
int main() {

	std::string str = "alper";

	for (auto x = 0; x < str.size(); x++)
		std::cout << str.at(x);
}
*/





/*
int main() {

	std::string str = "alper";

	str.at(3) = 'C';		// veya str.front() = 67;
	std::cout << str;
}
*/
