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
	ShrubberyCreationForm();
	
public:
	//============================COPLIAN==========================
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &op);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor) const;
};

#endif
