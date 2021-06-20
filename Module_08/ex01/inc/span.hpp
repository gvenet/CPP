#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class Span
{
private:
	size_t _size;
	int *_t;
	size_t _fill;

public:
	Span(size_t size);
	~Span();
	void addNumber(const int nb);
	size_t size(void) const;
	int &operator[](size_t index);
	int &shortestSpan(void);
	int &longestSpan(void);
	void display(void) const;
	class SpanException : public std::exception
	{
		virtual const char *what() const throw() { return "SpanException : already filled"; }
	};
};

#endif