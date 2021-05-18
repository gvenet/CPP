#include "main.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
	cout << "Constructor called" << endl;
	cout <<"a1 = " << this->a1 << endl;
	cout <<"a2 = " << this->a2 << endl;
	cout <<"a3 = " << this->a3 << endl;
	return;
}

Sample2::~Sample2(void) {
	cout << "Desstructor called" << endl;
	return;
}

