#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
	default (1)				string();																				Constructs an empty string, with a length of zero characters.
	copy (2)				string (const string& str);																Constructs a copy of str.

	substring (3)			string (const string& str, size_t pos, size_t len = npos);								Copies the portion of str that begins at the character position pos and spans len characters
																													(or until the end of str, if either str is too short or if len is string::npos).

	from c-string (4)		string (const char* s);																	Copies the null-terminated character sequence (C-string) pointed by s.
	from buffer (5)			string (const char* s, size_t n);														Copies the first n characters from the array of characters pointed by s.
	fill (6)				string (size_t n, char c);																Fills the string with n consecutive copies of character c.
	range (7)				template <class InputIterator> string  (InputIterator first, InputIterator last);		Copies the sequence of characters in the range [first,last), in the same order.
	initializer list (8)	string (initializer_list<char> il);														Copies each of the characters in il, in the same order.
	move (9)				string (string&& str) noexcept;															Acquires the contents of str.str is left in an unspecified but valid state.
*/



/*
// --->>> DEFAULT CONSTRUCTOR (1)		string();

int main() {

	std::string str;		// Default constructor

	std::cout << "string : " << str << std::endl << "size : " << str.size() << std::endl << "length : " << str.length() << std::endl << "capacity : " << str.capacity() << std::endl;
}
*/





/*
// --->>> FROM C-STRING (4)		string (const char* s);

int main() {

	// Sonunda Null karakteri de olan stringlere c-string denir.C++'da String turden nesnelerinin sonunda null karakter olacak diye bir sart yoktur.
	// c-string'i string'e cevirir.

	
	// std::string str = "alper";		// Converting constructor from c-string

	// std::cout << "string : " << str << std::endl << "size : " << str.size() << std::endl << "length : " << str.length() << std::endl << "capacity : " << str.capacity() << std::endl;
	

	// *******************************************************************************************************************************************************************************

	
	// char buf[] = "alper";
	
	// std::string str1{ buf };		// Converting constructor from c-string
	// std::cout << "string : " << str << std::endl << "size : " << str.size() << std::endl << "length : " << str.length() << std::endl << "capacity : " << str.capacity() << std::endl;
}
*/





/*
// --->>> COPY CONSTRUCTOR	(2)		string (const string& str);

int main() {

	std::string str1 = "alper";		// Converting constructor from c-string
	std::string str2 = str1;		// Copy constructor

	std::cout << "string : " << str1 << std::endl << "size : " << str1.size() << std::endl << "length : " << str1.length() << std::endl << "capacity : " << str1.capacity() << std::endl;
	std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;

	// str2 icin copy constructor cagrilir.
}
*/





/*
// --->>> SUBSTRING CONSTRUCTOR (3)		string (const string& str, size_t pos, size_t len = npos);

int main() {

	// Bir string'den yeni bir string olusturulur.

	
	// std::string str1 = "alper yesiltas";	// Converting constructor from c-string
	// std::string str2{ str1,6 };				// Substring constructor
	// std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;
	

	// str1'in 6.karakterinden baslar ve len'i npos'a kadar (str1'in sonuna kadar) str2'ye atar.
	// len degeri default olarak npos (string'in sonuna kadar)


	// *******************************************************************************************************************************************************************************

	
	// std::string str1 = "alper yesiltas";	// Converting constructor from c-string
	// std::string str2{ str1,6,4 };			// Substring constructor
	// std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;
	

	// str1'in 6.karakterinden baslar ve 4 adim ilerler bu string'i str2'ye atar.
}
*/





/*
// --->>> FROM BUFFER CONSTRUCTOR (5)			string (const char* s, size_t n);

int main() {

	// Bir string'den yeni bir string olusturulur.Ancak istenilen yerden baslatilamaz sadece en bastan baslatilabilir.

	char buf[] = "alper yesiltas";			// From buffer'in parametresi const char*

	std::string str2{ buf,4 };				// From buffer constructor

	std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;

	// buf'in basindan n kadar ilerleyerek (4) olusturulan yaziyi str2'ye atar.
}
*/





/*
// --->>> FILL CONSTRUCTOR (6)		string (size_t n, char c);

int main() {

	// 2.parametreye gecilen char turunden karakterden n tane elde edilir.

	std::string str2(16, 'a');		// Fill constructor

	std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;

	// Eger std::string str2{16,'a'}; seklinde yazilirsa bu syntax initializer list syntax'i oldugu icin
	// 8.constructor'a cagri yapilir ve duzgun calismaz.
}
*/





/*
// --->>> RANGE CONSTRUCTOR	(7)		template <class InputIterator> string  (InputIterator first, InputIterator last);

int main() {

	// Iteratorler pointer olmayan ama pointer gibi davranan nesnedir.


	// std::string str1 = "alper yesiltas";		// Converting constructor from c-string
	// std::string str2{ str1.begin() + 7,str1.begin() + 11 };		// Range constructor
	// std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;


	// str1.begin()+7'den str1.begin()+11'e kadar aradaki string'i alir.


	// *******************************************************************************************************************************************************************************


	// std::string str3 = "alper";					// Converting constructor from c-string
	// std::string str4{ str3.begin() + 2,str3.end() };			// Range constructor
	// std::cout << "string : " << str4 << std::endl << "size : " << str4.size() << std::endl << "length : " << str4.length() << std::endl << "capacity : " << str4.capacity() << std::endl;


	// str3.begin()+2'den str3.end'e kadar aradaki string'i alir.
}
*/





/*
// --->>> INITIALIZER LIST (8)		string (initializer_list<char> il);

int main() {

	std::string str2{ 'a','b','c','d' };		// Initializer list

	std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;
}
*/





/*
// --->>> MOVE CONSTRUCTOR (9)		string (string&& str) noexcept;

int main() {

	std::string str = "alper yesiltas";		// Converting constructor from c-string

	std::string str2{ std::move(str) };		// MOVE CONSTRUCTOR

	std::cout << "string : " << str2 << std::endl << "size : " << str2.size() << std::endl << "length : " << str2.length() << std::endl << "capacity : " << str2.capacity() << std::endl;

	// 211.satirdan sonra str kullanilirsa undefined behaviour olur.
	// Cunku str'nin kaynaklari str2'ye tasindiktan sonra str yok edilir.
}
*/





/*
// --->>> DESTRUCTOR

int main() {

	std::string str = "alper yesiltas";		// Converting constructor from c-string

	std::string str2{ std::move(str) };		// MOVE CONSTRUCTOR

	// Burada 231. satir bitince ~str(); destructor'i cagrilir ve main() sonlaninca da ~str2(); destructor cagrilir.
}
*/
