/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:49 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 19:48:11 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <exception>
#include <random>
#include <ctime>
#include <limits>
#include <vector> 

class Span
{
private:
	size_t const _size;
	size_t _nbFill;
	std::vector<int> *_t;
	std::vector<int>::iterator _it;
	Span() : _size(0){}

public:
	Span(size_t size);
	~Span();
	void addNumber(const int nb);
	size_t size(void) const;
	std::vector<int> *getT(void) const;
	size_t getNbFill(void) const;
	int shortestSpan(void);
	int longestSpan(void);
	void autofill(void);
	
	class ExceptionMsg : public std::exception
	{
	private:
		std::string _msg;

	public:
		ExceptionMsg(std::string const &msg) : _msg(msg) {}
		virtual ~ExceptionMsg() throw() {}
		virtual const char *what() const throw() { return _msg.c_str(); }
	};
};

std::ostream &operator<<(std::ostream &o, Span const &rhs);

#endif