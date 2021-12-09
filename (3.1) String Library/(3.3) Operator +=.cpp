#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	//	Operator "+=" ->>	MEMBER OPERATOR OVERLOADING FUNCTION

	string (1)				string& operator+= (const string& str);
	c-string (2)			string& operator+= (const char* s);
	character (3)			string& operator+= (char c);
	initializer list (4)	string& operator+= (initializer_list<char> il);

*/





//	string (1)				string& operator+= (const string& str);

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl << "********************" << std::endl;

	str1 += str2;		// str1.operator+=(str2);

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl;
}
*/





//	c-string (2)			string& operator+= (const char* s);

/*
int main() {

	std::string str1 = "alper";
	const char* cstr = "yesiltas";

	std::cout << "str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl << "********************" << std::endl;

	str1 += cstr;		// str1.operator+=(cstr);

	std::cout << "str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl;
}
*/





//	character (3)			string& operator+= (char c);

/*
int main() {

	std::string str1 = "alper";
	char ch = 'Y';

	std::cout << "str1 : " << str1 << std::endl << "ch : " << ch << std::endl << "********************" << std::endl;

	str1 += ch;		// str1.operator+=(ch);

	std::cout << "str1 : " << str1 << std::endl << "ch : " << ch << std::endl;
}
*/





//	initializer list (4)	string& operator+= (initializer_list<char> il);

/*
int main() {

	std::string str1 = "alper";
	std::initializer_list<char> il = { 'y','e','s','i','l','t','a','s' };

	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "il : ";

	for (auto iter = il.begin(); iter < il.end(); iter++)
		std::cout << *iter;

	str1 += il;		// str1.operator+=(il);

	std::cout << std::endl << "********************" << std::endl << "str1 : " << str1 << std::endl;
	std::cout << "il : ";

	for (auto iter = il.begin(); iter < il.end(); iter++)
		std::cout << *iter;
}
*/
