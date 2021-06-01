#include "Zombie.hpp"
#include <iostream>
#include <fstream>

Zombie::Zombie()
{
	this->_name = Zombie::randomName();
	this->_type = "Flying";
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
