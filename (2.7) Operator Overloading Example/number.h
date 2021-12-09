#pragma once
#include <iostream>

class number {
	int mx;
public:
	number() = default;
	explicit number(int ival) :mx{ ival }{}

	number& operator+=(const number& num);				// n1+=n2		n1.operator+=(n2);		+1			MEMBER
	number& operator-=(const number& num);				// n1-=n2		n1.operator-=(n2);		+2			MEMBER

	friend std::ostream& operator<<(std::ostream& os, number& num);		// cout<<num	operator<<(cout,num);	+3				GLOBAL	
	friend std::istream& operator>>(std::istream& is, number& num);		// cin<<num		operator>>(cin,num);	+4				GLOBAL	

	number& operator+=(const int ival);					// n1+=ival		n1.operator+=(ival);	+5			MEMBER
	number& operator-=(const int ival);					// n1-=ival		n1.operator-=(ival);	+6			MEMBER

	friend bool operator<(const number& num1, const number& num2);		// n1<n2		n1.operator<(n2);	+7			GLOBAL
	friend bool operator>(const number& num1, const number& num2);		// n1>n2		n1.operator>(n2);	+8			GLOBAL
	friend bool operator<=(const number& num1, const number& num2);		// n1<=n2		n1.operator<=(n2);	+9			GLOBAL
	friend bool operator>=(const number& num1, const number& num2);		// n1>=n2		n1.operator>=(n2);	+10			GLOBAL
	friend bool operator!=(const number& num1, const number& num2);		// n1!=n2		n1.operator!=(n2);	+11			GLOBAL
	friend bool operator==(const number& num1, const number& num2);		// n1==n2		n1.operator==(n2);	+12			GLOBAL

	number operator+(const number& num);				// n1+n2		n1.operator+(n2);		+13			MEMBER
	number operator-(const number& num);				// n1-n2		n1.operator-(n2);		+14			MEMBER

	number operator+(const int ival)const;				// n1+ival		n1.operator+(ival);		+15			MEMBER
	number operator-(const int ival)const;				// n1-ival		n1.operator-(ival);		+16			MEMBER

	friend number operator+(const int ival, const number& num);	// ival+n1		ival.operator(n1);	+17			GLOBAL
	friend number operator-(const int ival, const number& num);	// ival-n1		ival.operator(n1);	+18			GLOBAL

	number operator+()const;	// n1.operator+();		burasý + ile çarpacak iþaret deðiþtirecek ama sonucta etkisiz eleman bu yüzden const;	+19			MEMBER
	number operator-();			// n1.operator-();		burasý - ile çarpacak iþaret deðiþtirecek	+20			MEMBER

	number& operator++();		// ++n1;	n1.operator++();		Prefix increment operator	+21			MEMBER
	number& operator--();		// --n1;	n1.operator--();		Prefix decrement operator	+22			MEMBER

	number operator++(int i);	// n1++;						Postfix increment operator		+23			MEMBER
	number operator--(int i);	// n1--;						Postfix decrement operator		+24			MEMBER

};

std::ostream& operator<<(std::ostream& os, number& num);		// cout<<num	operator<<(cout,num);	(friendlik yapýldý)		+3			GLOBAL
std::istream& operator>>(std::istream& is, number& num);		// cin<<num		operator>>(cin,num);	(friendlik yapýldý)		+4			GLOBAL

bool operator<(const number& num1, const number& num2);			// n1<n2		operator<(n1,n2);	+7	(friendlik yapýldý)			GLOBAL
bool operator>(const number& num1, const number& num2);			// n1>n2		operator>(n1,n2);	+8	(friendlik yapýldý)			GLOBAL
bool operator<=(const number& num1, const number& num2);		// n1<=n2		operator<=(n1,n2);	+9	(friendlik yapýldý)			GLOBAL
bool operator>=(const number& num1, const number& num2);		// n1>=n2		operator>=(n1,n2);	+10	(friendlik yapýldý)			GLOBAL
bool operator!=(const number& num1, const number& num2);		// n1!=n2		operator!=(n1,n2);	+11	(friendlik yapýldý)			GLOBAL
bool operator==(const number& num1, const number& num2);		// n1==n2		operator==(n1,n2);	+12	(friendlik yapýldý)			GLOBAL

number operator+(const int ival, const number& num);	// ival+n1		operator(ival,n1);	(friendlik yapýldý)	+17			GLOBAL
number operator-(const int ival, const number& num);	// ival-n1		operator(ival,n1);	(friendlik yapýldý)	+18			GLOBAL



	

