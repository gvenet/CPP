#include "../inc/span.hpp"

Span::Span(size_t size) : _size(size), _fill(0)
{
	_t = new int[_size];
}

Span::~Span()
{
	delete[] _t;
}

void Span::addNumber(const int nb)
{
	if (_fill == _size)
		throw SpanException();
	_t[_fill] = nb;
	_fill++;
}

size_t Span::size(void) const
{
	return _size;
}

int &Span::operator[](size_t i)
{
	return _t[i];
}

void Span::display(void) const
{
	for (size_t i = 0; i < _size; i++)
		std::cout << _t[i] << std::endl;
}

int &Span::shortestSpan(void)
{
}

int &longestSpan(void)
{
}
