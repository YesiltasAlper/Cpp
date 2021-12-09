#define CRT_SUCURE_NO_WARNING
#include <iostream>
#include <cstdlib>


/*
	Akronim,bazi sozcuklerin bas harflerini alarak olusturulmus kelimeye kisaltmaya denir.
	Programlama dillerinde de yazilimda da bu tarz akronimler vardir.Her dilde akronimler olabilir.RAII akronimi de C++'da bunlardan biridir.

	RAII Akroniminin bazi kurallari vardir ve bu kurallara uyulmalidir.
*/



/*
class myclass {
	int a;
	double b;
	int* ptr;
public:
	myclass() {
		a = 10;			// Burada yapilan islemler constructor'in icinde bile olsa
		b = 20.5;		// ilk deger verme islemi degildir atama islemidir.
		ptr = &a;
	}
};

int main() {

}
*/





/*
class myclass {
	int a = 10;			// Burada yapilan islemler ilk deger verme islemidir.
	double b = 20.5;	// ve inclass initializer list denir.
	int* ptr = &a;	
public:
	myclass() {
	}
};

int main() {

}
*/





/*
class myclass {
	int a;
	double b;
	int* ptr;
public:
	myclass() :a{ 10 }, b{ 20.5 }, ptr{ &a } {

	}
};

int main() {

	// Eger bir class nesnesinin kaynak elde etmesi gerekiyorsa,RAII akronimine gore bu islem ilk deger verme yoluyla yapilmalidir.
	// Buna gore burada MIL Syntax'i kullanildi.Bazi kaynaklari elde ettikten sonra bu kaynaklari kendimiz geri vermemiz gerekebilir.
}
*/





/*
class myclass {
	int* ptr;
public:
	myclass() : ptr{ static_cast<int*>(malloc(sizeof(int) * 5)) } {
		std::cout << "constructor" << std::endl;
																					
	}

	~myclass() {
		std::cout << "Destructor" << std::endl;

		if (!ptr)
			free(ptr);
	}
};

int main() {

	std::cout << "main basladi" << std::endl;

	myclass obj;

	std::cout << "main sonlandi" << std::endl;

	// RAII akronimine gore heap'den bellek tahsis edildiginde bizim destructor'i yazmamiz gereklidir.Cunku biz yazmazsak derleyici destructor yazsa bile bu destructor'da
	// tahsis edilen alan free edilmeyecektir.Bu yuzden bunu geri vermek bizim yonetimimizdedir.
}
*/
