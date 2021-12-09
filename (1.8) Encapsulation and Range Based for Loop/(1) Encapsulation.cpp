#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*
	Encapsulation,nesneye yonelimli programlamada herhangi bir nesnenin metotlarini, verilerini ve degiskenlerini 
	diger nesnelerden saklayarak ve bunlara erisimini sinirlandirarak yanlis kullanimlardan koruyan bir konsepttir.
*/


class myclass {
private:
	int num;
public:
	void set(int a) {
		num = a;
	}
	void get()const {
		cout << "num : " << num << endl;
	}
};

int main() {

	myclass obj1;

	//	obj1.num = 15;		// ERROR.

	obj1.set(15);
	obj1.get();
}

// myclass'in num; ogesinin client kodlardan gizlenmesine encapsulation denir.
// Bu ogeye erismek icin get ve set metodlari yazilir.
