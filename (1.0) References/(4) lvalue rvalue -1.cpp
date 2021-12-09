#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//	lvalue = Bellekte tanimlanabilir yer kaplayan bir nesne.Bu nesnenin bellekte bir adresi vardir ve bellekte tanimlanabilir.
//	rvalue = lvalue olmayan her nesne rvalue.


// ------------------------lvalue ve rvalue kavramlari------------------------


/*
int main() {


	int i;						// i bir lvalue dir.Cunku i'nin adresine &i koduyla ulasilabilir.
	int* p = &i;				// i'nin adresi ayni zamanda tanimlanabilirdir.
	i = 2;						// i ve p lvalue.2'nin ise bellekte bir yeri adresi yoktur rvalue.



	class dog{};

	dog d1;						// user defined tur'un bellekte yeri vardir.d1 lvalue.



	int x = 2;					// 2 rvalue dir.Cunku 2 nin RAM adresi yoktur.x ise lvalue dir.Bellekte 4 byte lik (sizeof(int)) yer kaplar ve bir adresi var.
	int a = i + 2;				// (i+2) rvalue dir. i'nin bellekte yeri olsa da (i+2)'nin RAM'de yeri yoktur.
	int* ptr = &(i + 2);		// (i+2) nin bellekteki yeri olmadigi halde erismek istedik ve error
	i + 2 = 4;					// sol degerlere atama yapilamaz.
	2 = i;						// sol degerlere atama yapialamaz.

	dog d2;						// d2 lvalue dir bellekte yeri vardir.
	d2 = dog();					// dog();	rvalue dir bellekte adresi yoktur.Bu class'in rvalue'sidir.


	int sum(int k, int l) {		// l ve k lvalue.
		return (k + l);			// (k+l) rvalue.
	}

	int m = sum(3, 4);			// m lvalue ve sum(3,4) rvalue dir.

	// lvalues = i , p , d1 , x , a , ptr , d2 , k , l , m
	// rvalues = 2 , (i+2) , 4 , dog() , (k+l) , sum(3,4)
}
*/



// ------------------------lvalue referans ve rvalue referans kavramlari------------------------



/*
int main() {

	int i;
	int& r = i;		// sol deger referanslarina sadece sol degerler atanabilir.Syntax hatasi yoktur.

	int& a = 5;		// 5 sag deger (rvalue) oldugu icin lvalue referansina atanamaz.Error

	// ISTISNA : Constant lvalue referans'a bir rvalue atanabilir.

	const int& b = 10;	// const lvalue degerine rvalue degeri atanbilir.
}
*/



/*
int square(int& x) {
	return (x * x);
}

int main() {
	int i;

	square(i);		// Syntax hatasi yoktur cunku square fonksiyonu sol deger referans oldugu icin sol deger ile atama alir ve i de sol degerdir.

	square(10);		// const olmayan bir sol deger referans olmadigi surece,sol deger referansina sag deger atanamaz.10 rvalue dir.
}
*/



/*
int square(const int& x) {
	return (x * x);
}

int main() {

	int i;

	square(i);		// Syntax hatasi yoktur cunku zaten sol deger referansi oldugu icin i de sol degerdir.

	square(10);		// Syntax hatasi yoktur 10 rvalue ama square fonk parametresi const turden bir lvalue oldugu icin istisnaya uyuyor.
}
*/



// ------------------------lvalue ==>> rvalue    ve    rvalue ==>> lvalue arasi donusumler------------------------



/*
int main() {

	int i = 1;			// i lvalue'dir. 1 ise rvalue.
	int x = (i + 2);	// x lvalue'dir. (i+2) ise rvalue.

	int a = i;			// Burada sadece bu kod icin 'i' rvalue.		a = lvalue		i = rvalue

	// i aslinda lvalue'dir cunku adresi vardir bellekte.Ancak int a = i; durumunda 'i' dolayli olarak (implicilty) int x = (i + 2); kodu kullanilarak rvalue'ya donusturulmustur.
	// Bu yuzden lvalue dolayli yoldan (implicilty) rvalue'ya donusturulebilir.Ancak rvalue bu sekilde lvalue'ya donusturulemez.Onun donusum sekli baska turludur.

	int v[3];			// v burada lvalue dir.Cunku bellekte yeri vardir ve 12 byte (sizeof(v)) yer kaplar.
	*(v + 2) = 4;		// (v+2) ve 4 degerleri rvalue dir.Ancak *(v+2) kodu bir lvalue dir bellekte yeri vardir ve dizinin son elemanidir.		*(v+2) = lvalue     4 = rvalue

	//(v+2) rvalue iken *(v+2) kodunda pointer aritmetigi kullanildiginda dizinin son elemanina erisilir.Bir adrese erisilir bu yuzden lvalue oldu.
}
*/



// ------------------------YANILGI 1 = Fonksiyon veya operatorler her zaman rvalue degeri ile doner.------------------------



/*
int myglobal;

int sum(int k, int l) {
	return (k + l);
}

int& foo() {
	return myglobal;
}

int main() {

	int i;					// i'nin bellekte adresi vardir lvalue dir.
	int x = (i + 3);		// x lvalue dir. (i+3) rvalue dir.
	int y = sum(3, 4);		// y lvalue dir. sum(3,4) rvalue dir.

	foo() = 50;
}
*/



// ------------------------YANILGI 2 = lvalue degerleri her zaman duzenlenebilir degerlerdir.------------------------



/*
int main() {
	const int c = 1;		// c lvalue 1 ise rvalue.

	c = 2;					// error.

	// c degeri lvalue olmasina ragmen const keywordu oldugu icin degistirilemedi.
}
*/



// ------------------------YANILGI 3 = rvalue degerleri duzenlenemez degerlerdir.------------------------



/*
int sum(int k, int l) {
	return (k + l);
}

class dog {
public:
	int bark;
}

int main() {

	int i;				// i lvalue dir.
	(i + 3) = 6;		// (i+3) rvalue ve 6 rvalue dir.
	sum(3, 4) = 7;		// sum(3,4) rvalue ve 7 rvalue dir.

	// Burada rvalue degerlerinin duzenlemez oldugu dogru gorunuyor ancak bu her tur icin gecerli degildir.

	dog().bark();

	// Ancak user defined turler icin rvalue degerleri duzenlenebilir.Burada dog class'ini olusturmak icin dog'in default constructor'ini cagirdik ve bark() fonksiyonuna
	// cagri yaptik.Bark fonksiyonu dog class'ina erisebilecegi icin buradaki degerleri degistirebilir.Bu yuzden bu rvalue olan dog degistirebilir.Yukaridaki genelleme user defined'lari kapsamaz.
}
*/
