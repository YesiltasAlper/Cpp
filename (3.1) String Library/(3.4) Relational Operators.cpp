#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

/*
	(1)		bool operator== (const string& lhs, const string& rhs) noexcept;
			bool operator== (const char*   lhs, const string& rhs);
			bool operator== (const string& lhs, const char*   rhs);

	(2)		bool operator!= (const string& lhs, const string& rhs) noexcept;
			bool operator!= (const char*   lhs, const string& rhs);
			bool operator!= (const string& lhs, const char*   rhs);

	(3)		bool operator<  (const string& lhs, const string& rhs) noexcept;
			bool operator<  (const char*   lhs, const string& rhs);
			bool operator<  (const string& lhs, const char*   rhs);

	(4)		bool operator<= (const string& lhs, const string& rhs) noexcept;
			bool operator<= (const char*   lhs, const string& rhs);
			bool operator<= (const string& lhs, const char*   rhs);

	(5)		bool operator>  (const string& lhs, const string& rhs) noexcept;
			bool operator>  (const char*   lhs, const string& rhs);
			bool operator>  (const string& lhs, const char*   rhs);

	(6)		bool operator>= (const string& lhs, const string& rhs) noexcept;
			bool operator>= (const char*   lhs, const string& rhs);
			bool operator>= (const string& lhs, const char*   rhs);
*/



void control(bool x) {
	if (x)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
}




// ************************** OVERLOAD 1 **************************


// bool operator== (const string& lhs, const string& rhs) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	bool x = (str1 == str2);
	control(x);
}
*/




// bool operator== (const char*   lhs, const string& rhs);

/*
int main() {

	const char* cstr = "alper";
	std::string str = "yesiltas";

	bool x = (cstr == str);
	control(x);
}
*/




// bool operator== (const string& lhs, const char*   rhs);

/*
int main() {

	std::string str = "alper";
	const char* cstr = "alper";

	bool x = (str == cstr);
	control(x);
}
*/




// ************************** OVERLOAD 2 **************************


// bool operator!= (const string& lhs, const string& rhs) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	bool x = (str1 != str2);
	control(x);
}
*/




// bool operator!= (const char*   lhs, const string& rhs);

/*
int main() {

	const char* cstr = "alper";
	std::string str = "yesiltas";

	bool x = (cstr != str);
	control(x);
}
*/




// bool operator!= (const string& lhs, const char* rhs);

/*
int main() {

	std::string str = "alper";
	const char* cstr = "alper";

	bool x = (str != cstr);
	control(x);
}
*/




// ************************** OVERLOAD 3 **************************


// bool operator<  (const string& lhs, const string& rhs) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	bool x = (str1 < str2);
	control(x);
}
*/




// bool operator<  (const char*   lhs, const string& rhs);

/*
int main() {

	const char* cstr = "alper";
	std::string str = "yesiltas";

	bool x = (cstr < str);
	control(x);
}
*/




// bool operator<  (const string& lhs, const char*   rhs);

/*
int main() {

	std::string str = "yesiltas";
	const char* cstr = "alper";

	bool x = (str < cstr);
	control(x);
}
*/




// ************************** OVERLOAD 4 **************************


// bool operator<= (const string& lhs, const string& rhs) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	bool x = (str1 <= str2);
	control(x);
}
*/




// bool operator<= (const char*   lhs, const string& rhs);

/*
int main() {

	const char* cstr = "alper";
	std::string str = "yesiltas";

	bool x = (cstr <= str);
	control(x);
}
*/




// bool operator<= (const string& lhs, const char*   rhs);

/*
int main() {

	std::string str = "yesiltas";
	const char* cstr = "alper";

	bool x = (str <= cstr);
	control(x);
}
*/




// ************************** OVERLOAD 5 **************************


// bool operator>  (const string& lhs, const string& rhs) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	bool x = (str1 > str2);
	control(x);
}
*/




// bool operator>  (const char*   lhs, const string& rhs);

/*
int main() {

	const char* cstr = "alper";
	std::string str = "yesiltas";

	bool x = (cstr > str);
	control(x);
}
*/




// bool operator>  (const string& lhs, const char*   rhs);

/*
int main() {

	std::string str = "yesiltas";
	const char* cstr = "alper";

	bool x = (str > cstr);
	control(x);
}
*/




// ************************** OVERLOAD 6 **************************


// bool operator>= (const string& lhs, const string& rhs) noexcept;

/*
int main() {

	std::string str1 = "alper";
	std::string str2 = "yesiltas";

	bool x = (str1 >= str2);
	control(x);
}
*/




// bool operator>= (const char*   lhs, const string& rhs);

/*
int main() {

	const char* cstr = "alper";
	std::string str = "yesiltas";

	bool x = (cstr >= str);
	control(x);
}
*/




// bool operator>= (const string& lhs, const char*   rhs);

/*
int main() {

	std::string str = "yesiltas";
	const char* cstr = "alper";

	bool x = (str >= cstr);
	control(x);
}
*/
