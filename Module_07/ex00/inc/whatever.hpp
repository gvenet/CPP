#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
	std::cout << "x : "<< a << " | y : " << b << std::endl;
	T tmp = a;
	a = b;
	b = tmp;
	std::cout << "x : "<< a << " | y : " << b << std::endl;
}


#endif