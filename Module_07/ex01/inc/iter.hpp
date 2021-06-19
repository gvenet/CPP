#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
#include <string>

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};

std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
{
	o << rhs.get();
	return o;
}

template <typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}



//=================================================================
template <typename T>
void display(T const &disp)
{
	std::cout << "| " << disp << "\t";
}

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &f))
{
	for (size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

#endif