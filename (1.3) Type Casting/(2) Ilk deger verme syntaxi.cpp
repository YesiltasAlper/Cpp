#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	// C++'da ilk deger verme syntax'i farklidir.C'de ilk deger verme syntax'i da sIk kullanilir.

	int x = 10;

	// Bir diziye ilk deger vermek istersek int a[] = {5,10,25};

	// Bir structer'a ilk deger vermek istersek

	struct data {

		int mx,my,mz;
	};

	// data mydata = {5,10,15};

	// C'de ilk deger verme islemleri boyleydi.
*/





/*
//	C++'da C'de olanin disinda iki tane daha ilk deger verme syntax'i vardir.

//	int y(10);		// value initilization

//	int z{10};		// uniform initilization veya brace initilization

//	Bunlarin ikisi de int y = 10; ve int z = 10; ile ayni anlami tasir.Cogunlukla uniform initilization kullanilir.

//	Bir diziye uniform initilization kullanarak ilk deger vermek istersek.

//	int a[]{5,10};

int main() {

	int y(10);
	int z{ 15 };
	++y;
	++z;
	cout << y << endl << z;
}
*/





/*
int main() {

	int a{ 20 };
	int b(25);
	int c = 30;

	a{ 50 };		// ERROR
	b(50);			// ERROR
	c = 50;			// NO ERROR

	// Burada value initilization veya uniform/brace initilization olarak ilk deger atama yapilmis degiskenlere tekrar deger atamasi yapilamaz.
	// Bu durumda syntax hatasi verir. Bunlar sadece ilk deger atamasi yapilirken kullanilir.
	// C'de kullanilan ilk deger atama syntax'i once ilk deger atayarak sonra normal atama yaparken de kullanilabilir.
}
*/





/*
int main(){

	double dval = 52.85;
	int ival = dval;

	cout << "ival : " << ival << endl;

	// Diger 3. faydali ve cok onemli olan seyi ise Narrowing Convertion (Daraltici Donusum) dir.
	// Derleyici bu kodda syntax hatasi vermedi ve derleyici consolda altta muhtemel veri kaybi uyarisi verdi.
	// Cunku double'dan int'e type cast yapmadan donusum yaptik.
	// Normalde olmasi gereken kod int ival = static_cast<int>(dval);
	// Bunu yapmadik ve bu kod icin derleyici sadece consolda uyari verdi hata vermedi.
}
*/
/*
int main() {

	double dval{ 52.85 };
	int ival{ dval };

	cout << "ival : " << ival << endl;

	// Bu kez uniform initilization kullanarak degiskenlere ilk deger atamasi yaptik.
	// Burada uniform initilization kullanarak degiskenlere ilk deger atamasi yaptik ve type casting yapmadik.
	// Tur donusumu yapilmasi gereken durumda direkt uyari yerine hata verdi.Ancak yukaridaki kodda hata vermiyordu sadece uyariyordu.
	// Bize narrowing convertion gerektigini soyletiyor ve yuksek guvenlik yaratiyor.
	// Bu kodun dogrusu da 	int ival{ static_cast<int>(dval) };	seklinde olmalidir.
}
*/

