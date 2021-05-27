#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <cstdio>

class Zombie
{

private:

	std::string _type;
	std::string _name;
public:

	Zombie(std::string name); 
	~Zombie(void);

	void advert(void) const;
	std::string get_type(void) const;
	std::string get_name(void) const;
};
#endif
