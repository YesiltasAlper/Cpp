#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
class patern {
public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() {
		std::cout << "child constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild;

	// Kod ilk once mychild nesnesini olusturabilmek icin child constructor'a gider ve daha sonra
	// child constructor'in olusabilmesi icin de oncelikle patern class olusmalidir.
	// Bu sebeple once patern constructor cagrilir.Ardindan child constructor cagrilir
	// ve en son patern destructor cagrilacagi icin child destructor cagrilir.
}
*/





/*
class patern {

	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

public:

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() {
		std::cout << "child constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild;

	// Kod ilk once mychild nesnesini olusturabilmek icin child constructor'a gider ve daha sonra
	// child constructor'in olusabilmesi icin de oncelikle patern class olusmalidir.
	// Ancak patern constructor private bolumde oldugu icin client kodlardan ve child class'lardan erisim yoktur.
	// Bu sebeple patern constructor olusturulamaz ve mychild nesnesi de olusmaz.ERROR.
}
*/





/*
class patern {

public:

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}

protected:

	patern() {
		std::cout << "patern constructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() {
		std::cout << "child constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild;

	// Kod ilk once mychild nesnesini olusturabilmek icin child constructor'a gider ve daha sonra
	// child constructor'in olusabilmesi icin de oncelikle patern class olusmalidir.Bu durumda
	// patern constructor protected bolumde olsa bile child class'lardan erisim oldugu icin
	// hata olusmaz ve mmychild nesnesi olusturulur.
}
*/





/*
class patern {
public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() {
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) {
		std::cout << "child (int y) converting constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild{ 10 };

	// Child class'in converting constructor'ina cagri yapilsa bile default olarak patern class'in default constructor'i cagrilir.
}
*/





/*
class patern {
public:
	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() {
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) {
		std::cout << "child (int y) converting constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild{ 10 };

	// Child class'in converting constructor'ina cagri yapilsa bile default olarak patern class'in default constructor'i cagrilir.
	// Destructor ve converting constructor yazildiktan sonra derleyici default constructor'i kendisi yazmayacaktir.
	// Bu durumda patern class'in default constructor'i olmadigi icin mychild nesnesi olusturulamaz.
}
*/





/*
class patern {
public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
		std::cout << "patern (int x) x : " << x << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child(){
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) :patern{ y } {
		std::cout << "child (int y) converting constructor..." << std::endl;
		std::cout << "child(int y) y : " << y << std::endl;
	}

	~child(){
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild{ 10 };

	// child mychild{ 10 }; kodundan sonra kod child converting constructor'a gidecektir ancak converting constructor'in olusabilmesi icin
	// oncelikle patern class olusmalidir.Bu durumda default olarak patern class'in default constructor'ina cagri yapiliyordu ancak
	// child converting constructor'da 	child(int y) :patern{ y } kodu ile MIL Syntax'i ile patern class'in converting constructor cagrisi yapildi.
}
*/





/*
class patern {
public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
		std::cout << "patern (int x) x : " << x << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() :patern{ 25 } {
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) :patern{ y } {
		std::cout << "child (int y) converting constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild;

	// Kod ilk once mychild nesnesini olusturabilmek icin child constructor'a gider ve daha sonra
	// child constructor'in olusabilmesi icin de oncelikle patern class olusmalidir.
	// Bu durumda default olarak patern class'in default constructor'ina cagri yapiliyordu ancak
	// child() :patern{ 25 } kodu ile patern class'in converting constructor'i cagrilmistir.
}
*/





/*
class patern {
	int patern_mx;
	int patern_my;
public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
		std::cout << "patern (int x) x : " << x << std::endl;
	}

	patern(int x, int y) {
		std::cout << "patern (int x , int y)..." << std::endl;
		std::cout << "x : " << x << " y : " << y << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
public:
	child() {
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) :patern{ y } {
		std::cout << "child (int y) converting constructor..." << std::endl;
	}

	child(int a, int b) :patern{ a,b } {
		std::cout << "child (int a , int b)..." << std::endl;
		std::cout << " a : " << a << " b : " << b << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild1{ 4 };
	std::cout << "****************************************" << std::endl;
	child mychild2{ 10,20 };
	std::cout << "****************************************" << std::endl;
}
*/





/*
class patern {

public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
		std::cout << "patern (int x) x : " << x << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};

class child :public patern {
	patern c_patern;			// object
public:
	child(){
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) :patern{ y } {
		std::cout << "child (int y) converting constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild1{ 4 };
	std::cout << "****************************************" << std::endl;
}
*/





/*
class X {
public:
	X() {
		std::cout<<"X default constructor" << std::endl;
	}

	~X() {
		std::cout << "X destructor" << std::endl;
	}
};


class patern {

public:
	patern() {
		std::cout << "patern constructor..." << std::endl;
	}

	patern(int x) {
		std::cout << "patern (int x) converting constructor..." << std::endl;
		std::cout << "patern (int x) x : " << x << std::endl;
	}

	~patern() {
		std::cout << "patern destructor..." << std::endl;
	}
};


class child :public patern {
	X x_mx;						// object
	patern c_patern;			// object
public:
	child(){
		std::cout << "child constructor..." << std::endl;
	}

	child(int y) :patern{ y } {
		std::cout << "child (int y) converting constructor..." << std::endl;
	}

	~child() {
		std::cout << "child destructor..." << std::endl;
	}
};

int main() {

	child mychild1{ 4 };
	std::cout << "*****************************" << std::endl;
}
*/
