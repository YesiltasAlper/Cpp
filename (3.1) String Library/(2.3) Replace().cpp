#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// replace -->> Bu fonksiyon insert gibi araya string ekler ancak insert fonksiyonunda ekleme yapilan string oldugu gibi kalirken replace fonksiyonunda yok edilerek ekleme yapilir.

	string (1)		string& replace (size_t pos,        size_t len,        const string& str);
					string& replace (const_iterator i1, const_iterator i2, const string& str);

	substring (2)	string& replace (size_t pos,size_t len,const string& str,size_t subpos, size_t sublen = npos);

	c-string (3)	string& replace (size_t pos,        size_t len,        const char* s);
					string& replace (const_iterator i1, const_iterator i2, const char* s);

	buffer (4)		string& replace (size_t pos,        size_t len,        const char* s, size_t n);
					string& replace (const_iterator i1, const_iterator i2, const char* s, size_t n);

	fill (5)		string& replace (size_t pos,        size_t len,        size_t n, char c);
					string& replace (const_iterator i1, const_iterator i2, size_t n, char c);

	range (6)		template <class InputIterator>	string& replace (const_iterator i1, const_iterator i2,InputIterator first, InputIterator last);

	initializer list (7)	string& replace (const_iterator i1, const_iterator i2, initializer_list<char> il);
*/



void display(const std::string& str) {
	std::cout << "String :" << str << std::endl << "Size :" << str.size() << std::endl << "Length :" << str.length() << std::endl << "Capacity :" << str.capacity() << std::endl;
	std::cout << "**************************" << std::endl;
}



//	string (1)		string& replace (size_t pos,        size_t len,        const string& str);

/*
int main() {

	std::string str1 = "0123456789";

	
	// std::string str2 = "alper";
	// display(str1);
	// str1.replace(0, 2, str2);		// pos = 0 str1'e en basindan ekleme yapar.len = 2
	// display(str1);					// str1'in en bastan 2 karakteri yok edilir ve en bastan ekleme yapilir.
	

	// ******************************************************************************************************

	
	// std::string str2 = "alper";
	// display(str1);
	// str1.replace(3, 4, str2);		// pos = 3  str1'e 3.index'den itibaren ekleme yapilir.len = 4
	// display(str1);					// str1'in 3.index'inden itibaren 4 karakterini edilir ve ekleme yapilir.
}
*/





// string (1)	string& replace (const_iterator i1, const_iterator i2, const string& str);

/*
int main() {

	std::string str1 = "0123456789";


	// std::string str2 = "alper";
	// display(str1);
	// str1.replace(str1.begin(), str1.begin() + 2, str2);		// pos = str1.begin()  str1'e en basindan ekleme yapilir.len = str1.begin()+2
	// display(str1);											// str1'in en basindan 2 karakteri yok edilir ve en bastan ekleme yapilir.


	// ******************************************************************************************************

	
	// std::string str2 = "alper";
	// display(str1);
	// str1.replace(str1.begin() + 3, str1.end() - 3, str2);	// pos = str1.begin()+3  str1'e 3.index'den itibaren ekleme yapilir.len = str1.end()-3 str1'in son index'inden
	// display(str1);											// 3 index geriye gidilir (6.index) ve aradaki karakterler yok edilir ve (3-4-5-6) ekleme yapilir.
}
*/





// substring (2)	string& replace (size_t pos,size_t len,const string& str,size_t subpos, size_t sublen = npos);

/*
int main() {

	std::string str1 = "0123456789";


	std::string str2 = "alper";
	display(str1);
	str1.replace(2, 4, str2, 1, 3);		// pos = 2  str1'e 2.index'den itibaren ekleme yapilir.len = 4 str1'in 4 karakteri yok edilir.
	display(str1);						// subpos = 1 ve sublen = 3  str2'nin 1.index'inden itibaren 3 uzunluktaki karakteri alinir. (lpe).
}
*/


	


// c-string (3)	string& replace (size_t pos,        size_t len,        const char* s);

/*
int main() {

	std::string str1 = "0123456789";


	// display(str1);
	// str1.replace(0, 2, "alper");		// pos = 0 str1'e en basindan ekleme yapilir.len = 2
	// display(str1);					// str1'in en basinda 2 karakteri yok edilir ve en bastan ekleme yapilir.


	// **********************************************************************************************************

	
	// display(str1);
	// str1.replace(3, 4, "alper");		// pos = 3 str1'e 3.index'den itibaren ekleme yapilir.len = 4
	// display(str1);					// str1'in 3.index'inden itibaren 4 karakteri yok edilierek ekleme yapilir.

}
*/





// c-string (3)	string& replace (const_iterator i1, const_iterator i2, const char* s);

/*
int main() {

	std::string str1 = "0123456789";


	// display(str1);
	// str1.replace(str1.begin(), str1.begin() + 2, "alper");		// pos = str1.begin() str1'e en basindan ekleme yapilir.len = str1.begin()+2
	// display(str1);												// str1'in en bastan 2 karakteri yok edilir ve en bastan ekleme yapilir.


	// **********************************************************************************************************


	// display(str1);
	// str1.replace(str1.begin() + 3, str1.end() - 3, "alper");		// pos = str1.begin()+3 str1'e 3.index'den itibaren ekleme yapilir.len = str1.end()-3 str1'in son
	// display(str1);												// index'inden 3 index geriye gidilir (6.index) ve aradaki karakterler yok edilerek (3-4-5-6) ekleme yapilir.
}
*/

	



// buffer (4)		string& replace (size_t pos,        size_t len,        const char* s, size_t n);

/*
int main() {

	std::string str1 = "0123456789";


	// display(str1);
	// str1.replace(0, 2, "alper", 3);		// pos = 0  str1'e en basindan ekleme yapilir.len = 2  str1'in basindan itibaren 2 karakteri
	// display(str1);						// yok edilerek ekleme yapilir.n = 3 "alper"'in bastan itibaren 3 karakteri alinarak pos'a (basa) eklenir.


	// **********************************************************************************************************

	
	// display(str1);
	// str1.replace(3, 4, "alper", 2);		// pos = 3 str1'e 3.index'den itibaren ekleme yapilir.len = 4 str1'in 3.index'inden itibaren 4 karakteri
	// display(str1);						// yok edilerek ekleme yapilir.n = 2 "alper"'in en bastan itibaren 2 karakteri alinarak pos'a eklenir.
}
*/


	


// buffer (4)	string& replace (const_iterator i1, const_iterator i2, const char* s, size_t n);

/*
int main() {

	std::string str1 = "0123456789";


	// display(str1);
	// str1.replace(str1.begin(), str1.begin() + 2, "alper", 3);	// pos = str1.begin()  str1'e en basindan ekleme yapilir.len = str1.begin()+2 str1'in basindan itibaren 2 karakteri
	// display(str1);												// yok edilerek ekleme yapilir.n = 3 "alper"'in en bastan itibaren 3 karakteri alinarak pos'a eklenir.


	// **********************************************************************************************************


	// display(str1);
	// str1.replace(str1.begin() + 3, str1.end() -6, "alper", 2);	// pos = str1.begin()+3  str1'e 3.index'den itibaren ekleme yapilir.len = str1.end() -6 str1'in son index'inden 6 index geri gidilir
	// display(str1);												// ve aradaki kisim yok edilerek ekleme yapilir.n = 2 "alper"'in bastan itibaren 2 karakteri alinarak eklenir.
}
*/
	




// fill (5)		string& replace (size_t pos,        size_t len,        size_t n, char c);

/*
int main() {

	std::string str1 = "0123456789";


	// display(str1);
	// str1.replace(0, 2, 3, 'x');			// pos = 0  str1'e en basindan ekleme yapilir.len = 2 str1'in basindan itibaren 2 karakteri
	// display(str1);						// yok edilerek ekleme yapilir.n = 3 'x' karakterinden 3 tane eklenir.


	// **********************************************************************************************************

	
	// display(str1);
	// str1.replace(1, 3, 7, 'x');			// pos = 1 str1'e 1.index'den itibaren ekleme yapilir.len = 3 str1'in 1.index'inden itibaren 3 karakteri
	// display(str1);						// yok edilerek ekleme yapilir.n = 7 'x' karakterinden 7 tane eklenir.
}
*/
	




//	fill (5)	string& replace (const_iterator i1, const_iterator i2, size_t n, char c);

/*
int main() {

	std::string str1 = "0123456789";


	// display(str1);
	// str1.replace(str1.begin(), str1.begin() + 2, 3, 'x');			// pos = str1.begin() str1'e en basindan ekleme yapilir.len = str1.begin()+2  str1'in basindan itibaren 2 karakteri
	// display(str1);													// yok edilerek ekleme yapilir.n = 3 'x' karakterinden 3 tane eklenir.


	// **********************************************************************************************************
	

	// display(str1);
	// str1.replace(str1.begin() + 1, str1.begin() + 3, 7, 'x');		// pos = str1.begin()+1 str1'e 1.index'den itibaren ekleme yapilir.len = str1.begin()+3  str1'in 1.index'inden itibaren
	// display(str1);													// 2 karakteri yok edilerek (str1.begin()+3 - str1.begin()+1) ekleme yapilir.n = 7 'x' karakterinden 7 tane eklenir.
}
*/





//	range(6)		template <class InputIterator>	string& replace(const_iterator i1, const_iterator i2, InputIterator first, InputIterator last);

/*
int main() {

	std::string str1 = "0123456789";


	// std::string str2 = "alper";
	// display(str1);
	// str1.replace(str1.begin(), str1.begin() + 2, str2.begin() + 1, str2.begin() + 4);	// pos = str1.begin()  str1'e en basindan ekleme yapilir.len = str1.begin()+2  str1'in basindan itibaren 2 karakteri yok edilir.
	// display(str1);																		// first = str2.begin()+1 ve last = str2.begin()+4 str2'nin 1.index'inden itibaren str2'nin 4.index'ine kadar aradaki karakterler alinir ve eklenir.


	// **********************************************************************************************************

	
	// std::string str2 = "alper";
	// display(str1);
	// str1.replace(str1.begin() + 3, str1.begin() + 7, str2.begin() + 2, str2.begin() + 5);// pos = str1.begin()+3 str1'e 3. index'inden itibaren ekleme yapilir.len = str1.begin()+7 str1'in 3.index'inden itibaren 7.index'ine kadar yok edilir.
	// display(str1);																		// first = str2.begin()+2 ve last = str2.begin()+5 str2'nin 2.index'inden itibaren str2'nin 5.index'ine kadar (son) aradaki karakterler alinir ve eklenir.
}
*/





//	initializer list (7)	string& replace (const_iterator i1, const_iterator i2, initializer_list<char> il);

/*
int main() {

	std::string str1 = "0123456789";


	display(str1);
	str1.replace(str1.begin() + 3, str1.begin() + 8, { 'a','l','p','e','r' });		// pos = str1.begin() + 3  str1'e 3. index'inden itibaren ekleme yapilir.len = str1.begin() + 8
	display(str1);																	// str1'in 3.index'inden itibaren 8.index'ine kadar yok edilir ve eklenir.
}
*/
