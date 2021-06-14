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
	RobotomyRequestForm();

public:
	//============================COPLIAN==========================
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &op);
	~RobotomyRequestForm();

	void execute(Bureaucrat const &executor) const;
};

#endif
