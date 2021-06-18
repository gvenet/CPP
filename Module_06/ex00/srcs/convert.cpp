#include "../inc/convert.hpp"

Convert::Convert(char const *cc) : _input(std::strtof(cc, NULL)), _precisionFlag(PRECISIONINACTIV), _cFlag(DISPLAYABLE)
{
	std::string str = cc;
	if (str.length() > 1)
	{
		for (unsigned long i = 0; i < str.length(); i++)
			if (!std::isdigit(str.at(i)) && str.at(i) != '.')
				throw ExceptionMsg("Type unknown");
	}
	this->fillVar();
}

Convert::Convert(Convert const &cpy) : _input(cpy._input)
{
}

Convert::~Convert()
{
}

float Convert::getF(void) const
{
	return (this->_input);
}

int Convert::getI(void) const
{
	return (this->_iVal);
}
double Convert::getD(void) const
{
	return (this->_dVal);
}
char Convert::getC(void) const
{
	return (this->_cVal);
}

int Convert::getCFlag(void) const
{
	return (this->_cFlag);
}

int Convert::getPrecisionFlag(void) const
{
	return (this->_precisionFlag);
}

void Convert::fillVar(void)
{

	this->_fVal = _input;
	this->_iVal = static_cast<int>(this->_fVal);
	this->_dVal = static_cast<double>(this->_fVal);
	if (std::isprint(this->_iVal))
		this->_cVal = static_cast<char>(this->_iVal);
	else
		this->_cFlag = NONDISPLAYABLE;
	if (this->_fVal / this->_iVal != 1)
		this->_precisionFlag = PRECISIONACTIV;
}

std::ostream &operator<<(std::ostream &os, Convert const &rhs)
{

	os << "c : ";
	if (rhs.getCFlag() == Convert::NONDISPLAYABLE)
		os << "Non displayable" << std::endl;
	else if (rhs.getCFlag() == Convert::IMPOSSIBLE)
		os << "Impossible" << std::endl;
	else
		os << rhs.getC() << std::endl;

	os << "i : " << rhs.getI() << std::endl;

	// os << "TEST : " << rhs.getPrecisionFlag() << std::endl;

	if (rhs.getPrecisionFlag() == Convert::PRECISIONINACTIV || rhs.getF() == 0)
		os << "f : " << rhs.getF() << ".0f" << std::endl
		   << "d : " << rhs.getD() << ".0" << std::endl;
	else
		os << "f : " << rhs.getF() << "f" <<std::endl
		   << "d : " << rhs.getD() << std::endl;
	return os;
}
