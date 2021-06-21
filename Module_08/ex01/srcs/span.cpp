#include "../inc/span.hpp"

Span::Span(size_t size) : _size(size), _fill(0)
{
	srand((unsigned)time(NULL));
	_t = new int[_size];
}

Span::~Span()
{
	delete[] _t;
}

void Span::addNumber(const int nb)
{
	if (_fill == _size)
		throw ExceptionMsg("SpanException : already filled");
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
	std::cout << "| ";
	for (size_t i = 0; i < _fill; i++)
		std::cout << _t[i] << " | ";
	std::cout << std::endl;
}

void Span::minmax(int ref, int *ret)
{
	ret[1] = 0;
	for (size_t i = 0; i < _fill; i++)
		if (ret[1] < _t[i])
			ret[1] = _t[i];
	ret[0] = ret[1];
	for (size_t i = 0; i < _fill; i++)
		if (ret[0] > _t[i] && _t[i] != ref)
			ret[0] = _t[i];
}

int Span::shortestSpan(void)
{
	int min[2];
	int tmp[2];

	if (_fill < 2)
		throw ExceptionMsg("SpanException : not enought numbers to find somme span");
	minmax(-1, min);
	minmax(min[0], tmp);
	return (tmp[0] - min[0]);
}

int Span::longestSpan(void)
{
	int m[2];

	if (_fill < 2)
		throw ExceptionMsg("SpanException : not enought numbers to find some span");
	minmax(0, m);
	return (m[1] - m[0]);
}

void Span::autofill(void)
{
	for (size_t i = _fill; i < _size; i++)
		addNumber(rand());
}