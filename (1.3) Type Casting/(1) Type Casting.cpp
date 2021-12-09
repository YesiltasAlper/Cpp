#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	Veri donusumleri yaparken her veri donusumunde aslinda ayni islem yapilmaz.Ornegin C++'da const olarak tanimlanmis bir degisken,const olarak tanimlanmamis bir baska degiskene atanamaz.
	Veya pointerlar arasinda cast islemi yapilabilir.Aslinda bunlar farkli turlerde cast islemleridir.Fakat bu islemlerin C'de hepsinde mantigi ayniydi (veri-turu) ifade; seklinde yapiliyordu.
	Fakat C++'da bu donusumler farkli amaclarina gore ayrilmistir.

	Ve ornegin bir ifade static cast yapilmasi gerekiyorken const cast veya bir baska veri turu donusturme uygulanirsa SYNTAX HATASI olur.

	C++'da Veri turu donusumu adi verilen bu islem iki farkli sekilde yapilabilir:

	1 =======>>>>> Ustu Kapali (Implict) Donusturme :

		Bazi donusturmeler derleyici tarafindan otomatik yapilir.Otomatik donusturme olarak da bilinen ustu kapali veri turu donusturme islemi derleyici tarafindan otomatik olarak yapilir.

	2 =======>>>>> Acik (Explicit) Donusturme (Type Casting) :

		Acik veri turu donusturme gecici veri turu donusturme (Type casting) olarak adlandirabiliriz.
		Cunku, veri turu degistirilen degisken degeri, farkli bir degiskene aktarilirken, kendi degeri ayni veri turunde kalmaktadir.

		C++'da type casting 5 sekilde yapilabilir.Ilk yol C'den kalan yoldur bu pek tercih edilmez.Diger 4 tanesi ise C++'in kendine ait type casting ozelligidir.

			1 ====>>> Standart Yontem		 C'de kullanilan standart Type Casting yontemi C++'da da gecerlidir.

			2 ====>>> static_cast			 gecici veri turu donusturme islemcisi

			3 ====>>> const_cast	   		 gecici veri turu donusturme islemcisi

			4 ====>>> reinterpret_cast		 gecici veri turu donusturme islemcisi

			5 ====>>> dynamic_cast			 gecici veri turu donusturme islemcisi
*/





/*
// 1 ========>>>> Ustu Kapali (Implict) Donusturme :


int main(){

	float fd = 21.354;
	int id;

	id = fd;	// Ustu kapali veri turu donusturme

	cout << "fd degisken degeri: " << fd << " id degisken degeri: " << id;

	// id = fd;	 atama isleminde ustu kapali veri turu donusturme islemi uygulanir. Boylece, float bir degisken degerini int veri turune donusturerek, id degiskenine atar.
	// Veri donusturme esnasinda, float degiskeninin ondalik basamaklarinda yer alan degerler otomatik olarak kesilir ve veri kaybi olur.
}
*/
		




/*
// 2 ===========>>>>> static_cast

// Bu yontem,isminden de anlasildigi gibi dinamik soz konusu olmayan durumlarda kullanilir.
// Yani calisma zamani esnasinda,donusturme islemine tabi tutulan tur'den emin olmayi gerektirir.
// Dolayisiyla derleme zamaninda bilinen tur donusumlerde bu yapi kullanilabilir.
// Farkli pointer veya referans turleri arasinda degil class turleriyle diger turler arasinda degil sadece default turler arasinda kullanilabilir.
// double int float char bool long... bunlarin arasindaki tur donusumlerinde kullanilir.
// Ayni zamanda enum int aralarinda olabilir cunku enum in elemanlari default olarak int turdendir.
// C'de bu degistirilemiyor ama C++'da default olarak int turu gelmesine ragmen enum'un elemanlarini mesela char yapabiliriz.

// OZEL DURUM (void*)'dan  (T*)' a .Burada static cast kullanilabilir.

// SYNTAX -->> static_cast <hedef veri-turu> (ifade);


int main() {

	double x = 7.21;
	double y = 15.12;
	double z = 0;

	z = (int)x + y;				// C yontem
	cout << "z : " << z <<  "\n";

	z = static_cast<int>(x) + y;	// C++
	cout << "z : " << z;
}
*/





/*
// 3 ===========>>>>> const_cast

// const_cast islemcisi, islem yapilan nesnenin sabit ve/veya volatile ozelligini kaldirir veya yeniden kazandirir.
// const_cast islemcisi, const olarak tanimlanmis bir nesnenin ilk degerini hic bir sekilde degistiremez.
// const_cast islemcisi, bir sabit nesnenin sabit durumunu dogrudan gecersiz kilmaz, sadece atanan veri turunun sabit olmayan bir sekilde tanimlanmasini saglar.

// Sadece isaretci ve referanslarla kullanilabilir.
// Sadece ayni veri turleri ile kullanilabilir.

// C++'da const olarak tanimlanmis bir degisken,const olarak tanimlanmamis bir baska degiskene atanamaz.
// Ancak "const" tanimli bir turun constlugunu yok etmek icin "const_cast" tur donusturme yapisi kullanilabilir.
// Yani bu yapi "const" olarak tanimlanmis turler uzerinden kullanilir.

// SYNTAX -->> const_cast <hedef veri-turu> (ifade);



int func(int* ptr3){
	return (*ptr3 + 10);
}

int main(void){

	const int value = 5;
	const int* ptr1 = &value;

	int* ptr2 = const_cast <int*>(ptr1);

	cout << func(ptr2);
}
*/





/*
// 4 ===========>>>>> reinterpret_cast

// reinterpret_cast islemcisi bir veri turunu tamamen farkli bir veri turune donusturur.
// Tur donusturme yapilarinda en esnek calisan yapidir.
// Bu yapiyla,her turden pointer her turden pointer'a donusturulebilir.
// Bu kadar esnek olmasindaki sebep ise aslinda bit tasiyor olmasindan kaynaklaniyor.
// Donusturulecek nesnenin bit yapisini diger nesneye kopyalar.

// Farkli pointer veya referans turleri arasinda yapilan tur donusumlerinde kullanilir.

// SYNTAX -->> reinterpret_cast <hedef veri-turu> (ifade);

int main(){

	int ival = 65;
	int *iptr;
	iptr = &ival;

	// Farkli veri turunde pointerlar arasinda donusum
	char *cptr = reinterpret_cast<char*>(iptr);
	cout << *cptr << "\n";

	// Bir veri turunu ayni veri turunden bir pointera donusturme
	int *iptr2 = reinterpret_cast<int*>(ival);
	cout << iptr2 << "\n";

	// Bir pointerdan bir veri turune donusum
	long int lival = reinterpret_cast<long>(iptr2);
	cout << lival << "\n";

	// Farkli veri turunde pointerlar arasinda donusum
	double dval2 = 10.3;
	double* dptr = &dval2;
	int* ptr = reinterpret_cast<int*>(dptr);
}
*/

