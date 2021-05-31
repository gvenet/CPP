#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <random>
#include <fstream>

class Zombie
{
private:
	std::string _type;
	std::string _name;

public:
	Zombie();
	Zombie(std::string const &type, std::string const &name);
	~Zombie();

	static std::string randomName(void);
	void advert(void);
	// void setName(std::string name);
	// void setType(std::string type);

};

#endif