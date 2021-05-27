#include "../inc/main.hpp"

Sample1::Sample1(float const f) : pi(f), qd(42)
{
	cout << "\e[0;32mConstructor \e[1;31mSample1\e[0m called" << endl;
	this->bar();
	return;
}

Sample1::~Sample1(void)
{
	cout << "\e[0;31mDestructor \e[1;31mSample1\e[0m called" << endl;
	return;
}

void Sample1::bar(void) const
{
	cout << "\tthis->pi = " << this->pi << endl;
	cout << "\tthis->qd = " << this->qd << endl;
	return;
}