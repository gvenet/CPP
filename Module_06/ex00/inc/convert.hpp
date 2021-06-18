#ifndef CONVERT_HPP
#define CONVERT_HPP
#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>
#include <exception>
#include <cmath>
#include <limits>

class Convert
{
private:
	float	_input;
	float	_fVal;
	int		_iVal;
	double	_dVal;
	char	_cVal;
	int		_precisionFlag;
	int		_cFlag;
	std::string _str;
	Convert();

public:
	Convert(char const *str);
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &op);
	virtual ~Convert();

	void parse(void);
	void fillVar(void);

	float getF(void) const;
	int getI(void) const;
	double getD(void) const;
	char getC(void) const;
	int getCFlag(void) const;
	int getPrecisionFlag(void) const;
	std::string getStr(void) const;

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