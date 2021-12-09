#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>


/*
	// Copy ->>

	size_t copy (char* s, size_t len, size_t pos = 0) const;

	// String turunden bir yaziyi char* turune kopyalar.
*/



/*
int main() {
	
	std::string str1 = "Hava bugun iyi gibi disari cikalim mi musait misin";
	char buffer[150];

	size_t index = str1.copy(buffer, 4);

	std::cout << "Kopyalanan karakter sayisi : " << index << std::endl << "Buffer : " << buffer << std::endl;

	// Copy fonksiyonu geri donus degeri olarak kopyalanan karakter sayisini dondurur.Buffer'i ekrana bastirmaya calisinca tanimsiz davranis oldu.
	// Cunku string turunde '\0' null karakteri yoktur ancak char* turune cevrildigi icin yazinin sonunda '\0' olmalidir.
}
*/



/*
int main() {

	std::string str1 = "Hava bugun iyi gibi disari cikalim mi musait misin";
	char buffer[150];

	size_t index = str1.copy(buffer, 4);
	buffer[index] = '\0';

	std::cout << "Kopyalanan karakter sayisi : " << index << std::endl << "Buffer : " << buffer << std::endl;
}
*/
