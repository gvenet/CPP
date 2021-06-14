#include "../inc/RobotomyRequestForm.hpp"

std::string const RobotomyRequest = "RobotomyRequest";

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(RobotomyRequest, 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy), _target(cpy._target)
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

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << std::endl
			  << "\e[01;33mRobotomy makes some drilling noises\e[0m" << std::endl;

}