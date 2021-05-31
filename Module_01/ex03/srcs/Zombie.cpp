#include "Zombie.hpp"
#include <iostream>
#include <fstream>

Zombie::Zombie()
{
	this->_name = Zombie::randomName();
	this->_type = "Default";
}

Zombie::Zombie(std::string const &type, std::string const &name) : _type(type), _name(name)
{
}

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Died" << std::endl;
}

std::string Zombie::randomName(void)
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

void Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}
