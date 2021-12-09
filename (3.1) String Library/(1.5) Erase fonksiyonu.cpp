#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	// Erase fonksiyonu string'in bir karakterini veya tamamini veya bir yerden bir yere kadar olan yeri silmeye islemi yapar.

	====>> sequence (1)		string& erase (size_t pos = 0, size_t len = npos);		Her turlu silme islemi yapilabilir.


	====>> character (2)		iterator erase (const_iterator p);						Sadece iterator olarak aldigi karakteri siler


	====>> range (3)			iterator erase (const_iterator first, const_iterator last);		iterator alarak aradaki string'i siler.
*/


void display(const std::string& x) {
	std::cout << "string : " << x << std::endl << "size :" << x.size() << std::endl << "length : " << x.length() << std::endl << "capacity : " << x.capacity() << std::endl;
}


/*
// --->>>	sequence (1)		string& erase (size_t pos = 0, size_t len = npos);	

int main() {

	std::string str = "0123456789";

	
	// str.erase();			// Default olarak tum string'i siler.
	// display(str);
	

	// *****************************************************************************************************
	

	// str.erase(5);		// 5. index ve sonrasini siler default olarak npos,string bitene kadar verilmis.
	// display(str);
	

	// *****************************************************************************************************


	// str.erase(1,5);		// 1.index itibariyle 5. index'e kadar olan string'i sil.
	// display(str);
}
*/






/*
// --->>>	character (2)		iterator erase (const_iterator p);					

int main() {

	std::string str = "0123456789";

	// str.erase(str.begin());			// Sadece str'nin ilk karakterini siler.
	// display(str);


	// **********************************************************************


	// str.erase(str.end()-4);				// Sadece end()-4 karakterini siler.
	// display(str);
}
*/






/*
// --->>>	range (3)			iterator erase (const_iterator first, const_iterator last);	

int main() {

	std::string str = "0123456789";

	str.erase(str.begin() + 1, str.end() - 4);		// Bu aradaki elemanlari siler.
	display(str);
}
*/
