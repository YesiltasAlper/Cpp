#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// Assign-->>

	string (1)				string& assign (const string& str);
	substring (2)			string& assign (const string& str, size_t subpos, size_t sublen = npos);
	c-string (3)			string& assign (const char* s);
	buffer (4)				string& assign (const char* s, size_t n);
	fill (5)				string& assign (size_t n, char c);
	range (6)				template <class InputIterator>string& assign (InputIterator first, InputIterator last);
	initializer list(7)		string& assign (initializer_list<char> il);
	move (8)				string& assign (string&& str) noexcept;

	// String'lerde atama islemi icin kullanilir.
*/





// string (1)				string& assign (const string& str);

/*
int main() {
	
	std::string str1;
	std::string str2 = "alper";

	str1.assign(str2);

	std::cout << "Str1 = " << str1 << std::endl;
}
*/





//	substring (2)			string& assign (const string& str, size_t subpos, size_t sublen = npos);

/*
int main() {

	std::string str1;
	std::string str2 = "alper";

	str1.assign(str2, 1, 3);		// str2'nin 1.index'inden itibaren 3 uzunluk str1'e atanir.

	std::cout << "Str1 = " << str1 << std::endl;
}
*/





// c-string (3)			string& assign (const char* s);

/*
int main() {

	// std::string str1;
	// const char* cstr = "alper";

	// str1.assign(cstr);
	// std::cout << "Str1 = " << str1 << std::endl;


	// ********************************************

	
	// std::string str1;

	// str1.assign("alper");
	// std::cout << "Str1 = " << str1 << std::endl;
}
*/
	




// buffer (4)				string& assign (const char* s, size_t n);

/*
int main() {

	std::string str1;
	const char* cstr = "alper";

	str1.assign(cstr, 2);		// n = 2 cstr'nin basindan itibaren 2 uzunluk str1'e atanir.

	std::cout << "Str1 = " << str1 << std::endl;
}
*/
	




// fill (5)				string& assign (size_t n, char c);

/*
int main() {

	// std::string str1;
	// char c = 'X';

	// str1.assign(10, c);		// 10 tane c degiskeni olusturur ve str1'e atanir
	// std::cout << "Str1 = " << str1 << std::endl;


	// **********************************************************************

	
	// std::string str1;

	// str1.assign(10, 'X');		// 10 tane c degiskeni olusturur ve str1'e atanir
	// std::cout << "Str1 = " << str1 << std::endl;
}
*/





// range (6)				template <class InputIterator>string& assign (InputIterator first, InputIterator last);

/*
int main() {

	std::string str1;
	std::string str2 = "alper";

	str1.assign(str2.begin() + 2, str2.begin() + 4);	// str2'nin 2.index'inden itibaren str'nin 4.index'ine kadar olan karakterler str1'e atanir.
	std::cout << "Str1 = " << str1 << std::endl;
}
*/



	

// initializer list(7)		string& assign (initializer_list<char> il);

/*
int main() {

	// std::string str1;

	// str1.assign({ 'a','l','p','e','r' });
	// std::cout << "Str1 = " << str1 << std::endl;


	// ******************************************************

	
	// std::string str1;
	// std::initializer_list<char> il = { 'a','l','p','e','r' };

	// str1.assign(il);
	// std::cout << "Str1 = " << str1 << std::endl;
}
*/





// move (8)				string& assign (string&& str) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	str1.assign(move(str2));

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl;

	// str1 = "yesiltas"	olurken  str2 bos oldu.Str2'nin kaynaklari str1'e verildikten sonra str2 move ediliyor
	// bu sebeple str2'nin hayati biter.Move edildikten sonra str2'ye erismek tanimsiz davranistir.
}
*/
