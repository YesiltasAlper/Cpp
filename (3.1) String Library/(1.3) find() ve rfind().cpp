#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*

	// --->>> find fonksiyonu

	string	  (1)		size_t find (const string& str, size_t pos = 0) const noexcept;
	c-string  (2)		size_t find (const char* s, size_t pos = 0) const;
	buffer    (3)		size_t find (const char* s, size_t pos, size_type n) const;
	character (4)		size_t find (char c, size_t pos = 0) const noexcept;

	// Bunlar find fonksiyonunun overload'laridir.Bir string'in icinde bir sey aramak icin kullaniliyor.

	// Eger arama basarili olursa eslesen ilk karakterin pozisyonunu dondurur.Basarisizsa string::npos dondurur.
	
	// NOT ==>> rfind() fonksiyonu find() fonksiyonu ile ayni isi yapar.
	// Aralarindaki tek fark rfind() fonksiyonu tersten arama yapar.
*/


void control(size_t index) {

	if (index != std::string::npos)
		std::cout << "Bulundu ve index : " << index;
	else
		std::cout << "Bulunamadi...";
}




// ----->>>	string	  (1)		size_t find (const string& str, size_t pos = 0) const noexcept;
// string'in icerisinde string arar.	pos default olarak "0" gecilmistir aramaya ilk karakterden itibaren baslar.

/*
int main() {

	std::string str = "cpp is the most beautiful language in the world.";

	
	// std::string str2 = "cpp";
	// index = str.find(str2);
	// control(index);

	
	// *******************************************

	
	// std::string str2 = "cpp";
	// size_t index = str.rfind(str2);
	// control(index);
	

	// *******************************************

	
	// std::string str3 = "is";
	// size_t index = str.find(str3, 15);		// "is" string'ini str string'inin icinde 15.index itibariyle arar.
	// control(index);
	

	// *******************************************


	// std::string str3 = "is";
	// size_t index = str.find(str3, 4);		// "is" string'ini str string'inin icinde 3.index itibariyle arar.
	// control(index);


	// *******************************************
	

	// std::string str4 = "hate";
	// size_t index = str.find(str4);
	// control(index);
}
*/






// ----->>>		c-string  (2)		size_t find (const char* s, size_t pos = 0) const;
// string'in icerisinde const char* turden karakter arar.	pos default olarak "0" gecilmistir aramaya ilk karakterden itibaren baslar.

/*
int main() {

	std::string str = "cpp is the most beautiful language in the world.";

	// size_t index = str.find("alper");
	// control(index);


	// *******************************************

	
	// size_t index = str.find("the",2);	// char turden "cpp" yi str string'i icinde 2.karakterden itibaren ara.
	// control(index);
}
*/






// ---->>>		buffer    (3)		size_t find (const char* s, size_t pos, size_type n) const;
// String'in icinde const char* turunden yazi arar.	pos ise string turundeki yazida hangi index itibariyle aranacagini tutar.
// n ise girilen const char* yazisindan ilk n karakterini string turundeki yazida ara demektir.

/*
int main() {
	
	std::string str = "cpp is the most beautiful language in the world.";

	// size_t index = str.find("most common", 5, 3);	// str string'inde 5.karakterden itibaren "most common" daki ilk 3 karakteri "mos" ara.
	// control(index);
	

	// ************************************************************************************************************************************************

	
	// size_t index = str.find("most beautiful",0,8);	// str string'inin baslangicindan itibaren "most beautiful" daki ilk 8 karakteri "most bea" ara.
	// control(index);
	

	// ************************************************************************************************************************************************

	
	// size_t index = str.find("most beautiful", 0, 4);	// str string'inin baslangicindan itibaren "most beautiful" daki ilk 4 karakteri "most" ara.
	// control(index);
	

	// ************************************************************************************************************************************************

	
	// size_t index = str.find("most beautiful", 21, 4);	// str string'inin 21.karakterinden itibaren "most beautiful" daki ilk 4 karakteri "most" ara.
	// control(index);
}
*/





	
// ---->>>		character (4)		size_t find (char c, size_t pos = 0) const noexcept;
// String'in icinde char turunden bir karakter arar.pos ise string turundeki yazida hangi index itibariyle aranacagini tutar.

/*
int main() {

	std::string str = "cpp is the most beautiful language in the world.";

	// size_t index = str.find('a');			// str string'inin baslangicindan itibaren str string'inde 'a' karakterini ara.
	// control(index);
	

	// ************************************************************************************************************************

	
	// size_t index = str.find('X');		// str string'inin baslangicindan itibaren str string'inde 'X' karakterini ara.
	// control(index);
	

	// ************************************************************************************************************************

	
	// size_t index = str.find('a',25);		// str string'inin 25.karakterinden itibaren str string'inde 'a' karakterini ara.
	// control(index);
}
*/
