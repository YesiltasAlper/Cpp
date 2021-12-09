#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include"number.h"

number& number::operator+=(const number& num) {		// n1+=n2		n1.operator+=(n2);			MEMBER		+1
	mx += num.mx;
	return *this;
}

number& number::operator-=(const number& num) {		// n1-=n2		n1.operator-=(n2);			MEMBER		+2
	mx -= num.mx;
	return *this;
}				

std::ostream& operator<<(std::ostream& os, number& num) {	// cout<<num	operator<<(cout,num);	(friendlik yapýldý)			GLOBAL		+3
	return (os << num.mx);
}	

std::istream& operator>>(std::istream& is, number& num) {	// cin<<num		operator>>(cin,num);	(friendlik yapýldý)			GLOBAL		+4
	return is >> num.mx;
}

number& number::operator+=(const int ival) {				// n1+=ival		n1.operator+=(ival);			MEMBER		+5
	mx += ival;
	return *this;
}

number& number::operator-=(const int ival) {				// n1-=ival		n1.operator-=(ival);			MEMBER		+6
	mx -= ival;
	return *this;
}

bool operator<(const number& num1, const number& num2) {				// n1<n2		operator<(n1,n2);			GLOBAL		+7
	return (num1.mx < num2.mx);
}		

bool operator>(const number& num1, const number& num2) {				// n1>n2		operator>(n1,n2);			GLOBAL		+8
	return (num2.mx < num1.mx);
}

bool operator<=(const number& num1, const number& num2) {				// n1<=n2		operator<=(n1,n2);			GLOBAL		+9
	return !(num2.mx < num1.mx);
}	

bool operator>=(const number& num1, const number& num2) {				// n1>=n2		operator>=(n1,n2);			GLOBAL		+10
	return !(num1.mx < num2.mx);
}	

bool operator!=(const number& num1, const number& num2) {				// n1!=n2		operator!=(n1,n2);			GLOBAL		+11
	return ((num1.mx < num2.mx) || (num2.mx < num1.mx));
}	

bool operator==(const number& num1, const number& num2) {				// n1==n2		operator==(n1,n2);			GLOBAL		+12
	return (!(num1.mx < num2.mx) && !(num2.mx < num1.mx));
}	

number number::operator+(const number& num) {				// n1+n2		n1.operator+(n2);			MEMBER		+13		
	number total;
	total.mx = mx + num.mx;
	return total;
}	

number number::operator-(const number& num) {				// n1-n2		n1.operator-(n2);			MEMBER		+14	
	number total;
	total.mx = mx - num.mx;
	return total;
}

number number::operator+(const int ival)const {				// n1+ival		n1.operator+(ival);			MEMBER		+15		
	number total;
	total.mx = mx + ival;
	return total;
}				
number number::operator-(const int ival)const {				// n1-ival		n1.operator-(ival);			MEMBER		+16		
	number total;
	total.mx = mx - ival;
	return total;
}				

number operator+(const int ival, const number& num) {		// ival+n1		operator(ival,n1);			GLOBAL		+17
	number total;
	total.mx = ival + num.mx;
	return total;
}

number operator-(const int ival, const number& num) {		// ival-n1		operator(ival,n1);			GLOBAL		+18	
	number total;	
	total.mx = ival - num.mx;
	return total;
}	

number number::operator+()const {		// n1.operator+();			MEMBER		+19		
	return *this;
}

number number::operator-() {			// n1.operator-();			MEMBER		+20	
	mx *= -1;
	return *this;
}		

number& number::operator++() {			// n1.operator++();		Prefix increment operator			MEMBER		+21
	mx += 1;
	return *this;
}	

number& number::operator--() {			// n1.operator--();		Prefix decrement operator			MEMBER		+22
	mx -= 1;
	return *this;
}	

number number::operator++(int i) {		// n1.operator++();		Postfix increment operator			MEMBER		+23
	number temp = *this;
	++(*this);
	return temp;
}

number number::operator--(int i) {		// n1.operator--();		Postfix decrement operator			MEMBER		+24
	number temp = *this;
	--(*this);
	return temp;
}

int main() {
	number n1{ 3 }, n2{ 2 };
	
	if (n1 == n2)
		std::cout << "yes";
	else
		std::cout << "no";
}