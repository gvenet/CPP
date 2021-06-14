#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("defaultShrubberyForm", 145, 137), _target("defaultTarget")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("ShrubberyForm", 145, 137), _target(target)
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

// std::string trees = "  /\\     /\\\n //\\\\   //\\\\\n///\\\\\\ ///\\\\\\\n  ||     ||\n  ||     ||";
// std::string const name = (this->_target + "shrubbery");
// std::ofstream outfile(name);
// outfile << trees << std::endl;
// outfile.close();