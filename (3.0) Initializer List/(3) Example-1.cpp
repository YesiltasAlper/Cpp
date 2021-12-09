#define CRT_SUCURE_NO_WARNING
#include <iostream>


/*
void foo(std::initializer_list<int> x) {

	for (int i : x)
		std::cout << i << std::endl;

	std::cout << "size : " << x.size() << std::endl;
	std::cout << "begin : " << *x.begin() << std::endl;
}

int main() {

	std::initializer_list<int> init = { 2,4,6,8,10 };

	foo(init);

	std::cout << "\n\n";

	foo({ 1,2,3,4,5,6,7 });		
}
*/





/*
class myclass {
public:
	myclass() = default;
	myclass(int x, int y) {
		std::cout << "Myclass (int x,int y)" << std::endl;
	}
	myclass(int x,int y,std::initializer_list<int> a){
		std::cout << "myclass (int x,int y,initializer_list<int> a)" << std::endl;
	}
	void const get_size_begin(std::initializer_list<int> a)const;
};

const void myclass::get_size_begin(std::initializer_list<int> a)const {
	std::cout << "size : " << a.size() << std::endl;
	std::cout << "begin : " << *a.begin() << std::endl;
}

int main() {

	myclass m1{ 2,4 };
	myclass m2{ 2,4,{4,5,8} };

	m2.get_size_begin({ 4,5,8 });

	//************VEYA**************

	std::initializer_list<int>x{ 10,15,20,25,30 };
	myclass m3{ 1,2,x };

	m3.get_size_begin(x);
}
*/





/*
class myclass {
public:
	myclass() = default;
	myclass(int x, int y) {
		std::cout << "Myclass (int x,int y)" << std::endl;
	}
	myclass(int x, int y, std::initializer_list<std::string> a) {
		std::cout << "myclass (int x,int y,initializer_list<std::string> a)" << std::endl;
	}
	void const get_size_begin(std::initializer_list<std::string> a)const;
};

const void myclass::get_size_begin(std::initializer_list<std::string> a)const {
	std::cout << "size : " << a.size() << std::endl;
	std::cout << "begin : " << *a.begin() << std::endl;
}

int main() {
	myclass m1{ 2,4 };

	myclass m2{ 2,4,{"alper","yesiltas"}};
	m2.get_size_begin({"alper","yesiltas"});

	//************VEYA**************

	std::initializer_list<std::string>x{"as","vcs","sadsd","sdsc"};
	myclass m3{ 1,2,x };
	m3.get_size_begin(x);
}
*/
