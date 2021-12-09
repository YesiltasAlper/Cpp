#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>



/*
	Bir class'in baska bir class'in ozelliklerini alarak yeni class olusturulmasina inheritence denir.

	Composition ve inheritence arasinda farkliliklar vardir.Composition'da "has a relationship" vardir.Inheritence'da ise "is a relationship" vardir.
	Compositionda kucuk class'lar birleserek buyuk class'i olusturur ve composition'da buyuk is parcalara bolunur ve birleserek ana yapiyi olusturur.
	Inheritence'da ise bir class olusturulur ve bu class kaynak class'dir.Olusturulan bu kaynak class kopyalanir ve yeni class'lar olusturulur.
	Inheritence'da kaynaklar olarak kullanilan class'a	"PARENT CLASS" ve kaynak class'dan olusturulan class'lara "CHILD CLASS" denir.
*/



/*
	    KALITIM (INHERITENCE) MODLARI ============>>>

		Public Mod -->>	   Public patern class'dan child class turetilirse patern class'in public ogesi child class'da public olur ve patern class'in protected ogeleri child class'da protected olur.

		Private Mod -->>   Private patern class'dan child class turetilirse patern class'in tum ogeleri child class'da private olur.

		Protected Mod -->> Protected patern class'dan child class turetilirse patern class'in public ve protected ogeleri child class'da protected olur.


		KAYNAK CLASS							  KALITIM TURU
		ERISIM BELIRTECI			PUBLIC			PRIVATE			PROTECTED

		PUBLIC						public			private			protected

		PRIVATE						gizli			gizli			gizli

		PROTECTED					protected		private			protected
*/



/*
class A
{
public:
	int x;
protected:
	int y;
private:
	int z;
};

class B : public A{

	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A{

	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A {	// 'private' is default for classes

	// x is private
	// y is private
	// z is not accessible from D
};
*/










/*
class car {		// PATERN CLASS

public:
	int car_public_patern_mx;				// Client kodlar ve Child class'lar erisebilir.
	void car_public_patern_foo();
private:
	int car_private_patern_my;				// Client kodlar veya Child class'lar erisemez.
	void car_private_patern_foo();
protected:
	int car_protected_patern_mz;			// Client kodlardan erisilemez.Child class'lar tarafindan erisime aciktir.Protected interface inheritence'a ozgudur.
	void car_protected_patern_foo();		// Protected interface client kodlarin erisimine kapalidir ancak child class'larin erisimine acik interface'dir.
};


class bmw :public car {		// CHILD CLASS		class	child class ismi	: public or private or protected PATERN CLASS NAME (Hangi class'dan uretilecek)	(bmw class'i car class'indan public inheritence yoluyla turetilmis)

public:
	void bmw_public_child_foo() {

		car_public_patern_mx;
		car_public_patern_foo();			// Public oldugu icin hem client kodlardan hem child class'dan erisilebilir

		car_protected_patern_mz;	
		car_protected_patern_foo();			// Protected oldugu icin client kodlardan erisilemez ancak child class'dan erisilebilir

		// Patern class'in (car) private ogelerine child class'dan erisim yoktur.
	}
private:
	int bmw_private_child_mx;		
};



int main() {

	bmw mybmw;							

	mybmw.bmw_public_child_foo();			// Public interface'e client kodlardan erisilebilir.

	mybmw.car_public_patern_foo();			// Child class nesnesi ile client kodlardan patern class'in public bolumune erisebilirim.
	mybmw.car_public_patern_mx;

	// mybmw.car_protected_patern_mz;		// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
	// mybmw.car_protected_patern_foo();	// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez

	// mybmw.bmw_private_child_mx;			// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.

	car mycar;

	mycar.car_public_patern_mx;
	mycar.car_public_patern_foo();			// Patern class nesnesi ile sadece patern class'in public bolumune erisilebilir.

	// mycar.car_private_patern_my;			// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.
	// mycar.car_private_patern_foo();		// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.

	// mycar.car_protected_patern_mz();		// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
	// mycar.car_protected_patern_foo();	// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
}
*/










/*
class car {		// PATERN CLASS

public:
	int car_public_patern_mx;				
	void car_public_patern_foo();
private:
	int car_private_patern_my;				
	void car_private_patern_foo();
protected:
	int car_protected_patern_mz;			
	void car_protected_patern_foo();		
};



class bmw :private car {		// CHILD CLASS		

public:
	void bmw_public_child_foo() {

		car_public_patern_mx;
		car_public_patern_foo();			

		car_protected_patern_mz;
		car_protected_patern_foo();			
	}
private:
	int bmw_private_child_mx;
};


int main() {

	bmw mybmw;

	mybmw.bmw_public_child_foo();			// Public interface'e client kodlardan erisilebilir.

	mybmw.car_public_patern_foo();			// ERROR. class bmw :private car bildirimi yapildigi icin client kodlardan erisilemez.
	mybmw.car_public_patern_mx;

	// mybmw.car_protected_patern_mz;		// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
	// mybmw.car_protected_patern_foo();	// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez

	// mybmw.bmw_private_child_mx;			// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.

	car mycar;

	mycar.car_public_patern_mx;
	mycar.car_public_patern_foo();			// Patern class nesnesi ile sadece patern class'in public bolumune erisilebilir.

	// mycar.car_private_patern_my;			// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.
	// mycar.car_private_patern_foo();		// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.

	// mycar.car_protected_patern_mz();		// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
	// mycar.car_protected_patern_foo();	// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
}
*/









/*
class car {		// PATERN CLASS

public:
	int car_public_patern_mx;
	void car_public_patern_foo();
private:
	int car_private_patern_my;
	void car_private_patern_foo();
protected:
	int car_protected_patern_mz;
	void car_protected_patern_foo();
};



class bmw :protected car {		// CHILD CLASS		

public:
	void bmw_public_child_foo() {

		car_public_patern_mx;
		car_public_patern_foo();

		car_protected_patern_mz;
		car_protected_patern_foo();
	}
private:
	int bmw_private_child_mx;
};


int main() {

	bmw mybmw;

	mybmw.bmw_public_child_foo();			// Public interface'e client kodlardan erisilebilir.

	// mybmw.car_public_patern_foo();		// ERROR. class bmw :protected car bildirimi yapildigi icin client kodlardan erisilemez.
	// mybmw.car_public_patern_mx;

	// mybmw.car_protected_patern_mz;		// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
	// mybmw.car_protected_patern_foo();	// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez

	// mybmw.bmw_private_child_mx;			// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.

	car mycar;

	mycar.car_public_patern_mx;
	mycar.car_public_patern_foo();			// Patern class nesnesi ile sadece patern class'in public bolumune erisilebilir.

	// mycar.car_private_patern_my;			// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.
	// mycar.car_private_patern_foo();		// ERROR.Client kodlardan private bolume erisilemez.Sadece class icinden erisilebilir.

	// mycar.car_protected_patern_mz();		// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
	// mycar.car_protected_patern_foo();	// ERROR.Protected bolumune sadece child class'dan erisilebilir.Client kodlardan erisilemez
}
*/
