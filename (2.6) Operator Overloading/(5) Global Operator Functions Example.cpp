#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>


class complex_number {
	double im, re;
public:
	complex_number(double img = 0, double real = 0);
	void print_numbers()const;
	friend bool operator<(const complex_number& num1, const complex_number& num2);	// Global Operator Function
};


complex_number::complex_number(double img, double real) :im{ img }, re{ real }{
}


bool operator<(const complex_number& num1, const complex_number& num2) {			// Global Operator Function

	double complex1 = sqrt(pow(num1.im, 2) + pow(num1.re, 2));
	double complex2 = sqrt(pow(num2.im, 2) + pow(num2.re, 2));

	return (complex1 < complex2);
}


void complex_number::print_numbers()const {		

	static int j = 1;
	std::cout << "Number " << j << " : " << re << " + " << im << "i" << std::endl;
	j++;
}


int main() {

	complex_number c1{ 3.2,4.7 };
	complex_number c2{ 4.2,4.4 };

	c1.print_numbers();
	c2.print_numbers();

	std::cout << "***************" << std::endl;

	if (c1 < c2)
		std::cout << "First number is less than second number" << std::endl;
	else
		std::cout << "First number is greater than second number" << std::endl;
}

