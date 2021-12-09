#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


/*
	Scope Resulation Operator'un Unary ve Binary olmak uzere yani tek operand ve iki operand olmak uzere iki kullanimi vardir.

	Tek operand kullanimi ==> "::aranacak_isim" seklindedir.Boylece bu isim global alanda yani C++ karsiligi ile namespace scope'da aratilir.main() icinde veya diger scopelarda degil sadece namespace scope'da.

	Cift operand kullanimi ==> "class_ismi :: class_isminde_arancak_isim" seklindedir.Bu kullanim ise bir class'in icinde bir isim aratmak icin kullanilir.
*/


// -----------------------------------------TEK OPERAND KULLANIMI-----------------::aranacak_isim---------------------------





/*
int mx = 20;

int main(){

	int mx = 30;
	++mx;
	cout << "mx : " << mx << endl;
}
*/	





/*
int mx = 20;

int main() {

	int mx = 30;
	++(::mx);
	cout << "mx : " << mx << endl;

	// ++(::mx); kodu namespace'de olan mx'i 1 arttirir.Namespace'de bulunan mx = 21 oldu fakat ekrana main()'deki mx'i yazdirildi.
}
*/





/*
int mx = 20;

int main() {

	int mx = 30;
	++(::mx);

	cout << "::mx = " << ::mx << endl;
	cout << "mx = " << mx << endl;

	// ++(::mx); kodu namespace'de olan mx'i 1 arttirir. cout << ::mx; kodu ekrana Namespace'de bulunan mx'i yazdirir.
}
*/



// ----------------------------------------- IKI OPERAND KULLANIMI----------------class_ismi::class_isminde_arancak_isim-------------------------- -





/*
class my_class {

	int mx, my;
	void foo(int);
};


int main() {

	my_class obj;
	obj.mx = 30;		// ERROR. Cunku default olarak private

	// Eger class icine "public" "private" "protected" belirteclerinin birisi yazilmazsa default olarak "private" kabul edilir.
	// Eger struct olsaydi default olarak "public" kabul ederdi.
}
*/





/*
class my_class {
public:
	int mx, my;
	void foo(int);
};

void foo(int) {

}

int main() {
	my_class myob;

	// foo(); fonksiyonu class'in icinde bulunan class'a ait olan bir fonksiyon degildir.
}
*/




/*
class my_class {
public:
	int mx, my;
	void foo(int);
};


void my_class::foo(int a){

	// ve bunu farkli tanimlayamayiz
}


int main() {
	my_class myob;

	// Scope resolution operatorunu kullanarak sol operandindaki class'in isminde sag operandindaki nesneyi aratir.
	// Ancak bu sekilde class'a ait olan fonksiyon oldugu anlasilir.
	// Class'a ait olan fonksiyon tanimlanirken prototip bildiriminden farkli bir fonksiyon tanimlanamaz.Bu durumda hata alinir.
}
*/





/*
class my_class {
public:
	int mx, my;
	void foo(int);
	int func(double, int);
private:
	int a;
	double b;
};


void my_class::foo(int k){
	++a;
}

int my_class::func(double x, int y) {
	return 10;	
}


int main() {
	my_class myob;

	// foo(); ve func(); fonksiyonlari public oldugu icin client kodlardan erisime aciktir.
	// Class'in icinde veya disinda fonksiyonun taniminin yapilmasi bir seyi degistirmez.
}
*/

