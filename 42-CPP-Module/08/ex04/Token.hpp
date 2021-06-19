
#ifndef TOKEN_HPP
# define TOKEN_HPP

# include <iostream>

class Token
{
private:
public:
	Token();
	Token(Token const &other);
	virtual ~Token();

	Token &operator=(Token const &other);

	enum TokenType {
		TokenNum,
		TokenOp,
		TokenParOpen,
		TokenParClose
	};

	virtual int getType(void) const = 0;
	virtual void display(void) const = 0;
};

#endif
