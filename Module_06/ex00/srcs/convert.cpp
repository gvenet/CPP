#include "../inc/convert.hpp"

Convert::Convert(char const *cc)
	: _input(std::strtof(cc, NULL)), _precisionFlag(PRECISIONINACTIV), _cFlag(DISPLAYABLE)
{
	_str = cc;
	if (_str == "-inff" || _str == "inff")
		_str.pop_back();
	std::string tests[3] = {"nan", "-inf", "inf"};
	for (int i = 0; i < 3; i++)
		if (_str == tests[i])
			_cFlag = EXCEPT;
	if (_cFlag == DISPLAYABLE)
		parse();
	fillVar();
}

Convert::Convert(Convert const &cpy) : _input(cpy._input)
{
}

Convert::~Convert()
{
}

std::string Convert::getStr(void) const
{
	return (_str);
}

float Convert::getF(void) const
{
	return (_input);
}

int Convert::getI(void) const
{
	return (_iVal);
}
double Convert::getD(void) const
{
	return (_dVal);
}
char Convert::getC(void) const
{
	return (_cVal);
}

int Convert::getCFlag(void) const
{
	return (_cFlag);
}

int Convert::getPrecisionFlag(void) const
{
	return (_precisionFlag);
}

void Convert::fillVar(void)
{

	_fVal = _input;
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
		_input = static_cast<int>(_str.front());
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
	if (rhs.getPrecisionFlag() == Convert::PRECISIONINACTIV || rhs.getF() == 0)
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
