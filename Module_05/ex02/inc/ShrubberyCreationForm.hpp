#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:	
	std::string const &_target;
	
public:
	//============================COPLIAN==========================
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &op);
	~ShrubberyCreationForm();

};

#endif
