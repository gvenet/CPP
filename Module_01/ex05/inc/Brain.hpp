#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>

class Brain
{
private:
	int _qi;

public:
	Brain();
	~Brain();

	std::string identify(void) const;	
};

#endif