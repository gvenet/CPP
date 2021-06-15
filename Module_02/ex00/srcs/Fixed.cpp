/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:42:40 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 10:42:44 by gvenet           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _fixPt(0)
{
	std::cout << this->identify() << " default constructor called " << std::endl;
}

Fixed::Fixed(Fixed const &i)
{
	std::cout << this->identify() << " copy constructor called " << std::endl;
	this->operator=(i);

	return;
}

Fixed::~Fixed()
{
	std::cout << this->identify() << " destructor called " << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << this->identify() << " getRawBits called " << std::endl;
	return this->_fixPt;
}

int Fixed::setRawBits(int const raw)
{
	return this->_fixPt = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << this->identify() << " operator= called " << std::endl;

	if (this != &rhs)
		this->_fixPt = rhs.getRawBits();
	return *this;
}

std::string Fixed::identify(void) const
{
	const void *address = static_cast<const void *>(this);
	std::stringstream ss;
	ss << address;
	std::string name = ss.str();
	return (name);
}
