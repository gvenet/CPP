#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const Brain& Human::getBrain(void) const
{
	return (this->_brain);
}

std::string Human::identify() const
{
	return (this->_brain.identify());
}

