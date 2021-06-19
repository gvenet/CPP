#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void display(T const &f)
{
	std::cout << "| " << f << "\t";
}

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &f))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

#endif