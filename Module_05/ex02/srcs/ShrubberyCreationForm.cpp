#include "../inc/ShrubberyCreationForm.hpp"

std::string const ShrubberyCreation = "ShrubberyCreation";

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(ShrubberyCreation, 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy), _target(cpy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &op)
{
	(void)op;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string const name = (this->_target + "_shrubbery");
	std::ofstream outfile(name);
	outfile << "         /\\\n  /\\    //\\\\   /\\\n //\\\\  ///\\\\\\ //\\\\  /\\\n///\\\\\\   ||    ||  //\\\\\n  ||     ||    ||   ||\n==SHRUBBERYCREATIONFORM==\nExecutor : " << executor << std::endl;
	outfile.close();
}