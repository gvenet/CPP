
#ifndef PAROPEN_HPP
# define PAROPEN_HPP

# include "Token.hpp"

class ParOpen: public Token
{
private:
public:
	ParOpen();
	ParOpen(ParOpen const &other);
	virtual ~ParOpen();

	ParOpen &operator=(ParOpen const &other);

	int getType(void) const;
	void display(void) const;
};

#endif
