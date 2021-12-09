#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	SYNTAX ==>>

	class class_tag{

	};
*/





/*
class Myclass {
					// Class'in bu iki block arasindaki yere class scope denir.
};

// C'de bir struct'in en az bir elemani olmasi gerekiyordu eger olmazsa syntax hatasiydi.
// C++'da Class'larda hic eleman olmasa bile syntax hatasi olmaz.C++'da empty class vardir.
*/





/*
// Class memberlar 3 turde olabilir.Bunlar "Data members" "Function members" "Type members" olarak ayrilirlar.

class Myclass2 {
	int mx, my;					// Bunlar data memberlardir.Char double long float long long void
	int mz;						// Bunlarla yapilan degisken turleri data memberlardir.

	void foo(int a, int b);		// Function memberlar ise fonksiyonlardan olusacak ve Class'lar ile C'deki structers'lari ayiran en onemli fark burada fonksiyonlar da var.
	int func(double, int);		// C'de structerslarin icine fonksiyonlar dahil edilemez ancak Class'larda bu mumkundur.

	typedef int word;			// typedef bildirimleri olabilir bir structer olabilir bir class olabilir enumaration olabilir.Bunlar type memberlardir.
	class BMW;
};

// Tanimlanan 3 tur aralarinda static veya non static olmasina gore de ayriliyor.

// Data memberlar static veya non static de olabilir.
// Funciton memberlar static veya non static olabilir.
// Type memberslar hep non static dir.

// Class scope icindeki 3 turdeki elemanlarin basina static keywordu yazilmiyorsa bunlarin hepsi default olarak non static dir.
*/





/*
class Myclass3 {
	static int mx, my;					// NO SYNTAX ERROR
	static double mz;					// NO SYNTAX ERROR

	static void foo(int a, int b);		// NO SYNTAX ERROR
	static int func(double, int);		// NO SYNTAX ERROR

	typedef int word;
	static class BMW;					// SYNTAX ERROR !!!!!! Type memberlar static keywordu alamazlar her zaman non static dir.
};
*/

