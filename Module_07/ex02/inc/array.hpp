/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:33:55 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 19:36:50 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	Array() : _size(0), _tptr(NULL)
	{
	}

	Array(size_t n) : _size(n), _tptr(NULL)
	{
		_tptr = new T[n]();
	}

	Array(Array<T> const &cpy)
	{
		if (cpy._size > 0)
		{
			_tptr = new T[cpy._size]();
			for (size_t i = 0; i < _size; i++)
				_tptr[i] = cpy._tptr[i];
		}
		_size = cpy._size;
	}

	virtual ~Array()
	{
		if (_size > 0)
			delete[] _tptr;
	}

	Array &operator=(Array<T> const &op)
	{
		_size = op._size;
		if (_size > 0)
		{
			delete[] _tptr;
			_tptr = new T[op._size]();
			for (size_t i = 0; i < _size; i++)
				_tptr[i] = op._tptr[i];
		}
		return *this;
	}

	T &operator[](size_t i) const
	{
		if (i >= _size)
			throw limitArrayException();
		return _tptr[i];
	}

	size_t size(void) const
	{
		return _size;
	}

	class limitArrayException : public std::exception
	{
		virtual const char *what() const throw() { return "the array index is out of range"; }
	};
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &rhs)
{
	o << "| ";
	for (size_t i = 0; i < rhs.size(); i++)
		o << rhs[i] << " | ";
	o << std::endl;
	return o;
}

#endif