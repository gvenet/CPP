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
	std::string const forest = "         /\\\n  /\\    //\\\\   /\\\n //\\\\  ///\\\\\\ //\\\\  /\\\n///\\\\\\   ||    ||  //\\\\\n  ||     ||    ||   ||\n==SHRUBBERYCREATIONFORM==\nExecutor : ";
	std::ofstream file(name);
	if (!file.is_open() || file.bad())
		throw Form::ExceptionMsg("Shrubbery_file : can't open file");
	file << forest << executor << std::endl;
	if (file.bad())
	{
		file << std::endl;
		file.close();
		throw Form::ExceptionMsg("Shrubbery_file : corrupted file : error during writing");
	}
	file.close();
}