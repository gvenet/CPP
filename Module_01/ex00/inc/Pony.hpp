#ifndef PONY_HPP
#define PONY_HPP
#include <iostream>
#include <cstdio>

class Pony
{

private:
	std::string _name;
	std::string _color;
	std::string _power;

public:
	Pony(std::string name, std::string color, std::string power); 
	~Pony(void);

	std::string get_power(void) const;
	std::string get_color(void) const;
	std::string get_name(void) const;

	std::string set_color(std::string color);
};


#endif