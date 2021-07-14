/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:33:45 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 19:23:49 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

//=================================================================
template <typename T>
void display(T const &disp)
{
	std::cout << "| " << disp << "\t";
}

template <typename T>
void iter(T *array, size_t size, void (*f)(T const &f))
{
	for (size_t i = 0; i < size; i++)
		(*f)(array[i]);
}

#endif