#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
int main() {

	int i = 10;		// i = rvalue    10 = rvalue.

	10 = i;			// 10 rvalue oldugu icin boyle bir atama yapilamaz.
}
*/



/*
int main() {

	int i = 10;		// Burada 'i' lvalue dir bellekte yeri adresi vardir. '10' ise sadece bir sayidir rvalue dir.
	int a = i;		// 'a' burada lvalue dir ve 'i' de bu kodda ayni zamanda lvalue dir.

	// lvalue degerler sadece rvalue degerler tutabilir gibi genelleme yapilamaz.
}
*/



/*
int getvalue() {
	return 10;
}

int main() {

	int i = getvalue();		// getvalue 10 degeri ile doner ve bu bir rvalue.Yani temporary bir nesne ile geri doner.
	int a = i;
}
*/



/*
int getvalue() {
	return 10;
}

int main() {
	int i = getvalue();
	getvalue() = 5;			// getvalue(); bir rvalue dir ve bu syntax hatasidir.
}
*/



/*
int& getvalue() {

	static int value = 10;
	return value;
}

int main() {
	int i = getvalue();			// getvalue(); lvalue dir.
	getvalue() = 5;				
}
*/



/*
void setvalue(int value) {

}

int main() {
	int i = 10;
	setvalue(i);			// lvalue permanent yani kalici nesne cunku bellekte adresi vardir.
	setvalue(10);			// rvalue temporary yani gecici nesne sadece 10 bellekte adresi yok.

	// setvalue(); fonksiyonu lvalue ve rvalue ile cagrilabilir.
}
*/



/*
void setvalue(int& value) {

}

int main() {
	int i = 10;
	setvalue(i);	// i = lvalue
	setvalue(10);	// 10 = rvalue

	// sol deger referanslari const olmadigi surece sadece sol degerler ile cagrilabilir.Bu yuzden 10 degeri rvalue oldugu icin error.
}
*/



/*
int main() {

	int& z = 25;		// ERROR
	const int v = 20;	// NO ERROR
}
*/



/*
void setvalue(const int& value) {

}

int main() {
	int i = 10;
	setvalue(i);
	setvalue(10);

	// NO ERROR.
}
*/



/*
void printname(string& name) {
	cout << name << endl;
}

int main() {
	string firstname = "alper";						// firstname = lvalue		"alper" = rvalue
	string lastname = "yesiltas";					// lastname = lvalue		"yesiltas" = rvalue

	string fullname = (firstname + lastname);		// fullname = lvalue		(firstname+lastname) = rvalue

	printname(fullname);							// name lvalue oldugu icin sadece lvalue degerlere referans olur.fullname lvalue.NO ERROR.
	printname(firstname + lastname);				// ERROR.Cunku (firstname+lastname) = rvalue

}
*/



/*
void printname(string&& name) {
	cout << name << endl;
}

int main() {
	string firstname = "alper";						// firstname = lvalue		"alper" = rvalue
	string lastname = "yesiltas";					// lastname = lvalue		"yesiltas" = rvalue

	string fullname = firstname + lastname;			// fullname = lvalue		(firstname+lastname) = rvalue

	printname(fullname);							// name degiskeni rvalue alir.Ancak fullname = lvalue.ERROR
	printname(firstname + lastname);				// (firstname+lastname) = rvalue NO ERROR
}
*/



/*
void printname(const string& name) {
	cout << "[lvalue]" << name << endl;
}

void printname(string&& name) {
	cout << "[rvalue]" << name << endl;
}

int main() {
	string firstname = "alper";						// firstname = lvalue		"alper" = rvalue
	string lastname = "yesiltas";					// lastname = lvalue		"yesiltas" = rvalue

	string fullname = firstname + lastname;			// fullname = lvalue		(firstname+lastname) = rvalue

	printname(fullname);
	printname(firstname + lastname);

	// Burada overload edilen iki fonksiyon vardir. printname(fullname);	kodunda sadece cout << "[lvalue]" << name << endl; kodu calisir baska ihtimal yoktur.
	// Cunku diger fonksiyon sadece rvalue'lar tarafindan cagri yapilabilir ve fullname = lvalue.
	
	// printname(firstname + lastname);	kodunda ise kod her iki fonksiyona da gidebilir ama  cout << "[rvalue]" << name << endl; kodunu ekrana basti.
	// Cunku lvalue degerler permanent yani kalici olarak algilanir.Bellekte adres isgal ederler ve rvalue degerler ise temporary yani gecici diye adlandirilir derleyici bu nesnelere kalici
	// gozuyle bakmadan buna gore islem yapar cunku bellekte yer isgal etmezler.Bu yuzden kod oncelikli olarak kendisine uygun olan rvalue degerine gitti.
}
*/

