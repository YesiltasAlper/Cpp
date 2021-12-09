#define _CRT_SECURE_NO_WARNINGS
#include <iostream>



/*
namespace Car {

	int speed;

	namespace bmw {
		int bmw_x;
	}

	// Nested Namespace olabilir.Burada bmw_x adli ogeye, Car namespace'inin bmw namespace'inin bwm_x; adli ogesi seklinde erisilebilir. lazim.
}
*/





//*************************************************************

/*
namespace veli {

	int counter;

	void foo() {
		cout << "Hello Veli" << endl;
	}

	// cout arandi ve bulunamadi.Bu sebeple name look-up error.
}
*/





//********************* YONTEM - 1 ****************************

/*
using namespace std;	// std namespace'inde oldugundan cout'a erisebiliyoruz ve syntax hatasi olmuyor.

namespace veli {

	int counter;

	void foo() {
		cout << "Hello Veli" << endl;
	}
}

int main() {
	counter;	// name look up error
	foo();		// name look up error
}
*/





//********************* YONTEM - 2 ****************************

/*
using namespace std;

namespace veli {

	int counter;

	void foo() {
		cout << "Hello Veli" << endl;
	}
}

using namespace veli;

int main() {
	counter;	// NO ERROR
	foo();		// NO ERROR
}
*/





//********************* YONTEM - 3 ****************************

/*
using namespace std;

namespace veli {

	int counter;

	void foo() {
		cout << "Hello Veli" << endl;
	}
}

using veli::foo;

int main() {
	counter = 30;	// ERROR
	foo();			// NO ERROR
}
*/





//********************* YONTEM - 4 ****************************

/*
namespace veli {

	int counter;

	void foo() {
		std::cout << "Hello Veli" << std::endl;
		std::cout << "counter : " << counter << std::endl;
	}
}


int main() {

	veli::counter = 30;		// Veli namespace'in counter'i
	veli::foo();			// Veli namespace'in foo();
}
*/





//********************* ORNEK - 1 ****************************

/*
namespace veli {
	int counter = 20;
	void foo() {
		std::cout << "Hello Veli" << std::endl;
	}
}


int main() {

	int counter = 10;

	counter++;

	std::cout << counter;
}
*/





//********************* ORNEK - 2 ****************************

/*
using namespace std;

namespace veli {
	int counter = 20;
	void foo() {
		cout << "Hello Veli" << endl;
	}
}

using namespace veli;

int counter = 10;

int main() {

	counter++;

	// Bu durumda counter kac yazacak ?

	cout << counter;

	// Syntax hatasi olur.Cunku using namespace veli; koduyla veli namespace'de bulunan counter da gorulur olmustur.
	// Bu yuzden derleyici counter++; koduyla hangi counter'in arttirilacagina karar veremez.
}
*/





//********************* ORNEK - 2 COZUM -1 ****************************

/*
using namespace std;

namespace veli {
	int counter = 20;
	void foo() {
		cout << "Hello Veli" << endl;
	}
}

using namespace veli;

int counter = 10;

int main() {

	::counter++;

	cout << ::counter;

	// Scope Resolution Operatoru ile global alanda bulunan counter'i arttirir.
}
*/





//********************* ORNEK - 2 COZUM -2 ****************************

/*
using namespace std;

namespace veli {
	int counter = 20;
	void foo() {
		cout << "Hello Veli" << endl;
	}
}

using namespace veli;

int counter = 10;

int main() {

	(veli::counter)++;			// veli namespace'inin counter'i arttirilir.

	cout << veli::counter;		// veli namespace'inin counter'i ekrana yazdirilir.

	// Burada da namespace veli'de bulunan counter'i arttirdik.
}
*/





//********************* TEK TEK BELIRTME - 1****************************

/*
namespace veli {
	int counter = 20;
	void foo() {
		std::cout << "Hello Veli" << std::endl;
	}
}

using namespace veli;

int counter = 10;

int main() {
	(veli::counter)++;
	std::cout << "veli_counter : " <<veli::counter<<std::endl;

	(::counter)++;
	std::cout << "other_counter : " <<::counter << std::endl;
}
*/





//********************* TEK TEK BELIRTME - 2****************************

/*
namespace veli {
	int counter = 20;
	void foo() {
		std::cout << "Hello Veli" << std::endl;
	}
}

namespace ali {
	int counter = 15;
	void foo() {
		std::cout << "Hello Ali" << std::endl;
	}
}

int counter = 10;

int main() {

	int counter = 5;

	(counter)++;
	std::cout << "main counter : " << counter << std::endl << std::endl;

	(::counter)++;
	std::cout << "global counter : " << ::counter << std::endl << std::endl;

	(ali::counter)++;
	std::cout << "ali counter : " << ali::counter << std::endl << std::endl;

	(veli::counter)++;
	std::cout << "veli counter : " << veli::counter << std::endl << std::endl;

}
*/

