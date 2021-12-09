#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// resize -->>

	void resize (size_t n);				 n = string'in ulasmasi istenen size.String'in sonuna kendisi fark kadar "\0" null karakter ekler.
	void resize (size_t n, char c);		 c = string'in sonuna fark kadar char turunden c karakteri eklenebilir.

	// Bu fonksiyon string'in size'ini arttirir.



	// max_size -->>

	size_t max_size() const noexcept;

	// Bu fonksiyon bir string'in alabilecegi max size'i  max karakter sayisini verir.Ancak kesin olarak o kadar uzunlukta bir string
	// olusturulamaz.Cunku heap'den alinan string'lerin size'i dinamik oldugu icin o an heap'de yeterli alan yoksa string olusturulamaz.
	// Ancak yeterli alan olsa bile tek parca halinde olmalidir.Eger yeterli alan oldugu halde tek parca degilse yine olusturulamaz.
*/


void display(const std::string& str) {
	std::cout << "String : " << str << std::endl << "Size :" << str.size() << std::endl << "Capacity :" << str.capacity() << std::endl;
}




// *********************************RESIZE*********************************


/*
int main() {

	std::string str = "Alper Yesiltas Merhaba";


	std::cout << std::endl << "Before resize ==>> " << std::endl;
	display(str);

	std::cout << std::endl << "After resize ==>> " << std::endl;
	str.resize(30);		// Toplam size 30 ayarlandi
	display(str);

	// size'i 22 den 30'a cikardi (sistemden sisteme degisIklik gosterebilir)
	// ve 22 size'li string'in sonuna 8 tane "\0" ekledi.
}
*/





/*
int main() {

	std::string str = "Alper Yesiltas Merhaba";


	std::cout << std::endl << "Before resize ==>> " << std::endl;
	display(str);

	std::cout << std::endl << "After resize ==>> " << std::endl;
	str.resize(30, '-');		// Toplam size 30 ayarlandi
	display(str);

	// size'i 22 den 30'a cikardi (sistemden sisteme degisIklik gosterebilir)
	// ve 22 size'li string'in sonuna 8 tane "-" ekledi.
}
*/





// *********************************MAX_SIZE*********************************


/*
int main() {

	std::string str;
	std::cout << "Max size :" << str.max_size() << std::endl;

	// Eger heap'de tek parca halinde bu kadar byte varsa
	// bu uzunlukta bir string olusturulabilir.
}
*/
	
