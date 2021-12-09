#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	Bir yazinin basindan ortasindan sonundan ekleme yapmak icin kullanilir.
	Ancak sondan ekleme islemi icin append ve push_back fonksiyonlari onerilir.

	insert -->>

	string (1)				string& insert (size_t pos, const string& str);
	substring (2)			string& insert (size_t pos, const string& str, size_t subpos, size_t sublen = npos);
	c-string (3)			string& insert (size_t pos, const char* s);
	buffer (4)				string& insert (size_t pos, const char* s, size_t n);
	fill (5)				string& insert (size_t pos,   size_t n, char c);
	fiil (6)				iterator insert (const_iterator p, size_t n, char c);
	single character (7)	iterator insert (const_iterator p, char c);
	range (8)				template <class InputIterator>	iterator insert (iterator p, InputIterator first, InputIterator last);
	initializer list (9)	string& insert (const_iterator p, initializer_list<char> il);
*/


void display(const std::string& str) {
	std::cout << "String :" << str << std::endl << "Size :" << str.size() << std::endl << "Length :" << str.length() << std::endl << "Capacity :" << str.capacity() << std::endl;
	std::cout << "**************************" << std::endl;
}



// string (1)				string& insert (size_t pos, const string& str);

/*
int main() {

	std::string str1 = "0123456789";

	// std::string str2 = "alper";
	// display(str1);
	// str1.insert(0, str2);		// pos = 0 oldugu icin en bastan ekleme yapar.
	// display(str1);


	// ***************************************************************************


	// std::string str2 = "alper";
	// display(str1);
	// str1.insert(5, str2);	// pos = 5 oldugu icin 4. indexi ile 5. indexi arasina ekleme yapar.
	// display(str1);
}
*/





// substring(2)			string& insert(size_t pos, const string & str, size_t subpos, size_t sublen = npos);

/*
int main() {

	std::string str1 = "0123456789";

	// std::string str2 = "alper";
	// display(str1);
	// str1.insert(0, str2, 1, 4);		// pos = 0 oldugu icin en basa ekleme yapar.str2'nin 1.indexinden 4.indexine
	// display(str1);					// kadar olan araligi alir ve str1'e ekler.


	// ********************************************************************************************************************************************


	// std::string str2 = "alper";
	// display(str1);
	// str1.insert(4, str2, 1, 4);			// pos = 4 oldugu icin str1'in 3. indexi ile 4.indexi arasina ekleme yapar.str2'nin 1.indexinden
	// display(str1);						// 4.indexine kadar olan araligi alir ve str1'e ekler.
}
*/






// c-string (3)			string& insert (size_t pos, const char* s);

/*
int main() {

	std::string str1 = "0123456789";

	// display(str1);
	// str1.insert(0, "alper");	// pos = 0 oldugu icin en bastan ekleme yapar.
	// display(str1);


	// ******************************************************************************


	// display(str1);
	// str1.insert(5, "alper");	// pos = 5 oldugu icin 4. index ile 5. index arasina ekleme yapar.
	// display(str1);
}
*/





//	buffer (4)				string& insert (size_t pos, const char* s, size_t n);

/*
int main() {

	std::string str1 = "0123456789";

	// display(str1);
	// str1.insert(0, "alper", 2);		// pos = 0 oldugu icin en bastan ekleme yapar."alper"'in
	// display(str1);					// ilk 2 karakterini en bastan str1'e ekler.


	// ******************************************************************************************************************


	// display(str1);
	// str1.insert(1, "alper", 3);			// pos = 1 oldugu icn str1'in 0. indexi ile 1. indexi arasina ekleme yapar."alper"'in
	// display(str1);						// ilk 3 karakterini ekler.
}
*/





// fill (5)				string& insert (size_t pos,   size_t n, char c);

/*
int main() {

	std::string str1 = "0123456789";

	display(str1);
	str1.insert(0, 5, 'a');		// pos = 0 oldugu icin en bastan ekleme yapar.n tane 'a' yi
	display(str1);				// str1'in basina ekler.
}
*/





// fiil(6)				iterator insert(const_iterator p, size_t n, char c);

/*
int main() {

	std::string str1 = "0123456789";

	// display(str1);
	// str1.insert(str1.begin(), 5, 'a');		// pos = str1.begin() en bastan ekleme yapar.
	// display(str1);							// n tane 'a' yi str1'in en basina ekler.


	// **********************************************************************************************************************


	// display(str1);
	// str1.insert(str1.begin() + 2, 5, 'a');		// pos = str1.begin()+2 str1'in 1.index'i ile 2.index'i arasina ekleme yapar.
	// display(str1);								// n tane 'a' yi str1'e ekler.
}
*/




// single character (7)		iterator insert (const_iterator p, char c);

/*
int main() {

	std::string str1 = "0123456789";

	// display(str1);
	// str1.insert(str1.begin(), 'a');			// pos = str1.begin() en bastan ekleme yapar.
	// display(str1);							// 'a' yi str1'in en basina ekler.


	// **********************************************************************************************************


	// display(str1);
	// str1.insert(str1.begin() + 4, 'a');			// pos = str1.begin()+2 str1'in 3.index'i ie 4.index'i arasina
	// display(str1);								// ekleme yapar.'a' yi str1'e ekler.
}
*/




// range (8)				template <class InputIterator>	iterator insert (iterator p, InputIterator first, InputIterator last);

/*
int main() {

	std::string str1 = "0123456789";

	// display(str1);														// 1.parametre str1'in neresine ekleme yapilacagidir ve str1.begin() en basina ekler.
	// str1.insert(str1.begin(), str1.begin(), str1.begin() + 2);			// Digerleri ise aralik belirtir ve str1.begin() 0.index'den itibaren str1.begin()+2
	// display(str1);														// 2.index'e kadar olan string'i 1.parametrede belirtilen yere ekleme yapar.


	// ********************************************************************************************************************************************************************************************


	// display(str1);															// 1.parametre str1'in neresine ekleme yapilacagidir ve str1.begin()+4  str1'in 3.index'i ile 4.index'i arasina ekler.
	// str1.insert(str1.begin() + 4, str1.begin(), str1.begin() + 2);			// Digerleri ise aralik belirtir ve str1.begin() 0.index'den itibaren str1.begin()+2
	// display(str1);															// 2.index'e kadar olan string'i 1.parametrede belirtilen yere ekleme yapar.
}
*/





// initializer list (9)		string& insert (const_iterator p, initializer_list<char> il);

/*
int main() {

	std::string str1 = "0123456789";

	// display(str1);
	// str1.insert(str1.begin(), { 'a' ,'l','p','e','r' });			// 1.parametre str1'in neresine ekleme yapilacagidir ve str1.begin() en basina ekler.
	// display(str1);


	// ****************************************************************************************************************************************************************


	// display(str1);
	// str1.insert(str1.begin() + 2, { 'a' ,'l','p','e','r' });		// 1.parametre str1'in neresine ekleme yapilacagidir ve str1.begin() +2
	// display(str1);													// str1'in 1.index'i ile 2.index'i arasina ekleme.
}
*/
