/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 10:43:11 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 10:43:14 by gvenet           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixPt;
	static const int _bits = 8;

public:
	Fixed();
	Fixed(int const i);
	Fixed(float const i);
	Fixed(Fixed const &i);
	virtual ~Fixed();

	Fixed &operator=(Fixed const &rhs);

	int getRawBits(void) const;
	int setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif
