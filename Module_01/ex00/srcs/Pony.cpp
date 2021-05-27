#include "../inc/Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string power) : _name(name), _color(color), _power(power)
{
	std::cout << "\e[1;36mPony " << this->_name << " is born\e[0m" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "\e[1;31mPony " << this->_name << " died\e[0m" << std::endl;
}

std::string Pony::get_color(void) const
{
	return this->_color;
}

std::string Pony::get_power(void) const
{
	return this->_power;
}

std::string Pony::get_name(void) const
{
	return this->_name;
}

std::string Pony::set_color(std::string color)
{
	this->_color = color;
	return this->_color;
}
