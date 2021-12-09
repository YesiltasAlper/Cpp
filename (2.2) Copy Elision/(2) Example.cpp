#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>

std::vector<int> foo() {

	std::vector<int> ivec(6000);
	return ivec;
}

int main() {

	std::vector<int> x = foo();		// Named Return Value Optimization (NRVO)
}

// Copy elision olmasaydi 6000 tane elemean x'e kopyalanacakti.Ancak copy elision sayesinde 6000 tane eleman x'e kopyalanmiyor.
// Bu sayede performans artisi sagliyor.
// 6000 tane elemanin,kod foo(); fonksiyonundan cikinca destructor'i cagrilacaktir.Bu yuzden derleyici optimizasyon yaparak
// nesnenin destructor'i cagrilmadan once kodu std::vector<int> x = ivec; haline getirir ve kopyalama yapmaz.
