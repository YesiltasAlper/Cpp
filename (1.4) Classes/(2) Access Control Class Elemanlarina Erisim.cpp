#include <iostream>
using namespace std;



// C++'da CLASS'larin OGELERINE class member'lara 3 farkli sekilde erisilir.

// 1 ====>>>>>	"."  nokta operatoru "dot" operatoru
// 2 ====>>>>>  "->" ok operatoru "arrow" operatoru
// 3 ====>>>>>  "::" iki nokta operatoru "scope resolution" operatoru


// Access Specifier C++ da erisimi ayarlayan 3 tane belirtec var. "public"    "private"     "prodected"
// Bunlar class scope'daki class memberlara hangi class memberin erisilebilir olup olmayacagini ayarlayan belirteclerdir.
// Public private protected ayri ayri scope belirtmez.Class'in icinde tek bir scope vardir o da class scope dir.





// 1- Public =========>>>>>>>
// Client kodlarin erisebilecegi ve class icinden de erisim sinirlamasi yapilmayan ogelerdir.

/*
class myclass {
public:
	int mx;
private:
	int my;
protected:
	int mz;
};

int main() {

	myclass myobject;

	myobject.mx = 25;		// Sadece mx erisilebilirdir.my ve mz'ye client kodlardan erisilemez.
}
*/





// 2- Private ===>>>

// Private,class'in sadece implemention'una acik bolgedir.Sadece class icindeki tum interfaceler tarafindan erisilebilir.
// Client kodlara kapalidir.int main() icinden erisilemez.

/*
class myclass {
public:
	int mx = my;			// Class'in kendi icine class scope'a aciktir
private:
	int my;
protected:
	int mz = my;			// Class'in kendi icine class scope'a aciktir
};

int main() {

	myclass myobject;

	myobject.mx = 25;		// Sadece mx erisilebilirdir.
	myobject.my = 42;		// Access control hatasi cunku my private interface'de ve sadece class ici erisilebilirdir.
}
*/





/*
	Protected kalitimla ilgilidir protected kalitim (inheritence) konusunda bakilacaktir.

	Class'larda arama ve kontrolu 3 sira ile yapilir.

	1- Name Look Up	==>>	Ilk once bu

	2- Context Control ==>> Sonra bu

	3- Access Control ==>>  Daha sonra bu
*/





// 1- Name Look Up ==>>	Bu nesne aramakla alakalidir.

/*
class myclass {
public:
	int mx;
private:
	int my;
};

int main() {

	int a = 2;
	myclass myobject;

	myobject.a = 5;

	// Name look up error.Cunku a'yi aradi ve bulamadi.
}
*/
/*
class myclass {
public:
	int mx;
	int a;
private:
	int my;
};

int main() {

	int a = 2;
	myclass myobject;

	myobject.a = 5;		// NO ERROR.
}
*/





// 2- Context Control ==>> Nokta operatorunun operandi olabiliyor mu bunu kontrol eder.

/*
struct data {

};

class myclass {
public:
	int mx;
	struct data mydata;
private:
	int my;
};

int main() {

	myclass myobject;

	myobject.mydata = 30;

	// Bu kontrol icerik kontroludur.Burada hata var cunku 30 degeri hicbir seyle eslesmiyor.
}
*/
/*
struct data {
	int k;
};

class myclass {
public:
	int mx;
	struct data mydata;
private:
	int my;
};

int main() {

	myclass myobject;

	myobject.mydata.k = 30;		// NO ERROR.
}
*/





// 3- Access Control ==>> Erisime acik bolgeyi ifade eder.

/*
class myclass {
public:
	int mx;
private:
	int my;
};


int main() {

	myclass myobject;

	myobject.mx = 33;	// Hata yoktur.mx public
	myobject.my = 45;	// Access kontrol hatasidir. my private
}
*/
/*
class myclass {
public:
	int mx;
private:
	int my;
};


int main() {

	myclass myobj;
	myclass* mypointer = &myobj;

	mypointer->mx = 45;		// Hata yoktur.mx public
	mypointer->my = 35;		// Access kontrol hatasidir. my private
}
*/

