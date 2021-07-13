/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:16 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 08:13:13 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <exception>

class Convert
{
private:
	float		_fVal;
	int			_iVal;
	double		_dVal;
	char		_cVal;
	int			_precisionFlag;
	int			_cFlag;
	std::string _str;
	Convert();
	void parse(void);
	void fillVar(void);

public:
	Convert(char const *str);
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &op);
	virtual ~Convert();

	float getF(void) const {return _fVal;}
	int getI(void) const {return _iVal;}
	double getD(void) const {return _dVal;}
	char getC(void) const{return _cVal;}
	int getCFlag(void) const {return _cFlag;}
	int getPrecisionFlag(void) const {return _precisionFlag;}
	std::string getStr(void) const {return _str;}

	enum precisionFlag
	{
		PRECISIONINACTIV,
		PRECISIONACTIV,
	};

	enum charDisplayFlag
	{
		DISPLAYABLE,
		NONDISPLAYABLE,
		IMPOSSIBLE,
		EXCEPT
	};
};

std::ostream &operator<<(std::ostream &os, Convert const &rhs);

#endif