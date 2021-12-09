#define CRT_SUCURE_NO_WARNING
#include <iostream>


// ***********CONSTRUCTOR -1


/*
class battery {
	int mx;
	battery() {
		std::cout << "Default Constructor of battery class" << std::endl;
	}
};


class mobile {
	battery btry;		// Her cep telefonun bir bataryasi vardir.Composition."Has a relationship".
public:
	mobile() {
		std::cout << "Default Constructor of mobile class" << std::endl;
	}
};


int main() {

	mobile mymobile;

	// mobile turden mymobile nesnesi olusturuldugunda mymobile icin constructor cagrilacak.Ancak mobile turden olusacak olan nesnenin ayni zamanda battery turden btry nesnesi de
	// oldugu icin btry nesnesi icin de constructor'in cagrilmasi gereklidir.Ancak battery class'inin constructor'ini private bolumdedir.
	
	// Bu bir problemdir cunku battery icin constructor olusturma cagrisi mobile class'inin icinden yapilmistir ve bu durumda battery'nin sadece public ogelerine erisim saglanabilir.
	// Client kodlardan erisim saglandigi icin eger battery'nin constructor'i public'de olmazsa btry nesnesi mobile class'inin icinde olusturulamaz.
}
*/





// ***********CONSTRUCTOR -2


/*
class battery {
	int mx;
public:
	battery() {			// PUBLIC
		std::cout << "Default Constructor of battery class" << std::endl;
	}
};


class mobile {
	battery btry;		// btry nesnesinin public-private'da olmasi constructor'i etkilemez.Bu nesnenin olusabilmesi icin constructor'i public olmalidir.
public:
	mobile() {
		std::cout << "Default Constructor of mobile class" << std::endl;
	}
};


int main() {

	mobile mymobile;

	// Battery constructor mobile constructordan daha once cagrildi.
	// Cunku mobile class'inin olusabilmesi icin ilk once battery turunden btry nesnesi olusmalidir.
}
*/





// ***********CONVERTING CONSTRUCTOR - 1


/*
class battery {
	int mx;
public:
	battery() {
		std::cout << "Default Constructor of battery class" << std::endl;
	}

	battery(int value) {
		std::cout << "Converting Constructor of battery class" << std::endl;
	}
};


class mobile {
	battery btry;		
public:
	mobile() {
		std::cout << "Default Constructor of mobile class" << std::endl;
	}

	mobile(int value) {
		std::cout << "Converting Constructor of mobile class -->>  "<<value << std::endl;
	}
};


int main() {

	mobile mymobile{ 10 };

	// mobile class'inin olusabilmesi icin ilk once battery turunden btry nesnesi olusmalidir ve eger converting constructor'i cagiracak ozel bir sey yapmazsak
	// default olarak default constructor cagrilacaktir.Bu sebeple ilk olarak battery class'inin default constructor'i cagrildi.
	// Ardindan mobile class'inin converting constructor'i cagrildi.
}
*/





// ***********CONVERTING CONSTRUCTOR - 2


/*
class battery {
	int mx;
public:
	battery() {
		std::cout << "Default Constructor of battery class" << std::endl;
	}

	battery(int val) {
		std::cout << "Converting Constructor of battery class -->>  "<<val << std::endl;
	}
};


class mobile {
	battery btry;		
public:
	mobile() :btry{ 50 } {
		std::cout << "Default Constructor of mobile class" << std::endl;
	}

	mobile(int value) {
		std::cout << "Converting Constructor of mobile class" << std::endl;
	}
};


int main() {

	mobile mymobile;

	// mobile icin default constructor'i cagrilarak battery icin MIL Syntax'i kullanilarak converting constructor cagrildi.
}
*/





// ***********CONVERTING CONSTRUCTOR - 3


/*
class battery {
	int mx;
public:
	battery() {
		std::cout << "Default Constructor of battery class" << std::endl;
	}

	battery(int val) {
		std::cout << "Converting Constructor of battery class -->>  " << val << std::endl;
	}
};


class mobile {
	battery btry;		
public:
	mobile(){
		std::cout << "Default Constructor of mobile class" << std::endl;
	}

	mobile(int value) :btry{ value } {
		std::cout << "Converting Constructor of mobile class -->>   " << value << std::endl;
	}
};


int main() {

	mobile mymobile{ 50 };

	// mobile icin converting constructor cagrilarak battery icin de converting constructor cagrilmistir.
	// Mobile'da MIL Syntax'i ile aldigi parametre degerini MIL Syntax'i ile val'e kopyalar.
}
*/





// ***********DESTRUCTOR


/*
class battery {
	int mx;
public:
	battery() {
		std::cout << "Default Constructor of battery class" << std::endl;
	}

	battery(int val) {
		std::cout << "Converting Constructor of battery class -->>  " << val << std::endl;
	}

	~battery() {
		std::cout << "Destructor of battery class" << std::endl;
	}
};


class mobile {
	battery btry;
public:
	mobile(){
		std::cout << "Default Constructor of mobile class" << std::endl;
	}

	mobile(int value) :btry{ value } {
		std::cout << "Converting Constructor of mobile class -->>   " << value << std::endl;
	}

	~mobile() {
		std::cout << "Destructor of mobile class" << std::endl;
	}
};


int main() {

	mobile mymobile;

	// Ilk once mobile class'inin icindeki battery turunden btry nesnesinin olusabilmesi icin btry icin constructor cagrilmistir.
	// Ardindan mobile class'i icin constructor cagrilmistir ve daha sonra last -in first-out mantigiyla destruct edilmistir.
}
*/
