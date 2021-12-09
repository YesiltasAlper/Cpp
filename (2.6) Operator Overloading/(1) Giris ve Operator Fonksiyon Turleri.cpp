#define _CRT_SECURE_NO_WARNINGS
#include<iostream>


/*
	// Operator Overloading'in kullanildigi bir durum olusturuldugunda operator fonksiyonlari cagrilir.
	// Ornegin asagidaki ornekte + operatoru icin operator fonksiyonu cagrilmalidir.
	// Bu operator fonksiyonlari iki cesittir.


				class complex_number {
				int im;
				int re;
			public:
				complex_number();
				complex_number(int imj,int ree);
			};

			complex_number::complex_number(int imj,int ree) :im{ imj }, re{ ree }{

			}

			int main() {
				complex_number n1{ 2,10 };
				complex_number n2{ 4,12 };
				complex_number n3;

				n3 = n1 + n2;

				// Bu tarz senaryolarda class turleri arasinda operator islemlerini yapmak icin operator overloading kullanilmalidir.
				// "+" icin operator overloading fonksiyonu yazilmadigi icin n3 = n1 + n2; kodu hata verir.
			}


	// 1 -->> Member Operator Function			BIR PARAMETRELI
	// 2 -->> Global Operator Function			IKI PARAMETRELI

	// Ornegin copy assingment fonksiyonu yazildiginda copy assingment fonksiyonu member duzeyinde bir operator fonksiyondur.
	// Operator atama islemini yapiyor ve member duzeyinde bir function.Ozel bir uyelik fonksiyonu oldugu icin ismi copy assingment.
	// Ancak operator de kullanildigi icin member duzeyinde operator atama fonksiyonudur.Class'in icinde olanlara member operator function denir.

	// Global Operator Function ise global namespace'de olur ve global operator fonksiyonlardir.Class'in icinde degildir.
*/





//  -->> MEMBER OPERATOR FUNCTION ORNEGI

/*
class string {
public:
	bool operator>(const string&)const;		//  Member Operator Function
};

// Iki tane string'i kendi arasinda hangisinin buyuk oldugu kiyaslansin.
// Geri donus degeri bool cunku karsilastirma operatorleri lojik yorumlamaya tabi idi.TRUE veya FALSE.
// Bir nesne oldugu icin tek parametre yeterlidir.
// const olma sebebi class'in herhangi bir memberi ile ilgili bir degisIklik yapmayacak.

int main() {

	string a, b;
	a > b			// a.operator>(b);	seklinde cagri yapar.Member Operator Function oldugu icin tek parametre.
}
*/





//  -->> GLOBAL OPERATOR FUNCTION ORNEGI

/*
class string {
public:
	bool operator>(const string&)const;		//  Member Operator Function
};

string a, b;

bool operator>(const string& s1, const string& s2);		//  Global Operator Function

int main() {
	operator>(a, b);	// Seklinde global operator fonksiyona cagri yapilabilir.
}

// Global operator fonksiyon oldugu icin class'in icinde degil.
// Herhangi bir class'in icinde olmadigi icin bir nesne yoktur ve bu yuzden fonksiyonu tanimlarken iki parametreli olmalidir.
// En sonunda const keywordu yoktur cunku zaten nesneye sahip olmadigi icin class ile ilgisi yoktur ve class memberlari ile ilgili bir islem yapamaz.
*/


