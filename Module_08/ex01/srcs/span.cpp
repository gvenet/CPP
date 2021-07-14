/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:48 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 18:32:39 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/span.hpp"

Span::Span(size_t size) : _size(size), _nbFill(0)
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
	_nbFill++;
}

size_t Span::size(void) const
{
	return _size;
}

std::vector<int> *Span::getT(void) const
{
	return _t;
}

size_t Span::getNbFill(void) const
{
	return _nbFill;
}

int Span::shortestSpan(void)
{
	std::vector<int> tcpy(*_t);
	std::vector<int>::iterator it = tcpy.begin();
	std::vector<int>::iterator ite = tcpy.begin() + _nbFill;
	int tmp;
	
	std::sort (it, ite);
	if (_size < 2)
		throw ExceptionMsg("SpanException : not enought numbers");
	tmp = *++it - *(it - 1);

	while (it != ite - 1)
		if (*++it - *(it - 1) < tmp)
			tmp = *it - *(it - 1);
	return tmp;
}

int Span::longestSpan(void)
{
	std::vector<int> tcpy(*_t);
	std::vector<int>::iterator it = tcpy.begin();
	std::vector<int>::iterator ite = tcpy.begin() + _nbFill;
	std::sort (it, ite);
	if (_size < 2)
		throw ExceptionMsg("SpanException : not enought numbers");
	return (*(ite - 1) - *(it));
}

void Span::autofill(void)
{
	for (std::vector<int>::iterator it = _t->begin(); it != _ite; it++)
		addNumber(rand());
}

std::ostream &operator<<(std::ostream &o, Span const &rhs)
{
	o << "| ";
	for (std::vector<int>::iterator it = rhs.getT()->begin(); it != rhs.getT()->begin() + rhs.getNbFill(); it++)
		o << *it << " | ";
	o << std::endl;
	return o;
}
