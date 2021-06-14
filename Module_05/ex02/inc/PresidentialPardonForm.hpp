#ifndef PRSIDENTIALPARDONFORM_HPP
#define PRSIDENTIALPARDONFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:	
	std::string const &_target;
	
public:
	//============================COPLIAN==========================
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &op);
	~PresidentialPardonForm();

};

#endif
