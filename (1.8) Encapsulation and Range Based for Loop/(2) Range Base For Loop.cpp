#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#define		SIZE		5


int main() {

	int a[SIZE] = { 2,4,6,8,10 };

	for (int i = 0; i < SIZE; i++)
		std::cout << "a[" << i << "] : " << a[i] << std::endl;

	// Bu kodda, ekrana ilk 3 elemani bastir veya ekrana son iki elemani bastir gibi seyler yapilabilir.
	// Ancak Range Based For Loop'da boyle bir ayarlama yapilamaz.
	// Dizinin ya tamami dolasilir veya dizi dolasilmaz.



	std::cout << "**********" << std::endl;



	for (int x : a)
		std::cout << x << std::endl;

	// Range Based For Loop syntaxi dir.Dizi int turden oldugu icin int x : a yazilir.
	
	// x : a kodunda x degiskeni a'nin ilk elemanindan baslayarak sona kadar ilerler.
	// Otomatik tur belirleme icin (auto x:a) kodu da kullanilabilir.

	// Kullanilma sebebi ise eger dizinin tamami dolasilacaksa daha kisa bir yazim sekli saglar.
	// Diger faydasi ise daha guvenlidir cunku diziyi tasirma ihtimali yoktur ve Runtime hatasi olusturmaz.
}
