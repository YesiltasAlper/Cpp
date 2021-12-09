#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<cstdlib>   

using namespace std;


char* my_itoa(int value, char* str, int base = 16) {

	cout << "******" << endl;
	return _itoa(value, str, base);
}

int main() {

	char string[100];

	my_itoa(25, string);
	cout << string << endl;


	my_itoa(25, string,2);
	cout << string << endl;


	my_itoa(25, string, 8);
	cout << string << endl;


	my_itoa(25, string, 10);
	cout << string << endl;
}
