#include "../inc/main.hpp"

Sample6::Sample6(void)
{
	cout << "\e[0;32mConstructor \e[1;36mSample6\e[0m called" << endl;
	Sample6::_nbInst += 1;
	return;
}

Sample6::~Sample6(void)
{
	cout << "\e[0;31mDestructor \e[1;36mSample6\e[0m called" << endl;
	Sample6::_nbInst -= 1;
	return;
}

int		Sample6::getnbInst(void)
{
	return Sample6::_nbInst;
}

int		Sample6::_nbInst = 0;
