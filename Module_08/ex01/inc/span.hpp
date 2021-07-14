/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:49 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 14:18:42 by gvenet           ###   ########.fr       */
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
	size_t _size;
	int *_t;
	size_t _fill;
	Span(){}
	void minmax(int ref, int *ret);

public:
	Span(size_t size);
	~Span();
	void addNumber(const int nb);
	size_t size(void) const;
	int &operator[](size_t index);
	int shortestSpan(void);
	int longestSpan(void);
	void display(void) const;
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

#endif