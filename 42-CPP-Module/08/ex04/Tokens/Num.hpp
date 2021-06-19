
#ifndef NUM_HPP
# define NUM_HPP

# include "Token.hpp"

class Num: public Token
{
private:
	Num();

	int value;
public:
	Num(int number);
	Num(Num const &other);
	virtual ~Num();

	Num &operator=(Num const &other);

	int getValue(void) const;
	int getType(void) const;
	void display(void) const;
};

#endif
