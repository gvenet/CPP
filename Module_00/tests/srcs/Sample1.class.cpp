#include "../inc/main.hpp"

Sample1::Sample1(float const f) : pi(f), qd(42)
{
	cout << "Constructor \e[1;31mSample1\e[0m called" << endl;
	this->bar();
	return;
}

Sample1::~Sample1(void)
{
	cout << "Desstructor \e[1;31mSample1\e[0m called" << endl;
	return;
}

void Sample1::bar(void) const
{
	cout << "this->pi = " << this->pi << endl;
	cout << "this->qd = " << this->qd << endl;
	return;
}