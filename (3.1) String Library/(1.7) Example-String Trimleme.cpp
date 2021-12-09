#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

void display(const std::string& str);
void trim_left_side(std::string str1);
void trim_right_side(std::string str2);
void trim_both_side(std::string str3);


void trim_left_side(std::string str1) {
	std::cout << "Trim Left Side ===>>>" << std::endl;

	size_t index = str1.find_first_not_of('-');

	if (index != std::string::npos)
		str1.erase(0, index);

	std::cout << "Left Trimed String : " << str1 << std::endl;

	display(str1);
}

void trim_right_side(std::string str2) {
	std::cout << "Trim Right Side ===>>>" << std::endl;

	size_t index = str2.find_last_not_of('-');

	if (index != std::string::npos)
		str2.erase(index + 1);

	std::cout << "Right Trimed String : " << str2 << std::endl;

	display(str2);
}


void trim_both_side(std::string str3) {
	std::cout << "Trim Both Side ===>>>" << std::endl;

	size_t index_left = str3.find_first_not_of('-');
	if (index_left != str3.npos)
		str3.erase(0, index_left);

	size_t index_right = str3.find_last_not_of('-');
	if (index_left != str3.npos)
		str3.erase(index_right + 1);

	std::cout << "Both Side Trimed String : " << str3 << std::endl;

	display(str3);
}


void display(const std::string& str) {
	std::cout << "Size :" << str.size() << std::endl << "Length :" << str.length() << std::endl << "Capacity :" << str.capacity() << std::endl;
	std::cout << "**************************" << std::endl;
}

int main() {

	std::string str = "------------------------------alper----------------------";

	std::cout << "String " << str << std::endl;
	display(str);

	trim_left_side(str);
	trim_right_side(str);
	trim_both_side(str);
}
