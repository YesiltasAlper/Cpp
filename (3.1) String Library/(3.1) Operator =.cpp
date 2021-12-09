#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	string (1)				string& operator= (const string& str);
	c-string (2)			string& operator= (const char* s);
	character (3)			string& operator= (char c);
	initializer list (4)	string& operator= (initializer_list<char> il);
	move (5)				string& operator= (string&& str) noexcept;
*/





//	string (1)				string& operator= (const string& str);

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	str1 = str2;		// str1.operator=(str2);

	std::cout << "Str1 : " << str1 << std::endl << "Str2 : " << str2 << std::endl;
}
*/





//	c-string (2)			string& operator= (const char* s);

/*
int main() {

	std::string str1 = "alper";
	const char* cstr = "yesiltas";

	str1 = cstr;	// str1.operator=(cstr);

	std::cout << "Str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl;
}
*/





// character (3)			string& operator= (char c);

/*
int main() {

	std::string str1 = "alper";
	char c = 'A';

	str1 = c;	// str1.operator=(c);

	std::cout << "Str1 : " << str1 << std::endl << "c : " << c << std::endl;
}
*/

	



//	initializer list (4)	string& operator= (initializer_list<char> il);

/*
int main() {

	std::string str1 = "alper";
	std::initializer_list<char> il = { 'y','e','s','i','l','t','a','s' };

	str1 = il;	// str1.operator=(il);

	std::cout << "Str1 : " << str1 << std::endl;
}
*/





//	move (5)				string& operator= (string&& str) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	str1 = move(str2);

	std::cout << "Str1 : " << str1 << std::endl << "Str2 : " << str2 << std::endl;

	// str2'yi bos string olarak gosterdi cunku move assingment'da kaynaklari kullanilan nesnenin kaynaklari
	// hedef nesneye verildikten sonra kaynak nesne yok edilir.
}
*/
