#include "../inc/PresidentialPardonForm.hpp"

std::string const PresidentialPardon = "PresidentialPardon";

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(PresidentialPardon, 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form(cpy), _target(cpy._target)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &op)
{
	(void)op;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}


void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "\e[01;32mTarget <" << this->_target << "> has been pardoned by Zafod Beeblebrox.\e[0m" << std::endl;
}