#include "../inc/main.hpp"

Sample2::Sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) 
{
	cout << "\e[0;32mConstructor \e[1;33mSample2\e[0m called" << endl;
	cout <<"\ta1 = " << this->a1 << endl;
	cout <<"\ta2 = " << this->a2 << endl;
	cout <<"\ta3 = " << this->a3 << endl;
	return;
}

Sample2::~Sample2(void) 
{
	cout << "\e[0;31mDestructor \e[1;33mSample2\e[0m called" << endl;
	return;
}

