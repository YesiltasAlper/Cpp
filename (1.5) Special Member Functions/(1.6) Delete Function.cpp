#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
void foo(double) = delete;

// Fonksiyonu delete etme syntax'i bu sekildedir.Bir fonksiyonu delete etmek o fonksiyonu silme anlamina gelir.
// Ayni zamanda fonksiyon silindigi icin o fonksiyona yapilan cagrilarin syntax hatasi olmasi demektir.

int main() {
	foo(2.4);	// syntax hatasi
}
*/




/*
class square {
	int edge;
public:
	square(int a);
	int area()const;
	int perimeter()const = delete;
	void display()const;
};

square::square(int a) :edge{ a } {}	// Parametrik constructor MIL Syntax'i ilk deger atamasi

int square::area()const {
	return edge * edge;
}

int square::perimeter()const {
	return edge * 4;
}

void square::display()const {
	cout << "Area : " << area() << endl;
	cout << "Perimeter : " << perimeter() << endl;		// silinen fonksiyona cagri yapmak Syntax hatasidir.

}

int main() {
	square my_square{ 10 };
	my_square.display();
}
*/
