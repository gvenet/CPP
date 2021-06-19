
#include "Token.hpp"

Token::Token()
{
}

Token::Token(Token const &other)
{
	(void)other;
}

Token::~Token()
{
}

Token &Token::operator=(Token const &other)
{
	(void)other;
	return (*this);
}
