#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

/*
	********************************OPERATOR OVERLOADING KURALLARI*******************************************

	1 -->	Operator fonksiyonlarin isimleri operator sozcugu ve ilgili operator ile olusturulmak zorundadir.
	2 -->	Operator overloading'i kullanabilmek icin en az bir operand class turunden olmalidir.
	3 -->	Member operator fonksiyonlari non-static olmak zorundadir.
	4 -->	Bir operatorun onceligi asiri yuklenerek degismez.(associativity)
	5 -->	Bir operatorun alacagi operand sayisi da operatorun anlami da asiri yuklenerek degismez.
	6 -->	Yeni operatorler olusturulamaz.Ancak var olan operatorler asiri yuklenebilir.
	7 -->	Operator fonksiyonlari varsayilan arguman alamaz.Bir istisna (function call operator)
	8 -->	Operator fonksiyonlari function overloading'e tabidir overload edilebilirler.
	9 -->	Her operator overload edilemez.		sizeof		.		::		.*		typeid		?:
	10 -->	[]		->		()	 operatorleri sadece member operator fonksiyonlariyla overload edilir.
*/





/*
// 1 -->	Operator fonksiyonlarin isimleri operator sozcugu ve ilgili operator ile olusturulmak zorundadir.

class myclass {
public:
	myclass operator+(const myclass& number)const;
	myclass operator+=(const myclass& number);
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(const myclass& number)const {
	std::cout << "operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass myclass::operator+=(const myclass& number) {
	std::cout << "operator+=(const myclass& number) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	myclass obj1;
	myclass obj2;
	myclass obj3;

	obj3 = obj2 + obj1;		// obj3 = obj2.operator+(obj1);

	obj2 += obj1;			// obj2 = obj2 + obj1;		obj2 = obj2.operator+=(obj1);

	// "+" da obj2 icin operator fonksiyonu cagrilir ama obj2'nin degeri degismez bu yuzden const.
	// Ancak "+=" de  obj2'nin degeri degisir bu yuzden const keyword kullanmamaliyiz.
	// Ayrica global duzeyde olmadigi icin tek parametrelidir.
}
*/





/*
// 2 -- > Operator overloading'i kullanabilmek icin en az bir operand class turunden olmalidir.

class myclass {
public:
	myclass operator+(const myclass& number)const;
	myclass operator+(int number);
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(const myclass& number)const {

	std::cout << "operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass myclass::operator+(int number) {
	std::cout << "operator+(int number) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	int x = 1;
	double y = 25.5;
	x + y;				// Operator overloading degil.

	myclass obj1, obj2;
	obj1 + obj2;		// Operator overloading			obj1.operator+(obj2);

	myclass obj5;
	int z = 4;
	obj5 + z;			// Operator overloading			obj5.operator+(z);
}
*/





/*
// 	3 -->	Member operator fonksiyonlari non-static olmak zorundadir.

class myclass {
public:
	myclass operator+(const myclass& number)const;
	static myclass operator+=(const myclass& number);		// SYNTAX HATASI
};

int main() {

}
*/





/*
// 4 -- > Bir operatorun onceligi asiri yuklenerek degismez.(associativity)		https://cplusplus.com/doc/tutorial/operators/

class myclass {
public:
	myclass operator*(const myclass& number)const;
	myclass operator+(const myclass& number)const;
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator*(const myclass& number)const {

	std::cout << "operator*(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass myclass::operator+(const myclass& number)const {
	std::cout << "operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}

int main() {

	myclass m1, m2, m3;
	
	m1 + m2 * m3;	// m1.operator+(m2.operator*(m3));
					

	std::cout << "*************************************************" << std::endl;

	m1 * m2 + m3;	// (m1.operator*(m2)).operator+(m3);
		
	// Operator onceligi degismemistir.
}
*/





/*
// 	5 -->	Bir operatorun alacagi operand sayisi da operatorun anlami da asiri yuklenerek degismez.
// Bir operatorun operand sayisini teknik olarak ifade eden kavrama "arity" denir.

class myclass {
public:
	myclass operator+(const myclass& number)const;
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(const myclass& number)const {
	std::cout << "operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	myclass m1;
	myclass m2;

	m1 + m2;	
	
	// "+" operatoru sonucta iki tane nesneyi toplar."+" operatorunun operator overloading fonksiyonunda "+" operatorune
	// farkli bir anlam yukleyemeyiz.Operator overloading de olsa olmasa da her turlu iki nesneyi toplayacak.
	// Ornegin operator overloading fonksiyonunun icinde buna cikarma islemi yaptiramayiz.
}
*/





/*
// 6 -- > Yeni operatorler olusturulamaz.Ancak var olan operatorler asiri yuklenebilir.

// Operator listesindeki operatorlerin disinda operator olusturulamaz ve anlam yuklenemez.
*/





/*
// 7 -- > Operator fonksiyonlari varsayilan arguman alamaz.Bir istisna(function call operator)

class myclass {
public:
	// myclass operator+(const myclass& number, double value = 0);		// ERROR
	myclass operator()(int x = 10);										// NO ERROR. Istisna buradadir.Sadece fonksiyon cagri operatoru icin. "()".
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator()(int x) {

	std::cout << "operator()(int x) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {
	myclass obj1;
	
	obj1(10);
}
*/





/*
// 8 -- > Operator fonksiyonlari function overloading'e tabidir overload edilebilirler.

class myclass {
public:
	myclass operator+(const int x)const;
	myclass operator+(const double y)const;
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(const int x)const {

	std::cout << "operator+(const int x)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass myclass::operator+(const double y)const {

	std::cout << "operator+(const double y)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	myclass obj1, obj2, obj3;
	int x = 10;
	double y = 14.5;
	
	obj3 = obj1 + x;		// obj3 = obj1.(x);
	obj3 = obj2 + y;		// obj3 = obj2.(y);
}
*/





/*
// 9 -- > Her operator overload edilemez.		sizeof		.		::		.*		typeid		? :

class myclass {
	// myclass operator::std(const int)const;		NO OVERLOAD
	// myclass operator.(const double)const;		NO OVERLOAD
};
*/





/*
// 10 -- >		 []		->		()	 operatorleri sadece member operator fonksiyonlariyla overload edilir.

class myclass {
public:
	myclass operator()(int x = 10);				// Member operator function
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator()(int x) {

	std::cout << "operator()(int x) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {
	myclass obj1;

	obj1(10);

	// Operator overloading araci 2 cesitti.Global operator overload fonksiyonlari ve member operator overload fonksiyonlari.
	// Ornegin "+" operatoru hem global hem de member operator overload fonksiyonu olarak kullanilabilir ancak	[]		->		()
	// bu 3 operatoru sadece member operator overload fonksiyonlari fonksiyonu olarak kullanilabilir
}
*/
