#include "main.hpp"

Sample1::Sample1(void) {
	cout << "Constructor Sample1 called" << endl;

	this->foo = 42;
	cout << "this->foo: " << this->foo << endl;

	this->bar();

	return;
}

Sample1::~Sample1(void) {
	cout << "Desstructor Sample1 called" << endl;
	return;
}

void	Sample1::bar(void) {
	cout << "Member function Sample1 called" << endl;
	return;
}