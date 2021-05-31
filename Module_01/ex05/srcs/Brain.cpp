#include "Brain.hpp"
#include <iostream>
#include <fstream>

Brain::Brain()
{
	this->_name = Brain::randomName();
	this->_type = "Flying";
}

Brain::Brain(std::string const &type, std::string const &name) : _type(type), _name(name)
{
}

Brain::~Brain()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Died" << std::endl;
}

std::string Brain::randomName(void)
{
	std::string word;
	std::ifstream ifs("ZombieNames");
	int randNb;

	randNb = ((rand() % 100) + 1);
	for(int i = 0; i < randNb; i++) 
		ifs >> word;
	ifs.close();
	return (word);
}

void Brain::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}
