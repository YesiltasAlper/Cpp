#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	"find_first_of" - "find_last_of" - "find_first_not_of" - "find_last_not_of" fonksiyonlari bir karakter grubu aramak icin kullanilir.

	find_first_of		-->> Aranacak string'in en basindan baslayarak arama yapar ve bulursa buldugu ilk yerin index numarasini dondurur bulamazsa npos dondurur.
	find_last_of		-->> Aranacak string'in en sonundan baslayarak arama yapar ve bulursa buldugu ilk yerin index numarasini dondurur bulamazsa npos dondurur.
	find_first_not_of   -->> Aranacak string'in en basindan baslayarak arama yapar ve bulamadigi ilk yerin index numarasini dondurur bulursa npos dondurur.
	find_last_not_of    -->> Aranacak string'in en sonundan baslayarak arama yapar ve bulamadigi ilk yerin index numarasini dondurur bulursa npos dondurur.


	-->> find_first_of

	string (1)				size_t find_first_of (const string& str, size_t pos = 0) const noexcept;
	c-string (2)			size_t find_first_of (const char* s, size_t pos = 0) const;
	buffer (3)				size_t find_first_of (const char* s, size_t pos, size_t n) const;
	character (4)			size_t find_first_of (char c, size_t pos = 0) const noexcept;


	-->> find_last_of

	string (1)				size_t find_last_of (const string& str, size_t pos = npos) const noexcept;
	c-string (2)			size_t find_last_of (const char* s, size_t pos = npos) const;
	buffer (3)				size_t find_last_of (const char* s, size_t pos, size_t n) const;
	character (4)			size_t find_last_of (char c, size_t pos = npos) const noexcept;


	-->> find_first_not_of

	string (1)				size_t find_first_not_of (const string& str, size_t pos = 0) const noexcept;
	c-string (2)			size_t find_first_not_of (const char* s, size_t pos = 0) const;
	buffer (3)				size_t find_first_not_of (const char* s, size_t pos, size_t n) const;
	character (4)			size_t find_first_not_of (char c, size_t pos = 0) const noexcept;


	-->> find_last_not_of

	string (1)				size_t find_last_not_of (const string& str, size_t pos = npos) const noexcept;
	c-string (2)			size_t find_last_not_of (const char* s, size_t pos = npos) const;
	buffer (3)				size_t find_last_not_of (const char* s, size_t pos, size_t n) const;
	character (4)			size_t find_last_not_of (char c, size_t pos = npos) const noexcept;
*/


void control_of(size_t index) {

	std::cout << "of function..." << std::endl;

	if (index != std::string::npos)
		std::cout << "Bulundu ve buldugu yeri ilk index : " << index;
	else
		std::cout << "Bulunamadi...";
}


void control_not_of(size_t index) {

	std::cout << "not of function..." << std::endl;

	if (index != std::string::npos)
		std::cout << "Bulunamadi ve bulamadigi ilk yerin index : " << index;
	else
		std::cout << "Bulundu...";
}




// Overload string (1) ==>>

/*
int main() {

	std::string str = "c++ cok guzel bir dil.Hergun calisiyorum.Umarim en yakin zamanda bitecek";
	std::string str2 = "xyz";

	
	// size_t index_of = str.find_first_of(str2);
	// control_of(index_of);
	

	// ***************************************************
	

	// size_t index_of = str.find_last_of(str2);
	// control_of(index_of);
	

	// ***************************************************

	
	// size_t index_not_of = str.find_first_not_of(str2);
	// control_not_of(index_not_of);
	

	// ***************************************************

	
	// size_t index_not_of = str.find_last_not_of(str2);
	// control_not_of(index_not_of);
}
*/







// Overload c-string (2) ==>>

/*
int main() {
	
	std::string str = "c++ cok guzel bir dil.Hergun calisiyorum.Umarim en yakin zamanda bitecek";

	// size_t index_of = str.find_first_of("ab");
	// control_of(index_of);


	// ***************************************************


	// size_t index_of = str.find_first_of("!>");
	// control_of(index_of);
	

	// ***************************************************

	
	// size_t index_of = str.find_last_of("ab");
	// control_of(index_of);
	

	// ***************************************************
	

	// size_t index_not_of = str.find_first_not_of("c+o ");
	// control_not_of(index_not_of);
	

	// ***************************************************

	
	// size_t index_not_of = str.find_last_not_of("ekc");
	// control_not_of(index_not_of);
}
*/
	
// Diger overload'lar da benzer sekildedir.
