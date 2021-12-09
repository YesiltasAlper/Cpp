#include<iostream>
using namespace std;

/*
void c_swap(int* p1, int* p2) {		// CALL BY REFERENCE YAPISI

	int temp;

	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main() {

	int x = 20 , y = 50;

	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";

	cout << "****" << endl;

	c_swap(&x, &y);

	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
}
*/



/*
void c_plus_plus_swap(int &r1, int &r2) {

	int temp;

	temp = r1;
	r1 = r2;
	r2 = temp;
}

int main() {

	int x = 20, y = 50;

	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";

	cout << "****" << endl;

	c_plus_plus_swap(x, y);

	cout << "x=" << x << "\n";
	cout << "y=" << y << "\n";
}
*/



/*
struct data {
	int x, y;
};

void clear_data(struct data* d) {		// CALL BY REFERENCE YAPISI
	d->x = 0;
	d->y = 0;
}

int main() {

	struct data mydata = { 20,100 };

	cout << "mydata.x : " << mydata.x << endl;
	cout << "mydata.y : " << mydata.y << endl;

	cout << "***************" << endl;

	clear_data(&mydata);

	cout << "mydata.x : " << mydata.x << endl;
	cout << "mydata.y : " << mydata.y << endl;
}
*/



/*
struct data {
	int x, y;
};

void clear_data (struct data &d) {
	d.x = 0;
	d.y = 0;
}

int main() {

	struct data mydata = { 20,100 };

	cout << "mydata.x : " << mydata.x << endl;
	cout << "mydata.y : " << mydata.y << endl;

	cout << "***************" << endl;

	clear_data(mydata);

	cout << "mydata.x : " << mydata.x << endl;
	cout << "mydata.y : " << mydata.y << endl;
}
*/

