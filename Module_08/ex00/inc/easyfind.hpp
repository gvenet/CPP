#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <list>

template <typename T>
typename T::iterator easyfind(T &container, int tofind)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), tofind);
	if (it == container.end())
		std::cout << tofind << " is not in container";
	else
		std::cout << tofind << " is in container";
	std::cout << std::endl;
	return it;
}

#endif