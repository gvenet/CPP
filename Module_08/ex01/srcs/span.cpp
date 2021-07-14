/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:48 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 16:59:24 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/span.hpp"

Span::Span(size_t size) : _size(size)
{
	srand((unsigned)time(NULL));
	_t = new std::vector<int>(_size);
	_ite = _t->end();
	_it = _t->begin();
}

Span::~Span()
{
	delete _t;
}

void Span::addNumber(const int nb)
{
	if (_it == _ite)
		throw ExceptionMsg("SpanException : already filled");
	*_it++ = nb;
}

size_t Span::size(void) const
{
	return _size;
}

std::vector<int> *Span::getT(void) const
{
	return _t;
}

int Span::shortestSpan(void)
{
	int tmp;
	std::vector<int>::iterator it = _t->begin();
	std::sort (_t->begin(), _t->end());

	if (_size < 2)
		throw ExceptionMsg("SpanException : not enought numbers");
	tmp = *it - *it++;
	while (it != _ite)
		if (*it - *it++ > tmp)
			tmp = (*it - 1) - *it;
	return tmp;
}

int Span::longestSpan(void)
{
	std::vector<int>::iterator it = _t->begin();
	std::sort (_t->begin(), _t->end());
	if (_size < 2)
		throw ExceptionMsg("SpanException : not enought numbers");
	return (*_ite - *it);
}

void Span::autofill(void)
{
	for (std::vector<int>::iterator it = _t->begin(); it != _ite; it++)
		addNumber(rand());
}

std::ostream &operator<<(std::ostream &o, Span const &rhs)
{
	o << "| ";
	for (std::vector<int>::iterator it = rhs.getT()->begin(); it != rhs.getT()->end(); it++)
		o << *it << " | ";
	o << std::endl;
	return o;
}
