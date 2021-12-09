#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

// Class'in nesnelerinden birisinde pointer parametreli oge varsa copy constructor'i bizim yazmamiz gereklidir.	
// Ornegin M1 nesnesi olsun ve M1 nesnesinin Mp adinda bir pointeri olsun ve o pointer bellekte 250 adresini gostersin.
// Daha sonra M1'in kaynaklari M2 nesnesine kopyalanmak istensin ve M2'i bu sekilde hayata gelsin.
// Bu durumda M2 nesnesinin de Mp si oldu ve M2 nesnesinin Mp si de 250 adresini gosteriyor.
// Farkli nesnelerin pointer degiskenleri ayni nesneyi gostermis oldu.Bu istenmeyen bir durumdur.
// Cunku M1 nesnesinin Mp pointer degiskeninin gosterdigi yere 35 atamasi yapildiginda bu durumda M2 nesnesinin Mp'si de ayni yeri gosterdigi
// icin M2 nesnesinin Mp si de 35 degerini gosterir.Bunu onlemek icin copy constructor bizim tarafimizdan yazilmali ve derleyiciye birakilmamalidir.
// Ayrica bellekleri free ederken ayni bellek alani iki kez free edileceginden run time hatasi da olusur

// Derleyicinin yaptigi bu kopyalama islemine "shallow copy" denir.Bu kopyalama bicimi yukaridaki senaryo icin istenmeyen durumdur.
// Kullanici tarafindan belli nesnelerinin belli uyelerinin kopyalanip kontrollu kopyalama islemine "deep copy" denir.
// Bu senaryo icin deep copy uygulanmalidir.


using namespace std;

class line {
	int* mptr;
public:
	line() = default;			// Default constructor
	line(int len);				// Parametrik constructor
	line(const line& r);		// Copy constructor
	~line();					// Destructor
	size_t calcuate_lenght();	// Hesaplama 
};


line::line(int len) :mptr{ nullptr } {			// Parametrik constructor

	cout << "Constructor cagrildi...		this : " << this << endl;

	mptr = static_cast<int*>(malloc(sizeof(len)));
	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}
	*mptr = len;
}


line::line(const line& r) {						// Copy Constructor

	cout << "Copy Constructor cagrildi...	this : " << this << endl;

	mptr = static_cast<int*>(malloc(sizeof(line)));
	if (mptr == nullptr) {
		cout << "Bellek tahsilati basarisiz...";
		exit(EXIT_FAILURE);
	}
	*mptr = *r.mptr;
}


line::~line() {									// Destructor

	cout << "Destructor cagrildi...		this : " << this << endl;

	if (mptr != nullptr)
		free(mptr);
}


size_t line::calcuate_lenght() { 				// Hesaplama
	return *mptr;
}


void display(line obj) {						// Global Display Function
	cout << "Lenght of line : " << obj.calcuate_lenght() << endl;
	cout << "&obj : " << &obj << endl;
}


int main() {

	line L1{ 5 };			// L1 nesnesi icin parametrik constructor cagrilir.
	line L2 = { L1 };		// L2 nesnesi icin copy constructor cagrilir

	cout << endl << "&L1 : " << &L1 << endl;
	cout << "&L2 : " << &L2 << endl;

	cout << endl;
	display(L1);			// obj nesnesi icin copy constructor cagrilir	

	cout << endl;
	display(L2);			// obj nesnesi icin copy constructor cagrilir

	cout << endl;
}
