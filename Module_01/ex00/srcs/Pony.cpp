#include "../inc/Pony.hpp"

Pony::Pony(std::string name) : _name(name) 
{
	std::cout << "Pony " << this->_name << "is born" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << this->_name << "died" << std::endl;
}
