#include "main.hpp"

Sample1::Sample1(void) {
	cout << "Constructor called" << endl;

	this->foo = 42;
	cout << "this->foo: " << this->foo << endl;

	this->bar();

	return;
}

Sample1::~Sample1(void) {
	cout << "Desstructor called" << endl;
	return;
}

void	Sample1::bar(void) {
	cout << "Member function called" << endl;
	return;
}