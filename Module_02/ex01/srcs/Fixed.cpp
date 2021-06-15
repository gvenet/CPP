/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:43:23 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 10:43:33 by gvenet           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

//==============DESTRUCTOR

Fixed::~Fixed()
{
	std::cout << "destructor called " << std::endl;
}

//==============CONSTRUCTORS

Fixed::Fixed() : _fixPt(0)
{
	std::cout << "default constructor called " << std::endl;
}

Fixed::Fixed(Fixed const &i)
{
	std::cout << "copy constructor called " << std::endl;
	this->operator=(i);
}

Fixed::Fixed(int const i)
{
	std::cout << "int constructor called " << std::endl;
	this->_fixPt = i << Fixed::_bits;
}

Fixed::Fixed(float const i)
{
	std::cout << "float constructor called " << std::endl;
	this->_fixPt = roundf(i * (1 << Fixed::_bits));
}

//===============FONCTIONS MEMBRES

int Fixed::getRawBits(void) const
{
	return this->_fixPt;
}

int Fixed::setRawBits(int const raw)
{
	return this->_fixPt = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixPt / (float)(1 << Fixed::_bits));
}

int Fixed::toInt(void) const
{
	return this->_fixPt >> Fixed::_bits;
}

//===============OERATORS

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "operator= called " << std::endl;

	if (this != &rhs)
		this->_fixPt = rhs.getRawBits();
	return *this;
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
