#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
	Bir programin kullanabilecegi iki farkli bellek turu vardir.Bunlar "stack" ve "heap" bellek alanlaridir.Ayrica "bellek sizintisi" kavrami da heap icin onemli bir kavramdir.

	BELLEK SIZINTISI (Memory Leak) ==>>

		 Eger RAM'den hafiza alani tahsis edilip heap alanina geri verilmezse bu olay bellek sizintisina yol acabilir.

		 Eger bir bellek sizintisi varsa bu bellek sizintisi kesinlikle "heap" den kaynaklanir.


	STACK ==>>

		Stack, Last In First Out (LIFO) mantigiyla calisan bir veri yapisidir.Ayni zamanda bir bellek alanidir.Stack RAM'de bulunur.

	Stack'de olusan degiskenler,degiskene ait olan scope bittigi zaman kendisi otomatik olarak RAM'den kullandigi bellegi geri iade eder ve degisken veya nesnenin omru biter.

	Stack bellek alaninda veriler sirayla artan ya da azalan adres mantiginda (big and little endian) saklanir ve boyle calisirlar.


	HEAP ==>>

		Heap'de stack gibi RAM'de bulunan bir bellek alanidir.Dinamik omurlu nesnelere hitap eder.Stack'daki gibi veriler sirayla ve duzenli olarak dizilmez.

	KarisIk bir sekilde veriler saklanir.Stack'de bulunan degiskenler program bittikten sonra silinirken Heap'de bulunan degiskenleri eger kendimiz silmezsek

	program bitse bile o bellek geri otomatik olarak iade edilmez.Heap'den alinan bellek alani geri verilmezse bellek sizintisi olusabilir.

	Ayrica heap'de bulunan bir veriye erismek stack'de bulunan bir veriye erismeye gore daha maliyetli bir islemdir.

*/


// ******************STACK ALANINDA DEGISKEN OLUSTURMA - 1 ******************


/*
int main() {

	int a = 5;

	{
		int x = 2;
	}

	// a degiskeni main scope boyunca hayattadir ve main scope bittikten sonra otomatik olarak stack'e geri verilir.
	// x degiskeni ise block scope boyunca hayattadir ve block scope bittikten sonra otomatik olarak stack'e geri verilir.
}
*/





// ******************STACK ALANINDA DEGISKEN OLUSTURMA - 2 ******************

/*
class A {
public:
	A() {
		cout << "A nesnesi olusturuldu..." << endl;
	}
	~A() {
		cout << "A nesnesi yok edildi..." << endl;
	}
};

int main() {

	cout << "Block oncesi..." << endl;

	{
		A obj1;
	}

	cout << "Block sonrasi..." << endl;
}
*/





// ******************HEAP ALANINDA DEGISKEN OLUSTURMA - 1 ******************


/*
class A {
public:
	A() {
		cout << "A nesnesi olusturuldu..." << endl;
	}
	~A() {
		cout << "A nesnesi yok edildi..." << endl;
	}
};

int main() {

	cout << "Block oncesi..." << endl;

	{
		A* ptr = new A;
	}

	cout << "Block sonrasi..." << endl;

	// Block scope bitse de nesne icin delete operatoru kullanilmadigi icin nesne heap bellek
	// alanina geri iade edilmemistir.Delete kullanilarak geri iade edilmelidir.
}
*/





// ******************HEAP ALANINDA DEGISKEN OLUSTURMA - 2 ******************

/*
class A {
public:
	A() {
		cout << "A nesnesi olusturuldu..." << endl;
	}
	~A() {
		cout << "A nesnesi yok edildi..." << endl;
	}
};

int main() {

	cout << "Block oncesi..." << endl;

	{
		A* ptr = new A;

		delete ptr;
	}

	cout << "Block sonrasi..." << endl;
}
*/





// ******************HEAP ALANINDA DEGISKEN OLUSTURMA - 3 ******************


/*
class A {
public:
	A() {
		cout << "A nesnesi olusturuldu..." << endl;
	}
	~A() {
		cout << "A nesnesi yok edildi..." << endl;
	}
};

int main() {

	cout << "Block oncesi..." << endl;

	A* ptr;

	cout << "A turunden pointer nesnesi olustu..." << endl;

	{

		ptr = new A;

	}

	 cout << "Block sonrasi..." << endl;

	 delete ptr;
}
*/
