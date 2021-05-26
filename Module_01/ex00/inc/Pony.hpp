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
	Pony(std::string name); 
	~Pony(void);

};


#endif