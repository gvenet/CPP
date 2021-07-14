/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:01:32 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 19:00:35 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>(){}
	MutantStack(const T &cpy) : std::stack<T>(cpy){}
	virtual ~MutantStack(){}

	MutantStack<T> &operator=(MutantStack<T> const &s);

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin(void) {return this->c.begin();}
	const_iterator cbegin(void) {return this->c.cbegin();}
	iterator end(void) {return this->c.end();}
	const_iterator cend(void) {return this->c.cend();}
};

#endif
