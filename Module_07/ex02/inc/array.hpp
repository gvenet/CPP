#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>
#include <exception>

template <typename T>
class Array
{
private:
	size_t _size;
	T *_tptr;

public:
	Array() : _size(0), _tptr(nullptr)
	{
	}

	Array(size_t n) : _size(n)
	{
		_tptr = new T[n];
	}

	Array(Array<T> const &cpy)
	{
		if (cpy._size > 0)
		{
			_size = cpy._size;
			_tptr = new T[cpy._size];
			for (size_t i = 0; i < _size; i++)
				_tptr[i] = cpy._tptr[i];
		}
	}

	virtual ~Array()
	{
		delete[] _tptr;
	}

	Array &operator=(Array<T> const &op)
	{
		_size = op._size;
		if (_size > 0)
		{
			delete[] _tptr;
			_tptr = new T[op._size];
			for (size_t i = 0; i < _size; i++)
				_tptr[i] = op._tptr[i];
		}
		return *this;
	}

	T &operator[](size_t i)
	{
		if (i >= _size)
			throw limitArrayException();
		return _tptr[i];
	}

	void display(void)
	{
		std::cout << "| ";
		for (size_t i = 0; i < _size; i++)
			std::cout  << _tptr[i] << " | ";
	}

	size_t size(void) const
	{
		return _size;
	}

	T *address(void) const
	{
		return _tptr;
	}

	class limitArrayException : public std::exception
	{
		virtual const char *what() const throw() { return "the array index is out of range"; }
	};


};

#endif