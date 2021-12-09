#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


/*
namespace ali {

	int x = 20;	// ali scope'a ait x
	int foo();

	void func() {

	}

	class A {
	public:
		int x;	// class scope'a ait x
		int y;
	};
}
*/





//**********************************************************

/*
namespace ali {
	int x = 20;
}


int main() {

	x++;

	// name look-up error olur.Cunku yukaridaki x ali scope'da.
}
*/





//**********************************************************

/*
namespace ali {
	int x = 20;
}

int x = 2;

int main() {

	x++;

	// Bu durumda derleyici icten disa dogru arama yapar. main'e bakar ve x'i bulamaz.
	// Sonra global alana bakar ve x = 2; var kodunu gorur ve x'i 3 yapar.
}
*/





//**********************************************************

/*
namespace ali {
	int x = 20;
}

namespace veli {
	int x = 40;	// int x = 20 ile int x = 40 kodlarindaki x'ler farkli namespace'lerde olduklari icin birbiriyle kesismezler.No ERROR.
}

int x = 25;

int main() {
	int x = 35;

	// Bu kodda tum x'ler farkli scopelardadir ve bu yuzden kesisme olmayacaktir.
}
*/





//**********************************************************

/*
namespace ali {
	int x = 20;
}

namespace veli {
	int x = 40;
}

int x = 25;

int main() {
	int x = 35;

	std::cout << x;

	// Icten disari dogru arama yaptigi icin x = 35 'i ekrana yazar.
}
*/





//**********************************************************

/*
namespace ali {
	int x = 20;
}

namespace veli {
	int x = 40;
}

int x = 25;

int main() {
	int x = 35;

	std::cout << ::x;	// Scope resolution operator'u kullanilarak sadece global alana bak komutu verilir.
}
*/
