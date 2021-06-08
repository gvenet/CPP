#ifndef SORCERER_HPP
#define SORCERER_HPP
#include <string>
#include <iostream>

class Sorcerer
{
private:
	std::string _name;
	std::string _title;

public:
	Sorcerer();
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const &);
	Sorcerer& operator=(Sorcerer const &);
	virtual ~Sorcerer(void);

};

#endif