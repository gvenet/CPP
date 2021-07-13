/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:19 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 08:12:41 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/convert.hpp"

Convert::Convert(char const *cc)
	: _fVal(std::strtof(cc, NULL)), _precisionFlag(PRECISIONINACTIV), _cFlag(DISPLAYABLE)
{
	std::string tests[3] = {"nan", "-inf", "inf"};
	std::string testf[3] = {"nanf", "-inff", "inff"};

	_str = cc;
	for (int i = 0; i < 3; i++)
		if (_str == testf[i])
			_str.pop_back();
	for (int i = 0; i < 3; i++)
		if (_str == tests[i])
			_cFlag = EXCEPT;
	if (_cFlag == DISPLAYABLE)
		parse();
	fillVar();
}

Convert::Convert(Convert const &cpy)
{
	*this = cpy;
}

Convert &Convert::operator=(Convert const &op)
{
	_fVal = op._fVal;
	_iVal = op._iVal;
	_dVal = op._dVal;
	_cVal = op._cVal;
	_precisionFlag = op._precisionFlag;
	_cFlag = op._cFlag;
	_str = op._str;
	return *this;
}

Convert::~Convert()
{
}


void Convert::fillVar(void)
{
	_iVal = static_cast<int>(_fVal);
	_dVal = static_cast<double>(_fVal);
	if (_cFlag == DISPLAYABLE)
	{
		if (std::isprint(_iVal) && _iVal < 256)
			_cVal = static_cast<char>(_iVal);
		else
			_cFlag = NONDISPLAYABLE;
	}
	if (_fVal / _iVal != 1)
		_precisionFlag = PRECISIONACTIV;
}

void Convert::parse(void)
{
	bool dotIter = false;

	if (_str.length() > 1)
	{
		if (_str.front() == '-')
			_str.erase(0);
		if (_str.back() == 'f')
			_str.pop_back();
		for (unsigned long i = 0; i < _str.length(); i++)
			if (!std::isdigit(_str.at(i)))
			{
				if (_str.at(i) != '.' || dotIter == true)
					_cFlag = IMPOSSIBLE;
				dotIter = true;
			}
	}
	else if (!std::isdigit(_str.front()))
		_fVal = static_cast<int>(_str.front());
}

std::ostream &operator<<(std::ostream &os, Convert const &rhs)
{
	//================================CHAR===================================
	os << "char   : ";
	if (rhs.getCFlag() == Convert::NONDISPLAYABLE)
		os << "Non displayable" << std::endl;
	else if (rhs.getCFlag() == Convert::IMPOSSIBLE || rhs.getCFlag() == Convert::EXCEPT)
		os << "impossible" << std::endl;
	else
		os << rhs.getC() << std::endl;
	//================================INT====================================
	os << "int    : ";
	if (rhs.getCFlag() == Convert::IMPOSSIBLE || rhs.getCFlag() == Convert::EXCEPT)
		os << "impossible" << std::endl;
	else
		os << rhs.getI() << std::endl;
	//===========================FLOAT/DOUBLE================================
	if (rhs.getPrecisionFlag() == Convert::PRECISIONINACTIV || !rhs.getF())
		os << "float  : " << rhs.getF() << ".0f" << std::endl
		   << "double : " << rhs.getD() << ".0" << std::endl;
	else if (rhs.getCFlag() == Convert::IMPOSSIBLE)
		os << "float  : impossible" << std::endl
		   << "double : impossible" << std::endl;
	else if (rhs.getCFlag() == Convert::EXCEPT)
		os << "float  : " << rhs.getStr() << "f" << std::endl
		   << "double : " << rhs.getStr() << std::endl;
	else
		os << "float  : " << rhs.getF() << "f" << std::endl
		   << "double : " << rhs.getD() << std::endl;
	return os;
}
