#include "../inc/main.hpp"

Sample5::Sample5(int a1) : _Foo(a1)
{
	cout << "Constructor \e[1;35mSample5\e[0m called" << endl;
	cout << "_Foo = " << this->_Foo << endl;
	return;
}

Sample5::~Sample5(void)
{
	cout << "Destructor \e[1;35mSample5\e[0m called" << endl;
	return;
}

int		Sample5::getFoo(void) const
{
	return this->_Foo;
}

int	Sample5::compare(Sample5 * other) const
{
	if (this->_Foo < other->getFoo())
		return (-1);
	else if (this->_Foo > other->getFoo())
		return (1);
	return (0);
}
