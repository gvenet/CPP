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

public:
	//============================COPLIAN==========================
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const name);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &op);
	~ShrubberyCreationForm();
};

#endif
