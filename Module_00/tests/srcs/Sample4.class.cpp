#include "../inc/main.hpp"

Sample4::Sample4(int a1) : _Foo(a1)
{
	cout << "Constructor \e[1;34mSample4\e[0m called" << endl;
	cout << "_Foo = " << this->_Foo << endl;
	return;
}

Sample4::~Sample4(void)
{
	cout << "Destructor \e[1;34mSample4\e[0m called" << endl;
	return;
}

int		Sample4::getFoo(void) const
{
	return this->_Foo;
}

void	Sample4::setFoo(int v)
{
	if (v >= 0)
		this->_Foo = v;
	return;
}
