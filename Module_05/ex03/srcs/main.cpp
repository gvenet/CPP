#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Intern.hpp"

#include <sstream>

int main(void)
{
	try
	{
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		delete rrf;
		rrf = someRandomIntern.makeForm("ShrubberyCreation", "Home");
		delete rrf;
		rrf = someRandomIntern.makeForm("PresidentialPardon", "Home");
		delete rrf;
		rrf = someRandomIntern.makeForm("kldskldaka", "Home");
		delete rrf;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}

	return 0;
}