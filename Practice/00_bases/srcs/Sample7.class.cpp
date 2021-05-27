#include "../inc/main.hpp"

Sample7::Sample7(void) : foo(0)
{
	cout << "\e[0;32mConstructor \e[1;37mSample7\e[0m called" << endl;
	return;
}

Sample7::~Sample7(void)
{
	cout << "\e[0;31mDestructor \e[1;37mSample7\e[0m called" << endl;
	return;
}

void Sample7::bar(void) const
{
	cout << "\tthis->foo = " << this->foo << endl;
	return;
}