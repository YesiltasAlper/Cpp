#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

// friend bildirimi class'lar arasinda veya class'in member fonksiyonlari arasinda yapilir.
// class'in icinde friend bildirimi yapilmis olan member fonksiyonunun class ile bir baglantisi yoktur ve o class'in member fonksiyonu degildir.
// friend bildirimi yapilmis olan member fonksiyon ,class'in private ve protected bolumundeki memberlara erisebilir.

// friend'lik 3 duzeyde olabilir.
// 1 -->> Global fonksiyonlara friend'lik vermek
// 2 -->> Class'lara friend'lik vermek
// 3 -->> Class'in belirli fonksiyonlarina friend'lik vermek.



/*
class myclass {
	int mx, my;
public:
	int mz;

};

void foo() {
	myclass m1;
	m1.mx;			// ERROR
	m1.my;			// ERROR			
	m1.mz;			// NO ERROR			
}

int main() {

	// Class'in private bolumu memberlarina client kodlardan erisilemez.
}
*/





/*
class myclass {
	int mx, my;
	friend void foo();		// Friendlik bildirimi.foo fonksiyonu class'in member function'u degildir.
public:
	int mz;
protected:
	int mzz;
};

void foo() {
	myclass m1;
	m1.mx;			// NO ERROR		
	m1.my;			// NO ERROR		
	m1.mz;			// NO ERROR		
}

int main() {

	// foo fonksiyonuna friend bildirimi yapildigi icin foo fonksiyonu class'in private bolumundeki elemanlarina erisebilir.
	// class'in icerisine foo(); fonksiyonun yazilmasi class'in uye fonksiyonu oldugu anlamina gelmez.foo(); fonksiyonu class'in member fonksiyonu degildir.
	// Eger class'in elemani olsaydi disarida void myclass::foo(); seklinde tanimlanirdi.
	
	// friend bildirimi ile class'in elemani olmayan bir fonksiyonun class'in icindeki elemanlarin tumune erismesini saglandi.
	// friend bildirimi zaten class disindaki bir elemana bildirim yapildigini gosterir.friend void foo(); fonksiyonu class'in member function'u degildir friend fonksiyondur.
	
	// Ayrica friend fonksiyonun public private protected bolumunde olmasi herhangi bir seyi etkilemez.
	// Sonuc olarak foo(); fonksiyonu class'in member fonksiyonu degil ve zaten friend bildirimi yapinca bunu belirtmis oluyoruz.



	myclass m5;
	m5.mx;			// ERROR				
	m5.my;			// ERROR				
	m5.mz;			// NO ERROR				
	
	// Burasi icin hala mx ve my private bolumunde oldugu icin erisilemez.
	// foo fonksiyonuna friend bildirimi yapildigi icin sadece foo fonksiyonu class disindan erisebilir.
}
*/





/*
class myclass {
	int mx, my;
	void foo1();
	friend void foo2(myclass x);
public:
	int mz;
};

void myclass::foo1() {

	mx = 10;		// NO ERROR	
	my = 20;		// NO ERROR	
	mz = 30;		// NO ERROR	

	// foo1(); fonksiyonu class'in fonksiyonudur.
	// Bu sebeple memberlara erisim hata olusturmaz.
}

void foo2(myclass x) {

	x.mx = 40;		// NO ERROR			
	x.my = 50;		// NO ERROR	
	x.mz = 60;		// NO ERROR	

	// foo2(); fonksiyonu class'in fonksiyonu degildir.Ancak friend bildirimi
	// yapildigi icin class'in memberlarina erisim hata olusturmaz.
}

void foo3(myclass x) {

	x.mx = 40;		// ERROR	
	x.my = 50;		// ERROR	
	x.mz = 60;		// ERROR	

	// foo3(); fonksiyonu class'in fonksiyonu degildir ve friend bildirimi de yapilmamistir.
	// Bu sebeple class'in memberlarina erisim hata olusturur.
}

int main() {

}
*/
