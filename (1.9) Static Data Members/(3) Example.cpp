#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class apartment_resident {
	std::string name;
	std::string sur_name;
	int door_no;
	const static int maintenance_fee = 30;
public:
	void set();
	void get();
};

void apartment_resident::set() {

	std::cout << "Person Name : ";
	std::cin >> name;
	std::cout << "Person Surname : ";
	std::cin >> sur_name;
	std::cout << "Person Door No : ";
	std::cin >> door_no;

	std::cout << "*******************" << std::endl;
}

void apartment_resident::get() {

	std::cout << "Person Name : " << name << std::endl;
	std::cout << "Person Surname : " << sur_name << std::endl;
	std::cout << "Person Door No : " << door_no << std::endl;
	std::cout << "Person Maintenance Fee : " << maintenance_fee << " TL" << std::endl;

	std::cout << "********************************" << std::endl;
}

int main() {

	apartment_resident person1, person2;

	person1.set();
	person2.set();

	person1.get();
	person2.get();
}
