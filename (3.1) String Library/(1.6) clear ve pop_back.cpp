#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	void clear() noexcept;		String'in tamamini siler.

	void pop_back();			String'in son elemanini siler.
*/


void display(const std::string& x) {
	std::cout << "string : " << x << std::endl << "size : " << x.size() << std::endl << "length : " << x.length() << std::endl << "capacity : " << x.capacity() << std::endl;
	std::cout << "*********************" << std::endl;
}




/*
// clear() -->>			void clear() noexcept;

int main() {

	std::string str = "0123456789";

	display(str);
	str.clear();		// Erase ile ayni isi yapar.
	display(str);
}
*/






/*
// pop_back() -->>		void pop_back();

int main() {

	std::string str = "0123456789";
	
	// display(str);
	// str.pop_back();		// String'in son elemanini siler.
	// display(str);
	

	// *********************************************************


	// display(str);

	// for (int i = 0; i < (str.size() - 4); i++) {
	// 	str.pop_back();		// String'in son elemanini siler.
	// 	display(str);
	// }
}
*/
