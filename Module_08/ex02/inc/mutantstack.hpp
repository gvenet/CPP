/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:01:32 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 09:01:33 by gvenet           ###   ########.fr       */
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
	MutantStack();
	MutantStack(MutantStack<T> const &cpy);
	virtual ~MutantStack();

	MutantStack<T> &operator=(MutantStack<T> const &cpy);

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin(void);
	iterator end(void);
};

#endif
