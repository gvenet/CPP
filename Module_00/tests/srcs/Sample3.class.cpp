#include "../inc/main.hpp"

Sample3::Sample3(void)
{
	cout << "Constructor \e[1;32mSample3\e[0m called" << endl;
	this->publicFoo = 0;
	cout << "this->publicFoo = " << this->publicFoo << endl;
	this->_privateFoo = 0;
	cout << "this->_privateFoo = " << this->_privateFoo << endl;
	
	this->publicBar();
	this->_privateBar();

	return;
}

Sample3::~Sample3(void)
{
	cout << "Destructor \e[1;32mSample3\e[0m called" << endl;
	return;
}

void	Sample3::publicBar(void) const
{
	cout << "Member function publicBar called" << endl;
	return;
}

void	Sample3::_privateBar(void) const
{
	cout << "Member function _privateBar called" << endl;
	return;
}
