#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
	Bir Function Overloading'in basarili mi basarisiz mi olacagini anlama surecine ve eger basarili ise hangi fonksiyonun cagirilacagini anlama surecine "Function Overloading Resolution" denir.

	Function overloading her zaman basarili olmayabilir.

	Function Overloading'in olmasi icin 2 tane sart vardir.

	1 ==> Ayni scope da ayni isimli iki veya daha fazla fonksiyon olmalidir.Farkli scope'larda ayni isimli fonksiyonlar varsa bu function overloading degildir.

	2 ==> Bildirimlerde ayni isimli fakat fonksiyonlarin imzalari (signature) farkli olmalidir.

		- A function's signature includes the number of parameter (How many parameters does it have?), order and type of its formal parameters.

		- The return value is not part of a function's signature.

		- These two functions have the same signature

		- int Divide (int n, int m);			  double Divide (int n, int m) ;		thanks to "Divide" and "(int n,int m)"

		- These two functions don't have the same signature

		- int Divide (int n,int m);				  double Divide (int n, double m);		due to "double m" or "int m"

		- Fonksiyonun imzasi ile geri donus turunun ve parametre isimlerinin (n ve m) ilgisi yoktur.
*/




/*
	
	EGER AYNI SCOPE ALANINDA AYNI ISIMLI 2 VEYA DAHA FAZLA FONKSIYON VARSA 3 DURUM SOZ KONUSUDUR.

	1 ==> REDECLARATION (Yeniden Bildirim)

		int foo(int x, double y);
		int foo(int x, double y);

		// Redeclaration, fonksiyonun geri donus degeri fonksiyonun ismi parametre sayisi parametre turleri ayni demektir.


	2 ==> FUNCTION OVERLOADING

		int  func(int a, int b);
		void func(int a, float b);

		// Bu ikisi arasinda function overloading vardir.

		void  func(int a, int b);
		void  func(int a, float b);

		// Bu ikisi arasinda da function overloading vardir.


	3 ==> GECERSIZ DURUM

		int foo(int a);
		int foo(int b);

		Bu fonksiyonlar icin ornegin foo(2) seklinde cagri yapilirsa hangisine gonderecegini anlayamacagi cin gecersiz durum.

		int  foo(int a);
		void foo(int b);

	Geri donus degeriyle alakasi yok burada fonksiyonlarin imzalari aynidir bu yuzden function overloading olamaz.

*/




/*
void func() {
	cout << "1";
}
void func(int a, double b) {
	cout << "2";
}
void func(int a) {
	cout << "3";
}
void func(double a) {
	cout << "4";
}
void func(int* a) {
	cout << "5";
}

int main(){

	func(15);
}
*/




/*
	Yukaridaki fonksiyonlarin hangisinin cagirilacagini anlama surecine FUNCTION OVERLOAD RESULATION denir ve 3 ASAMALIDIR.

	Eger funciton overloading basarili olursa asagidaki sureclerden gecer.

	1 ==>	Candidate Functions (Aday Fonksiyonlar)

			Parametre degisken sayisi , parametre degiskenlerinin turleri ogrenilir.

	2 ==>   Viable Funcitons (Uygulanabilir Fonksiyonlar)

			Gecerli bicimde cagirabilecek fonksiyonlar

	3 ==>	Best Viable Functions , Best Match (En iyi uygulanabilir fonksiyon , en iyi eslesme)

			1 - Exact Match (Tam,Kesin eslesme)

			2 - Promotion (Terfi)

			3 - Standart Conversion (Standart Donusum)

			4 - User Defined Conversion (Kullanici Tanimli Donusum)

			NOT : Best Match yukaridaki gibi 1-2-3-4 oncelik sirasina gore secilir.

			NOT : Variadic Fonksiyonlar en dusuk secilebilirlik onceligine sahiptir.

	Simdi bizim int main() icine yazdigimiz func(15) hangi fonksiyona cagri yapacaktir bunu gorelim.

		1 ==>	Candidate Functions (Aday Fonksiyonlar)
				Burada en ustteki fonksiyon elenir cunku parametre almiyor ancak int main()'de foo(15) parametre girildi ve burada 4 aday fonksiyon kalir 1 tanesi elenir.

		2 ==>   Viable Funcitons (Uygulanabilir Fonksiyonlar)
				Burada tek parametre girildi bu yuzden 2. fonksiyon da elenir ve 5. fonksiyon da elenir.
				Cunku pointer oldugu icin adres girilmelidir. Geriye 3. ve 4. fonksiyonlar kaldi.

		3 ==>	Best Viable Functions , Best Match (En iyi uygulanabilir fonksiyon , en iyi eslesme)
				Burada ise oncelik sirasina gore exact match (tam uyum) var mi evet var o da 3. fonksiyon oldugu icin exact match onceliklidir.
				Bu yuzden func(15) de 3. fonksiyon cagrilir.
*/




/*
	// C++'da function overloading basarisiz da olabilir basarili da olabilir.Basarisiz olmasinin iki sebebi vardir.


	// 1 ==> Hicbir sekilde eslesmeyebilir.

	enum ResistorColor { Black, Red };;
	
	void func(int*);
	void func(double*);
	void(ResistorColor);
	
	int main() {
		func(15);
	}
	
	// Burada "15" hicbir arguman ile eslesemedi.Buna no match durumu denir.
	// Function overloading var ancak hicbir fonksiyon ile uyumlu degil.



	// 2 ==> Ambiquity durumu Cift anlamlilik hatasidir.

	void func(unsigned int);
	void func(double);

	int main() {
		func(15);
	}

	// 15 burada double'a da donusturulebiliyor unsigned int'e de donusturulebiliyor.Ikisi arasinda karar veremiyor bir oncelik yok.
	// Buna da cift anlamlilik hatasi ambiquity denir.
	// Function overloading bu iki nedenden dolayi basarisiz da olabilir.
	// Hic eslesme olmama durumu ve eslesme var ama hangisiyle eslesecek bilemiyor cift anlamlilik hatasi.
*/


