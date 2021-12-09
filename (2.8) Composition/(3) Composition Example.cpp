#define CRT_SUCURE_NO_WARNING
#include <iostream>
#include <string>

class dateofbirth {
	int day;
	int mon;
	int year;
public:
	dateofbirth(int d, int m, int y);
	void display_date()const;
};

class student {
	std::string m_name;
	dateofbirth m_dateofbirth;		// Her ogrencinin dogum tarihi vardir.
public:
	student(std::string name, dateofbirth date);
	void display_student()const;
};

dateofbirth::dateofbirth(int d, int m, int y) :day{ d }, mon{ m }, year{ y }{

}

student::student(std::string name, dateofbirth date) : m_name{ name }, m_dateofbirth{ date } {

}

void student::display_student()const {
	std::cout << "student name : " << m_name << std::endl;
	std::cout << "*******Date info********" << std::endl;
	m_dateofbirth.display_date();
}

void dateofbirth::display_date()const {
	std::cout << "Day : " << day << std::endl;
	std::cout << "Month : " << mon << std::endl;
	std::cout << "Year : " << year << std::endl;
}


int main() {
	dateofbirth date{ 05,10,1997 };
	student student{ "Alper",date };

	student.display_student();

}
