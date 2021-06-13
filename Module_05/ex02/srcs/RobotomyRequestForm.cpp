#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("defaul", 145, 137)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const name) : Form(name, 145, 137)
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

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy._name, 145, 137)
{
	*this = cpy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &op)
{
	this->_name = op._name;
	this->_signedStatus = op._signedStatus;
	this->_gradeToSign = op._gradeToSign;
	this->_gradeToExecut = op._gradeToExecut;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

