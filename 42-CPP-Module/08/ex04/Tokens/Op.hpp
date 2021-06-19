
#ifndef OP_HPP
# define OP_HPP

# include "Token.hpp"

class Op: public Token
{
private:
	Op();

	char op;
public:
	Op(char op);
	Op(Op const &other);
	virtual ~Op();

	Op &operator=(Op const &other);

	int getType(void) const;
	char getOp(void) const;
	void display(void) const;
};

#endif
