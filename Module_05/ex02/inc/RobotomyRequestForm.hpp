#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:	
	std::string const &_target;

public:
	//============================COPLIAN==========================
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &op);
	~RobotomyRequestForm();
};

#endif
