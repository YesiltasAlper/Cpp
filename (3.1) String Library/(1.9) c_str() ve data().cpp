#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	const char* c_str() const noexcept;		-->		Prototip Bildirim

	const char* data() const noexcept;		-->		Prototip Bildirim


	c_str() ve data() ayni isi yapiyor

	string'den c-string elde etmek icin kullanilir.
*/


void display(const std::string& str) {
	std::cout << "String :" << str << std::endl << "Size :" << str.size() << std::endl << "Length :" << str.length() << std::endl << "Capacity :" << str.capacity() << std::endl;
	std::cout << "**************************" << std::endl;
}



/*
void foo(std::string str1) {

}

int main() {

	std::string str = "alper";		// Bu kodda converting constructor yani from c-string constructor cagrilir ve explicit olmadigi icin bu tur donusumu yapilabiliyor.
	foo("alper");					// Bu kodda sorun yok cunku str1 string turunden ama converting constructor sayesinde problem olmuyor.
}
*/





/*
void foo(std::string& str1) {

}

int main() {

	std::string str = "alper";		// Bu kodda converting constructor yani from c-string constructor cagrilir ve explicit olmadigi icin bu tur donusumu yapilabiliyor.
	foo("alper");

	// Referanslar bir ismin yerine gecer ancak turleri ayni olmalidir.
	// Ayni tur olmadigindan dolayi bu kod syntax hatasidir.

	foo(str);	// Bu kodda syntax hatasi yoktur cunku ikisi de string turunden.
}
*/





/*
void foo(std::string& str1) {

}

int main() {

	std::string str = "alper";		// Bu kodda converting constructor yani from c-string constructor cagrilir ve explicit olmadigi icin bu tur donusumu yapilabiliyor.

	const char* cptr = str;			// String'den c'string'e donusum var ama c-string'den string'e donusum yok.Bunun icin c_str veya data fonksiyonu kullanilir.
}
*/





/*
void foo(std::string& str1) {

}

void foo2(const char* ptr) {

	std::cout << "c-string : " << ptr << std::endl;
}

int main() {

	std::string str = "alper";			// Bu kodda converting constructor yani from c-string constructor cagrilir ve explicit olmadigi icin bu tur donusumu yapilabiliyor.

	const char* cptr = str.c_str();

	// "alper" string'i string turunden oldugu icin sonunda null karakter "\0" yoktur
	// ve bu string'in sonuna NULL karakter "\0" koyarak c-string turune donusturuyor.

	foo2(cptr);
}
*/





/*
void foo2(const char* ptr) {

	std::cout << "c-string : " << ptr << std::endl;
}

int main() {

	std::string str = "alper";			// Bu kodda converting constructor yani from c-string constructor cagrilir ve explicit olmadigi icin bu tur donusumu yapilabiliyor.

	// "alper" string'i string turunden oldugu icin sonunda null karakter "\0" yoktur
	// ve bu string'in sonuna NULL karakter "\0" koyarak c-string turune donusturuyor.

	foo2(str.data());	// data()'da c_str ile ayni isi yapar.

	// Ancak data(); fonksiyonu c_str(); fonksiyonuna gore biraz daha STL'e ozgudur.
}
*/





/*
void foo2(const char* ptr) {

	std::cout << "c-string : " << ptr << std::endl;
}

int main() {

	std::string str = "alper";			// Bu kodda converting constructor yani from c-string constructor cagrilir ve explicit olmadigi icin bu tur donusumu yapilabiliyor.

	// "alper" string'i string turunden oldugu icin sonunda null karakter "\0" yoktur
	// ve bu string'in sonuna NULL karakter "\0" koyarak c-string turune donusturuyor.

	char buf[50];

	// strcpy(buf, str);				// ERROR olur cunku str string turunden buf c-string turundendir.

	strcpy(buf, str.c_str());			// NO ERROR.Cunku string turunden olan str degiskeni c-string'e donusturuldu ve buf'a kopyalandi.

	foo2(buf);
}
*/
