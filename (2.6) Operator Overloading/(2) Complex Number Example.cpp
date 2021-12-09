#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

class complex_number {
	double im, re;
public:
	complex_number(double img = 0, double real = 0);		
	complex_number operator+(const complex_number& c)const;		// Member Operator Function
	void print_numbers()const;
};


complex_number::complex_number(double img, double real) :im{ img }, re{ real }{
}


complex_number complex_number::operator+(const complex_number& right)const {

	complex_number total;

	total.re = re + right.re;
	total.im = im + right.im;

	return total;
}


void complex_number::print_numbers()const {
	static int j = 1;
	std::cout << "Number " << j << " : " << re << "+" << im << "i" << std::endl;
	j++;
}


int main() {

	complex_number number1{ 3,5 };
	complex_number number2{ 1,4 };
	complex_number number3;

	number3 = number1 + number2;		// number3 =  number1.operator+(number2);

	number1.print_numbers();
	number2.print_numbers();
	number3.print_numbers();
}


/*
	complex_number number1{ 3,5 }; kodundan sonra kod parametrik constructor'a gider yani 13.satira giderek burada img = 3 ve real = 5 olmustur.
	Ardindan bu degerler MIL Syntax'i ile class'in im ve re degiskenlerine atanmistir.Daha sonra ayni islemler number2 icin de yapilir.
	complex_number number3; kodundan sonraa number3 ilk deger almadigi icin im = 0 ve re = 0 olmustur.
	number3 = number1 + number2; kodunda bu kod number3 = number1.operator+(number2); ifadesine esittir.

	Bu ifadeden sonra class'in member operator fonksiyonuna cagri yapilir.Burada fonksiyon number1 icin cagrildigi icin "re" ve "im" ifadeleri number1'e aittir.
	right ise number2'ye aittir ve kod const complex_number& right = number2; kodundan farksizdir.
	Const olma sebebi ise class'in ogeleri olan "im" ve "re" nin degerleri degismemistir.
*/


