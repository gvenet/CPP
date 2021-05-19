#include "../inc/main.hpp"

Sample3::Sample3(void)
{
	cout << "\e[0;32mConstructor \e[1;32mSample3\e[0m called" << endl;
	this->publicFoo = 0;
	cout << "\tthis->publicFoo = " << this->publicFoo << endl;
	this->_privateFoo = 0;
	cout << "\tthis->_privateFoo = " << this->_privateFoo << endl;
	
	this->publicBar();
	this->_privateBar();

	return;
}

Sample3::~Sample3(void)
{
	cout << "\e[0;31mDestructor \e[1;32mSample3\e[0m called" << endl;
	return;
}

void	Sample3::publicBar(void) const
{
	cout << "\tMember function publicBar called" << endl;
	return;
}

void	Sample3::_privateBar(void) const
{
	cout << "\tMember function _privateBar called" << endl;
	return;
}
