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
	float const _input;
	float _fVal;
	int _iVal;
	double _dVal;
	char _cVal;
	int _precisionFlag;
	int _cFlag;
	Convert();

public:
	Convert(char const *str);
	Convert(Convert const &cpy);
	Convert &operator=(Convert const &op);
	virtual ~Convert();

	void fillVar(void);
	float getF(void) const;
	int getI(void) const;
	double getD(void) const;
	char getC(void) const;
	int getCFlag(void) const;
	int getPrecisionFlag(void) const;

	enum precisionFlag
	{
		PRECISIONINACTIV,
		PRECISIONACTIV,
	};

	enum charDisplayFlag
	{
		DISPLAYABLE,
		NONDISPLAYABLE,
		IMPOSSIBLE
	};

	class ExceptionMsg : public std::exception
	{
	private:
		std::string _msg;

	public:
		ExceptionMsg(std::string const &msg) : _msg(msg) {}
		virtual ~ExceptionMsg() throw() {}
		virtual const char *what() const throw() { return _msg.c_str(); }
	};
};

std::ostream &operator<<(std::ostream &os, Convert const &rhs);

#endif