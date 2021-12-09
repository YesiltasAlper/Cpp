#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class student {
	std::string m_name;
	std::string m_surname;
	static int student_counter;

public:

	std::string get_name()const;
	std::string get_surname()const;
	student(const std::string name, const std::string surname);	// parametrik constructor
	student();													// default constructor
	~student();													// destructor
	void static get_student_counter();
};


int student::student_counter = 0;


std::string student::get_name()const {
	return m_name;
}


std::string student::get_surname()const {
	return m_surname;
}


student::student(const std::string name, const std::string surname)
	:m_name{ name }, m_surname{ surname }{
	std::cout << "Parametrik Constructor Cagrildi..." << std::endl;
	(student::student_counter)++;
}


student::student() {
	std::cout << "Default Constructor Cagrildi..." << std::endl;
	(student::student_counter)++;
}


student::~student() {
	std::cout << "Destructor Cagrildi..." << std::endl;
	(student::student_counter)--;
}


void student::get_student_counter() {
	std::cout << "student count : " << student::student_counter << std::endl;
}


int main() {
	student s1("alper", "yesiltas");
	student s2("xxxx", "yyyy");

	{
		student s3;
		s3.get_name() = "aaaa";
		s3.get_surname() = "bbbb";
		student::get_student_counter();

	}	// aaaa bbbb buradan itibaren okuldan ayrilir 

	student::get_student_counter();
}
