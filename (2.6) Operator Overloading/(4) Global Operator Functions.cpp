#define _CRT_SECURE_NO_WARNINGS
#include<iostream>



/*
class myclass {
public:
	myclass operator+(const myclass& number)const;		// Member operator function
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(const myclass& number)const {

	std::cout << "operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}

int main() {

	myclass m1, m2;
	m1 + m2;			// m1.operator+(m2);	Member operator function
}
*/





/*
class myclass {
public:
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass& operator+(const myclass& n1, const myclass& n2) {		// Global operator function
	std::cout << "operator+(const myclass& n1, const myclass& n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}

int main() {

	myclass m1, m2;
	m1 + m2;			
	
	// operator+(m1,m2);	 Global operator function.
	// Kod bu durumda  myclass& operator+(const myclass& n1, const myclass& n2);	fonksiyonuna gidecektir.
	// Global operator fonksiyonlarda iki parametre olmalidir member operator fonksiyonlarda tek.
}
*/





/*
class myclass {
public:
	myclass operator+(const myclass& n)const;					// Member operator function
};

myclass& operator+(const myclass& n1, const myclass& n2);		// Global operator function

int main() {

	myclass m1, m2;
	m1 + m2;

	// Eger bu sekide ayni gorevi yapan hem member operator function hem de global operator function yazilirsa bu durumda
	// ambiquity hatasi olusacaktir.Cunku derleyici m1+m2; kodunu arka planda member operator function'a gore mi
	// m1.operator+(m2) yoksa global operator function'a gore mi operator+(m1,m2) cevirecegini bilemeyecektir.
}
*/





/*
class myclass {
public:
	myclass operator+(const myclass& n)const;					// Member operator function
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(const myclass& number)const {		// Member operator function

	std::cout << "MEMBER operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass& operator+(const myclass& n1, const myclass& n2) {		// Global operator function
	std::cout << "GLOBAL operator+(const myclass& n1, const myclass& n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	myclass m1, m2;

	// m1 + m2;				// ERROR. Derleyici hangisine cagri yapacagini bilemez.Ambiquity hatasi.

	m1.operator+(m2);		// Derleyici'ye member operator function'a cagri yap demis oluruz. myclass operator+(const myclass& n)const; cagrilir.

	operator+(m1, m2);		// Derleyici'ye global operator function'a cagri yap demis oluruz. myclass& operator+(const myclass& n1, const myclass& n2); cagrilir.


	// Bizim icin ayni isi yapacak fonksiyon icin ayni anda hem global hem de member operator overloading fonksiyonu yazdigimizda cagri yapmanin yolu bu sekildedir.
	// ancak yine de bunu yapmak tercih edilmez.
	// Ayrica m1+m2; yazmak yerine m1.operator+(m2); yazarak member operator func'a cagri yapmak veya operator+(m1, m2); yazip global operator func'a cagri yapmak kod yazmayi zorlastirir.
	// Ayrica m1.operator+(m2); veya operator+(m1, m2); gibi zor kodlari yazmak yerine m1+m2; gibi kolay kod yazmayi operator overloading sayesinde yapariz.
	// Operator overloading'in faydalarindan yararlanacagiz ve bir fonksiyonu hem global hem de member operator overloading fonksiyonu olarak yazmayip birini digerine tercih edecegiz.
	// Bir fonksiyon neden global operator function olarak yazilir veya neden member operator function olarak yazilir bunlara goz atalim.
}
*/





// ****************************** IKI TANE CLASS NESNESI YERINE BIR CLASS NESNESI VE INT TURDEN DEGISKEN ARASINDA YAPILAN ISLEMLER ******************************


/*
class myclass {
public:
	myclass operator+(int number)const;		// Member operator function
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(int number)const {		// Member operator function

	std::cout << "operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	myclass m1, m2;

	m1 + 10;		//	m1.operator(10); member operator function.	myclass operator+(int number)const;	cagrilir.

	// Bu durumda derleyici bir sorun yasamaz cunku soldaki nesne class turunden bir nesne oldugu icin m1. kodunda
	// operator+ fonksiyonuna derleyici cagri yapabilir.

	//	10 + m1;		// ERROR.Sadece member operator function yazili oldugu icin derleyici arka planda 10.operator(m1); diye

	// bir cagri yapmaya calisir ancak "10" class nesnesi olmadigi icin bu durumda operator+ fonksiyonunu derleyici arka planda cagiramaz.
	// Member operator function bize bu sorunu getirir.Iki tane class turden nesne olmadiginda yer degistirme yapilirsa durum basarisiz olur.
	// Bu durumda global operator funciton'a ihtiyac vardir.Eger iki tane class nesnesi arasinda islem yapilmiyorsa ve yer degisimi
	// oldugu zaman etkilenme oluyorsa member operator fonksiyon yerine global operator fonksiyon tercih edilmelidir.
}
*/





/*
class myclass {
public:
	myclass operator+(int number)const;				// Member operator function
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass myclass::operator+(int number)const {		// Member operator function

	std::cout << "MEMBER operator+(const myclass& number)const cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass operator+(int n1, myclass& n2) {			// Global operator function

	std::cout << "GLOBAL operator+(int n1, myclass& n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}

int main() {
	myclass m1, m2;

	m1 + 10;		// Bu kod icin tek secenek member operator function oldugu icin derleyici bu kodu m1.operator(10); kodu olarak cevirerek
					// myclass operator+(int number)const; kodunun cagrilmasini saglar.

	10 + m1;		// Bu kod icin tek secenek global operator function oldugu icin derleyici bu kodu operator+(10,m1); kodu olarak cevirerek
					// myclass operator+(int n1, myclass& n2); kodunun cagrilmasini saglar.

	// 10+m1; kodu icin global operator fonksiyon yazilmalidir.Baska bir secenek yoktur ve bu yuzden 10+m1 kodu icin global operator fonksiyon yazilmistir.
	// Eger m1 + 10; kodu icin de member operator function yazilmak istenmezse o zaman m1+10; icin de bir tane global operator function yazilmalidir.
	// 10+m1; kodunun ilk parametresi int turden ikinci parametresi myclass turden ve m1+10; kodunun ise ilk parametresi myclass turden ikinci parametresi int turden olacak.
}
*/





/*
class myclass {
public:
};


myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass operator+(int n1, myclass& n2) {			// Global operator function -1

	std::cout << "GLOBAL operator+(int n1, myclass& n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass operator+(myclass& n1, int n2) {			// Global operator function -2

	std::cout << "GLOBAL operator+(myclass& n1, int n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	myclass m1, m2;

	10 + m1;			// Bu kod icin sadece global operator function oldugu icin derleyici arka planda operator+(10,m1); seklinde cevirir.Global operator function -1
	m1 + 10;			// Bu kod icin sadece global operator function oldugu icin derleyici arka planda operator+(m1,10); seklinde cevirir.Global operator function -2
}
*/





// ****************** KENDI CLASS'IMIZ TURUNDEN NESNELERI STANDART OUTPUT'A YAZDIRIRKEN KENDI OPERATOR FONKSIYONLARIMIZI GLOBAL OLARAK OLUSTURMALIYIZ ******************


/*
class myclass {
public:
};

myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass operator+(int n1, myclass& n2) {			// Global operator function -1

	std::cout << "GLOBAL operator+(int n1, myclass& n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass operator+(myclass& n1, int n2) {			// Global operator function -2

	std::cout << "GLOBAL operator+(myclass& n1, int n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


int main() {

	// std::cout << 15;		// Boyle bir operator fonksiyonu oldugu icin yazdirabildi sorun yok

	myclass obj1;

	// std::cout << obj1;	// Bu kodu ekrana yazdiramadi cunku ostream class'inda bulunan cout'un class turunden bir operator fonksiyonu yok.

	// Class turden operatorleri standart giris cikis akimina vermemiz gerektiginde kendi operator fonksiyonlarimi yazmamiz lazim.
	// Yazacagimiz bu operator fonksiyonlari da global olmalidir cunku biz C++'in kendi standart kutuphanesine mudahale edilemez.
	// Zaten "operator<<" fonksiyonu tanimlanmistir.Biz kendi class'imizin icine "operator<<"  fonksiyonu ekleyemeyiz cunku bu zaten standarttir.
}
*/





/*
class myclass {
public:
};

myclass X;			// Sadece return hatasi almamak icin olusturulmus nesne


myclass operator+(int n1, myclass& n2) {							// Global operator function -1

	std::cout << "GLOBAL operator+(int n1, myclass& n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


myclass operator+(myclass& n1, int n2) {							// Global operator function -2

	std::cout << "GLOBAL operator+(myclass& n1, int n2) cagrildi..." << std::endl;
	return X;		// Sadece return hatasi almamak icin yazilmis kod
}


std::ostream& operator<<(std::ostream& os, const myclass& n1) {		// inserter function
}			


std::istream& operator>>(std::istream& is, myclass& n2) {			// extructor function
}				


int main() {

}
*/

