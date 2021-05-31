#include "Brain.hpp"

Brain::Brain()
{
	this->_qi = 100;
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	const void *address = static_cast<const void *>(this);
	std::stringstream ss;
	ss << address;
	std::string name = ss.str();
	return (name);
}
