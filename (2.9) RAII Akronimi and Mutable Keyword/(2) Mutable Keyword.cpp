#define CRT_SUCURE_NO_WARNING
#include <iostream>


/*
class student {
	std::string m_name;
public:
	const std::string& get_name()const {		// Bu fonksiyon aldigi ismi geri dondurecek bu yuzden const ve hicbir class member'inda degisIklik yapmayacak bu yuzden const.

		// m_name = "alp";						// syntax hatasi olur cunku degistirilemez.Get amacli kullanildigi icin const koyulmalidir.
		return m_name;
	}
};


int main() {

	// Const keywordleri degistirmeden class'in icinde herhangi bir seyi degistirmek isteyebiliriz.
	// Boyle bir durum olabilir.Mesela counter tutmak isteyelim.
}
*/





/*
class student {
	std::string m_name;
	int counter = 0;
public:
	const std::string& get_name()const {
		counter++;								
		return m_name;
	}
};

int main() {
	// Fonksiyonun sonuna const koyarak class'in icindeki hicbir member'i degistirmeyecek dedik.
	// Get amacli olan fonksiyonda const keywordu kullanimi dogrudur ancak counter degiskeni class icinde oldugundan ERROR.
}
*/





/*
int counter = 0;

class student {
	std::string m_name;
public:
	const std::string& get_name()const {
		counter++;							
		return m_name;
	}
};


int main() {

	// Bu kodda sorun yok ama karisIk bir programda counter degiskeninin class'in counter'i oldugu anlasilamayabilir.
}
*/





/*
class student {
	std::string m_name;
	mutable int counter = 0;
public:
	const std::string& get_name()const {
		counter++;
		return m_name;
	}
};


int main() {

	// Mutable keywordu bu tarz const fonksiyonlarin icinde mutable olarak tanimlanan degiskenlerin degistirilmesini sagliyor.
	// Const fonksiyonun icinde sadece sayici isleminin yapilmasi icin o degiskene const fonksiyonun icinde degisIklik yapabilme hakki veriyor.
	// Bu kodda hala m_name degiskeni degistirilirse syntax hatasi olacaktir."mutable" keywordu sadece kullanildigi degiskeni degistirilebilir yapar.
}
*/
