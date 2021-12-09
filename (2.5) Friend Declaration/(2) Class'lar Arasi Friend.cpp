#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

// Friend bildirimi her zaman global duzeyde olmak zorunda degildir.
// Friend bildirimleri class'lar arasinda da olabilir. Bir class baska bir class'a friend'lik verebilir.




/*
class ahmet {
	friend class veli;
	int a_x, a_y;
public:
	int a_z;
};


class veli {
	int v_x, v_y;
public:
	int v_z;

	void foo() {
		ahmet a;
		a.a_x = 10;			// NO ERROR.
		a.a_y = 20;			// NO ERROR.
		a.a_z = 30;			// NO ERROR.
	}
};

int main() {

	// ahmet class'i veli class'ina friend'lik vermistir.
	// Bunun anlami veli class'i ahmet class'inin private bolumundeki memberlarina ahmet turden bir nesne olusturarak erisebilir demektir.
	// Eger ahmet class'i veli class'ina friendlik vermeseydi,veli class'indan sadece ahmet class'inin a_z; member'ina erisilebilirdi cunku public.
}
*/







/*
class ahmet {

	friend class veli;
	int a_x, a_y;
public:
	int a_z;

	void a_foo() {
		veli v;
		v.v_foo();
		//v.v_x = 55;		// ERROR
		//v.v_y = 50;		// ERROR
		v.v_z = 45;
	}
};


class veli {

	int v_x, v_y;
public:
	int v_z;
	void v_foo() {
		ahmet a;
		a.a_x = 10;			// NO ERROR.
		a.a_y = 20;			// NO ERROR.
		a.a_z = 30;			// NO ERROR.
	}
};

int main() {
	// veli class'i ahmet class'ina friend'lik vermedigi icin
	// ahmet class'indan veli class'ina sadece veli class'inin public interface'deki member'larina erisilebilir.
	// ahmet class'indan veli class'inin private interface'de bulunan v_x ve v_y memberlarina erisim hata ile sonuclandi.
}
*/







/*
class ahmet {

	friend class veli;
	int a_x, a_y;
public:
	int a_z;
	void a_foo() {
		veli v;
		v.v_foo();
		v.v_x = 55;	
		v.v_y = 50;	
		v.v_z = 45;
	}
};


class veli {

	friend class ahmet;
	int v_x, v_y;
public:
	int v_z;
	void v_foo() {
		ahmet a;
		a.a_x = 10;
		a.a_y = 20;
		a.a_z = 30;
	}
};

int main() {

	// veli class'i ahmet class'ina friend'lik verdi ve ahmet class'i da veli class'ina friend'lik verdi.
	// Bu durumda ahmet class'inin icinde veli turden nesne olusturularak ahmet class'inin icinden veli class'inin private memberlarina erisilebilir.
	// Ayni sekilde veli class'inin icinde ahmet turden nesne olusturularak veli class'inin icinden ahmet class'inin private memberlarina erisilebilir.
	// Ancak burada da veli class'inin bildirimi asagida yapildigi icin ahmet class'inin icerisindeki veli turunden v nesnesini taniyamadi.
}
*/







/*
class ahmet {

	friend class veli;
	int a_x, a_y;
public:
	int a_z;
	void a_foo();
};


class veli {

	friend class ahmet;
	int v_x, v_y;
public:
	int v_z;
	void v_foo();
};

void veli::v_foo() {
	ahmet a;
	a.a_x = 10;				// NO ERROR
	a.a_y = 20;				// NO ERROR
	a.a_z = 30;				// NO ERROR
}

void ahmet::a_foo() {
	veli v;
	v.v_foo();
	v.v_x = 55;				// NO ERROR
	v.v_y = 50;				// NO ERROR
	v.v_z = 45;				// NO ERROR
}

int main() {

	// Bu durumda hata ortadan kalkti.
}
*/
