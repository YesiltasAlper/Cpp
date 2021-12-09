#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

/*
	Gecici nesneler,ismi olmayan ve ayni ifadede veya satirda constructor'i ve destructor'i cagrilan nesnelerdir.
	Normalde nesnelerin isimleri vardi ancak bu gecici nesneler kaynak kodda olmayip derleyici tarafindan bu gecici nesne
	yerine constructor'inin ve destructor'inin ayni ifadede cagrildigi nesne turune temporary object denir.
*/





/*
class X {
public:
	X() {
		std::cout << "Default Constructor..." << std::endl;
	}

	~X() {
		std::cout << "Destructor..." << std::endl;
	}
};

int main() {

	X obj1;

	// X turunden obj1 nesnesi.Bu nesne 28.satirda hayata gelir constructor'i cagrilir.
	// Ardindan main() bittigi zaman destructor'i cagrilir ve hayati biter.

	std::cout << "**********************" << std::endl;

	X{};		// veya X()		ancak 'X()' ifadesi fonksiyon cagrisi gibi gorundugu icin 'X{}' kullanmak daha iyidir.

	// Bu ise temporary object.Bu nesne gecici nesnedir ve bu yuzden 35.satirda hayata gelir constructor'i cagrilir.
	// Ardindan 35.satir sonunda destructor'i cagrilir ve hayati biter.

	std::cout << "**********************" << std::endl;
}
*/





/*
class X {
public:
	X() {
		std::cout << "Default Constructor..." << std::endl;
	}

	X(int value) {
		std::cout << "Parametrik Constructor..." << std::endl;
	}

	~X() {
		std::cout << "Destructor..." << std::endl;
	}
};

int main() {

	X{};

	std::cout << "**********************" << std::endl;

	X{ 15 };		// veya  X(15);	ancak 'X(15)' ifadesi fonksiyon cagrisi gibi gorundugu icin 'X{15}' kullanmak daha iyidir.

	std::cout << "**********************" << std::endl;

	X obj;

	std::cout << "**********************" << std::endl;

	// Bu kodda 66.satirda Default Constructor cagrilir ve yine ayni satirda Destructor cagrilir.
	// Ardindan 70. satirda parametreli temporary object vardir.67.satirda Parametrik Constructor cagrilir ve yine ayni satirda destructor cagrilir.
	// Daha sonra kod 74. satira gelir ve X turunden obj nesnesi olusur.
	// 74.satirda Default Constructor cagrilir ve sonrasinda main bitince obj nesnesinin destructor'i cagrilir.
}
*/
