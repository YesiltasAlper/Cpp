#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	push_back ==>>
		void push_back (char c);


	append ==>>
		string (1)				string& append (const string& str);
		substring (2)			string& append (const string& str, size_t subpos, size_t sublen);
		c-string (3)			string& append (const char* s);
		buffer (4)				string& append (const char* s, size_t n);
		fill (5)				string& append (size_t n, char c);
		range (6)				template <class InputIterator>	string& append (InputIterator first, InputIterator last);
		initializer list(7)		string& append (initializer_list<char> il);

	Her iki fonksiyon da sondan ekleme yapar.
	Push_back sadece string sonuna tek karakter ekleyebilirken append'in 7 overload'i vardir.
*/



void display(const std::string& str) {
	std::cout << "String :" << str << std::endl << "Size :" << str.size() << std::endl << "Length :" << str.length() << std::endl << "Capacity :" << str.capacity() << std::endl;
	std::cout << "**************************" << std::endl;
}



// ***************************************push_back ==>>***********************************************

/*
int main() {

	std::string str1 = "Alper";

	display(str1);
	str1.push_back('Y');
	display(str1);
}
*/





//***************************************append ==>>***********************************************

// string (1)				string& append (const string& str);

/*
int main() {

	std::string str1 = "Alper";

	display(str1);

	std::string str2 = " Yesiltas";

	str1.append(str2);
	display(str1);
}
*/





// substring(2)			string& append(const string & str, size_t subpos, size_t sublen);

/*
int main() {
	
	std::string str1 = "Alper";

	display(str1);

	std::string str2 = " Yesiltas";

	str1.append(str2, 2, 3);			// str2'nin 2.karakterinden itibaren baslar ve 3 karakter ileri giderek str1'in sonuna ekler.
	display(str1);
}
*/





// c-string (3)			string& append (const char* s);

/*
int main() {

	std::string str1 = "Alper";

	display(str1);

	str1.append(" yesiltas");
	display(str1);
}
*/





// buffer (4)				string& append (const char* s, size_t n);

/*
int main() {

	std::string str1 = "Alper";

	display(str1);

	str1.append(" yesiltas", 6);		// En bastan itibaren 6 adim ilerler ve bunu str1'in sonuna ekler
	display(str1);
}
*/





// fiil (5)				string& append (size_t n, char c);

/*
int main() {

	std::string str1 = "Alper";

	display(str1);

	str1.append(5, 'a');	// fill constructor n tane c'yi olusturur.
	display(str1);			// Ekleme islemi oldugu icin str1'in sonuna 5 tane a'yi ekler.
}
*/





// range (6)				template <class InputIterator>	string& append (InputIterator first, InputIterator last);

/*
int main() {

	std::string str1 = "Alper";

	display(str1);

	std::string str2 = "yesiltas";
	str1.append(str2.begin() + 1, str2.end() - 2);		// str2'nin ikinci karakterinden itibaren str'nin sondan 2. karakterine kadar olan araliktaki
	display(str1);										// karakterleri alir ve str'in sonuna ekler.
}
*/





/*
// initializer list(7)		string& append(initializer_list<char> il);

int main() {

	std::string str1 = "Alper";

	display(str1);

	str1.append({ ' ','y','e','s','i','l','t','a','s' });
	display(str1);
}
*/
