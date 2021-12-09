#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

/*
class A {
	int mx, my;
	friend class B;
public:
};

class B {
public:
	void func1(A myA) {
		myA.mx = 20;
	}
	void func2(A myA,int ival) {
		myA.my = ival;
	}
	void func3(A myA) {
		myA.mx = 40;
		myA.my = 50;
	}
};

int main(){
	// B class'ina friend'lik verildi.Bunun anlami B class'i,A class'inin private bolumundeki tum memberlarina erisebilir demektir.Class duzeyde bir friend'lik verildi.
	// Ancak bazen direkt class duzeyde bir friend'lik vermek yerine sadece o class'in bazi fonksiyonlarina friend'lik vermek istenebilir.
	// Yukaridaki kodda A class'inda B class'ina friend'lik verildigi icin B'nin tum memberlari A class'inin private bolumundeki memberlarina erisebilir.
	// Ancak sadece B class'inin bazi fonksiyonlari, A class'inin private bolumundeki memberlarina erismesi isteniyorsa kodlar asagidaki gibi olmalidir.
}
*/





/*
class A;		// forward declaration

class B {
public:
	void func1(A myA);
	void func2(A myA);
};

class A {
	int mx, my;
public:
	friend void B::func1(A myA);		// B class'inin sadece func1 isimli fonksiyonuna friend'lik verildi.

};

void B::func1(A myA) {
	myA.mx = 45;		// NO ERROR
}

void B::func2(A myA) {
	myA.mx = 45;		// ERROR.
}


int main() {

	// Burada A class'inda sadece B class'inin func1 adli fonksiyonuna friend'lik verildi.
	// A class'inin private bolumundeki memberlara,B class'inin sadece func1 adli fonksiyonu erisim saglayabilir.
	// B class'inin tum memberlari bu erisimi saglayamaz.Bu kez class duzeyde bir friend bildirimi degildir.
}
*/





/*
class A;		// forward declaration

class B {
	void func1(A myA);		// Friend'lik verilecek fonksiyon private bolumde olmamali.
public:
	void func2(A myA);
};

class A {
	int mx, my;
public:
	friend void B::func1(A myA);		// Sadece B class'inin func1 isimli fonksiyonuna friend'lik verildi.
};

void B::func1(A myA) {
	myA.mx = 45;		// NO ERROR
}

// Eger friend'lik verdigimiz fonksiyon private bolumde olursa 86.satirda hata olusur ve friend'lik verilemez.
// Cunku fonksiyona friend'lik verirken once baska bir class tarafindan gorulmelidir.
// A class'i B class'inin func1'ini gormelidir.
// Bu yuzden bir class'in private bolumundeki member'ina friend'lik verilemez.
*/
