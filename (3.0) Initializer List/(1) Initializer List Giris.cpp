#define CRT_SUCURE_NO_WARNING
#include <iostream>

// #include <initializer_list>		Initializer List'i kullanmamiz icin  initializer list bir class template oldugu icin  kutuphanesini include etmeliyiz.
// Initializer list kodlari aslinda burada bulunuyor ama bu kutuphaneyi iostream de include ettigi icin iostream'i de dahil ederek kullanabiliyoruz.	



/*
int main() {

	auto il = { 2,4,6 };

	std::cout << typeid(il).name();		//	Tur cikariminda class std::initializer_list<int>		ekran ciktisi.

	//	Bu kod aslinda initializer list'in int acilimidir ve bu kod asagidaki sekilde de yazilabilir.

	std::initializer_list<int> test = { 2,4,6 };


	// Initializer list nedir aslinda bir const list ve ilk deger verilen bir listedir.
	// Yukaridaki std::initializer_list<int> test = { 2,4,6 };	kodu icin derleyici arka planda const bir dizi olusturuyormus gibi dusunulebilir.
	// Fakat sonuc olarak syntax'i normal bir dizinden farklidir.Derleyici arka planda const bir dizi olusturur diyebiliriz.
}
*/





/*
void foo(int* ptr);

int main() {

	std::initializer_list<int> test = { 2,4,6 };

	foo(&test);		//ERROR.

	// Derleyici arka planda const bir dizi olustursa da bu sekilde arguman gecilirse hata verir.Cunku turler farklidir.
	// Initializer list'den fonksiyon parametresi tabii ki olur ama uygun tur olmalidir.
}
*/





/*
int main() {

	std::initializer_list<int> test = { 2,4,6 };

	// test.begin();			// Arayuz kucuktur 3 cesittir.
	// test.end();
	// test.size();

	// Ozet olarak initializer list const bir veri toplulugu const bir listedir.
	// test degiskeni 2-4-6 ile initialize edildikten sonra degerleri degistirilemez.
	// Veya daha fazla eleman eklenemez.
}
*/

