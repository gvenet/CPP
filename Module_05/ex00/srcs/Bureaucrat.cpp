#include "../inc/Bureaucrat.hpp"

//=========================BASE==============================

Error::Error() throw() : _nb(0), _msg(""), _lvl(0)
{
}

Error::Error(int nb, std::string const &msg, int lvl) : _nb(nb), _msg(msg), _lvl(lvl)
{
}

Error::~Error() throw()
{
}

//=========================GETTERS==============================

int Error::getLvl() const throw()
{
	return _lvl;
}

int Error::getNb() const throw()
{
	return _nb;
}

const char * Error::what() const throw()
{
	return _msg.c_str();
}
