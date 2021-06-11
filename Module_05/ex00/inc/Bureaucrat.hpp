#ifndef TEST_HPP
#define TEST_HPP
#include <iostream>
#include <string>
#include <stdexcept>

class Error : public std::exception
{
private:
	int _nb;
	std::string _msg;
	int _lvl;

public:
	Error() throw();
	Error(int nb, std::string const &msg, int lvl);
	virtual ~Error() throw();

	int getLvl() const throw();
	int getNb() const throw();
	virtual const char *what() const throw();
};

#endif