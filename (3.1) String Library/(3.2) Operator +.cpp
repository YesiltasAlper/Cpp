#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	//	Operator "+" ->>	GLOBAL OPERATOR OVERLOADING FUNCTION

	string (1)		string operator+ (const string& lhs, const string& rhs);
					string operator+ (string&&      lhs, string&&      rhs);
					string operator+ (string&&      lhs, const string& rhs);
					string operator+ (const string& lhs, string&&      rhs);


	c-string (2)	string operator+ (const string& lhs, const char*   rhs);
					string operator+ (string&&      lhs, const char*   rhs);
					string operator+ (const char*   lhs, const string& rhs);
					string operator+ (const char*   lhs, string&&      rhs);


	character (3)	string operator+ (const string& lhs, char          rhs);
					string operator+ (string&&      lhs, char          rhs);
					string operator+ (char          lhs, const string& rhs);
					string operator+ (char          lhs, string&&      rhs);
*/





//************************************ string(1) ************************************


// string operator+ (const string& lhs, const string& rhs);

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";
	std::string str3;

	str3 = str1 + str2;		// str3 = operator+(str1,str2);

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl << "str3 : " << str3 << std::endl;
}
*/





// string operator+ (string&&      lhs, string&&      rhs);

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";
	std::string str3;

	str3 = move(str1) + move(str2);		// str3 = operator+(move(str1),move(str2));

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (string&&      lhs, const string& rhs);

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";
	std::string str3;

	str3 = move(str1) + (str2);		// str3 = operator+(move(str1),str2);

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (const string& lhs, string&&      rhs);

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";
	std::string str3;

	str3 = (str1)+move(str2);		// str3 = operator+(str1,move(str2));

	std::cout << "str1 : " << str1 << std::endl << "str2 : " << str2 << std::endl << "str3 : " << str3 << std::endl;
}
*/


	


//************************************ c-string(2) ************************************


//	string operator+ (const string& lhs, const char*   rhs);

/*
int main() {

	std::string str1 = "alper";
	const char* cstr = "yesiltas";
	std::string str3;

	str3 = str1 + cstr;		// str3 = operator+(str1,cstr);

	std::cout << "str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (string&&      lhs, const char*   rhs);

/*
int main() {

	std::string str1 = "alper";
	const char* cstr = "yesiltas";
	std::string str3;

	str3 = move(str1) + cstr;	// str3 = operator+(move(str1),cstr);

	std::cout << "str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (const char*   lhs, const string& rhs);

/*
int main() {

	std::string str1 = "alper";
	const char* cstr = "yesiltas";
	std::string str3;

	str3 = cstr + str1;		// str3 = operator+(cstr,str1);

	std::cout << "str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (const char*   lhs, string&&      rhs);

/*
int main() {

	std::string str1 = "alper";
	const char* cstr = "yesiltas";
	std::string str3;

	str3 = cstr + move(str1);	// str3 = operator+(cstr,move(str1));

	std::cout << "str1 : " << str1 << std::endl << "cstr : " << cstr << std::endl << "str3 : " << str3 << std::endl;
}
*/


	


//************************************ character(3) ************************************


//	string operator+ (const string& lhs, char          rhs);

/*
int main() {

	std::string str1 = "alper";
	char ch = 'A';
	std::string str3;

	str3 = str1 + ch;			// str3 = operator+(str1,ch);

	std::cout << "str1 : " << str1 << std::endl << "ch : " << ch << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (string&&      lhs, char          rhs);

/*
int main() {

	std::string str1 = "alper";
	char ch = 'A';
	std::string str3;

	str3 = move(str1) + ch;		// str3 = operator+(move(str1),ch)

	std::cout << "str1 : " << str1 << std::endl << "ch : " << ch << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (char          lhs, const string& rhs);

/*
int main() {

	std::string str1 = "alper";
	char ch = 'A';
	std::string str3;

	str3 = ch + str1;			// str3 = operator+(ch,str1);

	std::cout << "str1 : " << str1 << std::endl << "ch : " << ch << std::endl << "str3 : " << str3 << std::endl;
}
*/





//	string operator+ (char          lhs, string&&      rhs);

/*
int main() {

	std::string str1 = "alper";
	char ch = 'A';
	std::string str3;

	str3 = ch + move(str1);			// str3 = operator+(ch,move(str1));

	std::cout << "str1 : " << str1 << std::endl << "ch : " << ch << std::endl << "str3 : " << str3 << std::endl;
}
*/
