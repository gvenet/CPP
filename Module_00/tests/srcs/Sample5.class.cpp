#include "../inc/main.hpp"

Sample5::Sample5(int a1) : _Foo(a1)
{
	cout << "\e[0;32mConstructor \e[1;35mSample5\e[0m called" << endl;
	cout << "\t_Foo = " << this->_Foo << endl;
	return;
}

Sample5::~Sample5(void)
{
	cout << "\e[0;31mDestructor \e[1;35mSample5\e[0m called" << endl;
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
