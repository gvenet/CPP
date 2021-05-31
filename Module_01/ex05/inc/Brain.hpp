#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>
#include <random>
#include <fstream>

class Brain
{
private:
	std::string _type;
	std::string _name;

public:
	Brain();
	Brain(std::string const &type, std::string const &name);
	~Brain();

	static std::string randomName(void);
	void advert(void);

};

#endif