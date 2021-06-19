
#ifndef PARCLOSE_HPP
# define PARCLOSE_HPP

# include "Token.hpp"

class ParClose: public Token
{
private:
public:
	ParClose();
	ParClose(ParClose const &other);
	virtual ~ParClose();

	ParClose &operator=(ParClose const &other);

	int getType(void) const;
	void display(void) const;
};

#endif
