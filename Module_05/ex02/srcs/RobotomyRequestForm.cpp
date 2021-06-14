#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("defaultRobotomyRequest", 145, 137), _target("defaultTarget")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequest", 145, 137), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form("RobotomyRequest", 145, 137), _target(cpy._target)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &op)
{
	(void)op;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

