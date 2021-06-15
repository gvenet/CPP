#include "../inc/Intern.hpp"

// ClassFct::ClassFct((*fct)(std::string const target)) : _fct(fct)  
// {
// }

//============================================CLASS INTERN==================================

Intern::Intern()
{

}

Intern::~Intern()
{
	
}

Intern::Intern(Intern const &cpy)
{
	*this = cpy;
}

Intern &Intern::operator=(Intern const &op)
{
	(void)op;
	return *this;
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{

}












	// Form *form = NULL;
	// if (name == "ShrubberyCreation")
	// 	form = new ShrubberyCreationForm(target);
	// else if (name == "RobotomyRequest")
	// 	form = new RobotomyRequestForm(target);
	// else if (name == "PresidentialPardon")
	// 	form = new PresidentialPardonForm(target);
	// else
	// 	throw Intern::ExceptionMsg();
	// std::cout << "Intern made " << *form << std::endl;
	// return form;