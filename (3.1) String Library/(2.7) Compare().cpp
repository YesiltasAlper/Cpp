#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// Compare-->>

	string (1)		int compare (const string& str) const noexcept;

	substrings (2)	int compare (size_t pos, size_t len, const string& str) const;
					int compare (size_t pos, size_t len, const string& str,size_t subpos, size_t sublen = npos) const;

	c-string (3)	int compare (const char* s) const;
					int compare (size_t pos, size_t len, const char* s) const;

	buffer (4)		int compare (size_t pos, size_t len, const char* s, size_t n) const;


	// Iki string kiyaslamasi ASCII'ye gore yapilir zaten C'de de boyleydi.Mesela str1 = "ABC" str2 = "a" olsun bu durumda str2 daha buyuktur.
	// veya str1 = "ABC" str2 = "Ab" olsun yine str2 daha buyuktur.

	// 1.string 2.string'den buyukse > 0 deger dondurur.		Esitse = 0 dondurur.		2.string 1.string'den buyukse <0 deger dondurur.
*/


void control_str(int x) {

	if (x > 0)
		std::cout << "str1 > str2" << std::endl;
	if (x == 0)
		std::cout << "str1 = str2" << std::endl;
	if (x < 0)
		std::cout << "str2 > str1" << std::endl;
}



//	string (1)		int compare (const string& str) const noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "ayesiltas";

	int x = str1.compare(str2);

	std::cout << "String1 = " << str1 << std::endl << "String2 = " << str2 << std::endl;
	control_str(x);
}
*/





//	substrings (2)		int compare (size_t pos, size_t len, const string& str) const;

/*
int main() {

	std::string str1 = "axzp";
	std::string str2 = "zp";

	int x = str1.compare(2, 2, str2);	// str1'in 2.index'li karakterinden itibaren (z) 2 uzunluk (zp) str2 (zp) ile kiyaslar

	std::cout << "String1 = " << str1 << std::endl << "String2 = " << str2 << std::endl;
	control_str(x);
}
*/





//	substrings(2)	int compare(size_t pos, size_t len, const string & str, size_t subpos, size_t sublen = npos) const;

/*
int main() {


	std::string str1 = "*xak**";
	std::string str2 = "----xa-";

	int x = str1.compare(1, 2, str2, 4, 2);

	std::cout << "String1 = " << str1 << std::endl << "String2 = " << str2 << std::endl;
	control_str(x);

	// pos ve len sol string'in ifadeleridir.str1'in 1.index'inden itibaren baslayarak (x) 2 uzunluk (xa).
	// str2'nin 4.index'inden itibaren baslayarak (x) 2 uzunluk (xa) kiyaslar.
}
*/





// c-string (3)		int compare (const char* s) const;

/*
int main() {

	std::string str1 = "alper";
	const char* cstr2 = "aa";

	int x = str1.compare("cstr2");

	std::cout << "String1 = " << str1 << std::endl << "String2 = " << cstr2 << std::endl;
	control_str(x);
}
*/





// c-string (3)		int compare (size_t pos, size_t len, const char* s) const;

/*
int main() {

	std::string str1 = "*xperxmv";
	const char* cstr2 = "per";

	int x = str1.compare(2, 3, cstr2);

	std::cout << "String1 = " << str1 << std::endl << "String2 = " << cstr2 << std::endl;
	control_str(x);

	// str1'in 2.index'inden itibaren (p) 3 uzunluk (per) cstr2 ile kiyaslar.
}
*/





// buffer (4)		int compare (size_t pos, size_t len, const char* s, size_t n) const;

/*
int main() {

	std::string str1 = "*akopPERv";
	const char* cstr2 = "*yPERsr*z";

	int x = str1.compare(5, 3, cstr2, 2, 3);
	std::cout << "String1 = " << str1 << std::endl << "String2 = " << cstr2 << std::endl;
	control_str(x);

	// str1'in 5.index'inden itibaren (P) 3 uzunluk (PER).
	// cstr2'nin 2.index'inden itibaren (P) 3 uzunluk (PER) kiyaslar.
}
*/
