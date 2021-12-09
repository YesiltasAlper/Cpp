#include<iostream>
using namespace std;


/*
	Referanslar C'de olmayan sadece C++'da olan bir arac.C'de buna benzer bir arac pointerlar var.C++'da olabildigince pointer kullanmak yerine referanslar kullanilir.
	Referanslarin dogrudan makine koduyla ilgisi yoktur.Pointerlar alt seviyeli bir arac fakat referanslar alt seviye bir arac degildir.

	Referans Nedir ==> Referans bir isim (identifier).Bir nesnenin yerine gecen bir isimdir.Derleyiciye oyle bir isim tanitilir ki o isim kulanildiginda aslinda o nesneyi kullanilmis olur.
	
	Syntaxi ise ==>		Type & reference ismi = tutacagi nesne

	Type turdur yani int double char vb... hangi turden nesneye referans olacaksa. Reference ismi ise yaygin olarak "r" "r1" "r2" "r3" gibi kullanilir.
	Digeri de hangi nesnenin yerine gececek yani tutacagi nesnedir.Eger tutacagiz nesne bos birakilirsa syntax hatasi olur.

	C++'da iki turlu referans vardir.

	L value reference		ve		 R value reference		 sol taraf ve sag taraf degeri olmak uzere iki farkli referans vardir.Asagida L value reference'dan bahsedilmistir.
*/


int main() {

	/*
	int x = 50;
	int* ptr = &x;
	*ptr = 250;

	cout << *ptr << endl;
	cout << x;


		// Bu syntax C'den bilinen pointer syntax.Bu islemlerin aynisini C++'da referanslar ile yapalim.
	*/



	/*
	int x = 20;
	int& r = x;

	r = 50;
	++r;

	cout << r << endl;
	cout << x;


		//  x  nesnesi yerine r referansi kullanildi ve x nesnesi artik r referansi demek oldu. r'ye ne yapilirsa aslinda x'e yapilmis oluyor.
	*/




	/*
	int x = 20;
	int& r = x;

	r = 50;
	x = 30;

	cout << r << endl;
	cout << x;


		//  r referansi x nesnesi demektir ve ayni zamanda da x nesnesi de r referansi demektir.
	*/




	/*
	int x = 20;
	int& r = x;
	int y = 48;

	++r;

	cout << "x : " << x << endl;
	cout << "r : " << r << endl;

	r = y;

	cout << "x : " << x << endl;
	cout << "r : " << r << endl;

	*/



	/*
	int x = 20;
	int& r1 = x;					// r1 = 20 x = 20
	int& r2 = r1;					// r2 = r1 = 20

	++r1;							// r1 = 21 r2 = 21 x = 21

	cout << "r1 = " << r1 << endl;
	cout << "r2 = " << r2 << endl;
	cout << "x = " << x << endl;

	r2 += 3;						// r2 = 24 r1 = 24 x = 24

	cout << "r1 = " << r1 << endl;
	cout << "r2 = " << r2 << endl;
	cout << "x = " << x << endl;
	*/

}
