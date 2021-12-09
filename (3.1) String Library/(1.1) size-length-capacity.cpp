#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


// size ==>>

/*
	size_t size() const noexcept;		 	  prototip bildirimi.

	Geri donus degeri size_t ismi size ve const'luk var.Yazilarin uzunlugu size_t'de tutulur veya C++'da size_type'da da tutulabilir.
	Geri donus degeri string'in byte sayisini ifade eder.
	Const olma sebebi herhangi bir seyi set etmiyor get amacli kullanilan bir fonksiyon.

	Both string::size and string::length are synonyms and return the same value.
*/



// length ==>>

/*
	size_t length() const noexcept;		 	  prototip bildirimi.

	Geri donus degeri size_t ismi length ve const'luk var.Yazilarin uzunlugu size_t'de tutulur veya C++'da size_type'da da tutulabilir.
	Geri donus degeri string'in uzunlugunu ifade eder.
	Const olma sebebi herhangi bir seyi set etmiyor get amacli kullanilan bir fonksiyon.

	Both string::size and string::length are synonyms and return the exact same value.
*/



// capacity ==>>

/*
	size_t capacity() const noexcept;		 prototip bildirimi.

	Geri donus degeri size_t ismi capacity ve const'luk var.Yazilarin uzunlugu size_t'de tutulur veya C++'da size_type'da da tutulabilir.
	Geri donus degeri heap'den tahsis edilen dinamik bellegin byte'ini ifade ediyor.
	Const olma sebebi herhangi bir seyi set etmiyor get amacli kullanilan bir fonksiyon.


	Ornegin heap alanindan 10 byte'lik bellek tahsis edilmis olsun.
	size degeri o an kullanilan byte sayisini ifade eder.
	Capacity ise heap'den tahsis edilen dinamik bellegin boyutudur (10 byte).
	Bu durumda capacity'den daha cok byte kullanilirsa reallocation yapilir ve capacity guncellenir.
	Realloc fonksiyonu ile reallocation yapilinca buyutme katsayi oraninca capacity buyur.
*/






/*
int main() {

	// String'ler dinamik bir yazi tutan nesnelerdir.Dinamik bir class'dir.
	// Bu yuzden string'i buyutuldugunde capacity degeri belli bir katsayi ile buyuyecektir.

	std::string str = "a";

	for (int i = 0; i < 100; i++) {
		str += "k";
		std::cout << "size :" << str.size() << "  length :" << str.length() << "  capacity :" << str.capacity() << std::endl;
	}


	// size_t size1 = str.size();						// String'in size'i bir degiskende tutulmak istenirse
	// std::string::size_type size2 = str.size();		// Veya size_type da kullanilabilir.
	// auto size3 = str.size();							
}
*/
