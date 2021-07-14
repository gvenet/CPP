#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>(){};
	MutantStack(MutantStack<T> const &cpy) : std::stack<T>(cpy){};
	virtual ~MutantStack() {}

	MutantStack<T> &operator=(MutantStack<T> const &cpy);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void);
	iterator end(void);

};

#endif
