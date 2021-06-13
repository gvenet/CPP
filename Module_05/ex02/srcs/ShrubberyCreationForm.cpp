#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("defaul", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const name) : Form(name, 145, 137)
{
	if (this->_signedStatus == true)
	{
		std::string trees = "  /\\     /\\\n //\\\\   //\\\\\n///\\\\\\ ///\\\\\\\n  ||     ||\n  ||     ||";
		std::string target = this->_name;
		target += "_shrubbery";
		std::ofstream outfile(target);
		outfile << trees << std::endl;
		outfile.close();
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy._name, 145, 137)
{
	*this = cpy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &op)
{
	this->_name = op._name;
	this->_signedStatus = op._signedStatus;
	this->_gradeToSign = op._gradeToSign;
	this->_gradeToExecut = op._gradeToExecut;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

