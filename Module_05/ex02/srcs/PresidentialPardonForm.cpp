#include "../inc/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("defaultShrubberyForm", 145, 137), _target("defaultTarget")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("ShrubberyForm", 145, 137), _target(target)
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
