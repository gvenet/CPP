#include "../inc/mutantstack.hpp"

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &cpy)
{
	this->c = cpy.c;
	return *this;
}

// template <typename T>
