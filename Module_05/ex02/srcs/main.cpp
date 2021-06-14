#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

#include <sstream>

int main(void)
{
	Bureaucrat Jim("Jim", 130);
	std::cout << Jim << std::endl;
	try
	{
		ShrubberyCreationForm Shrubb("home");
		std::cout << Shrubb << std::endl;
		Shrubb.execute(Jim);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m"<< std::endl;
	}

	std::cout << std::endl;
	Bureaucrat Bob("Bob", 140);
	std::cout << Bob << std::endl;
	try
	{
		ShrubberyCreationForm Shrubb("home");
		std::cout << Shrubb << std::endl;
		Bob.signForm(Shrubb);
		std::cout << Shrubb << std::endl;
		Shrubb.execute(Bob);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m"<< std::endl;
	}

	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm Shrubb("home");
		std::cout << Shrubb << std::endl;
		Jim.signForm(Shrubb);
		std::cout << Shrubb << std::endl;
		Shrubb.execute(Jim);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m"<< std::endl;
	}

	std::cout << std::endl;



	// RobotomyRequestForm Robotomy("robot");
	// std::cout << Robotomy << std::endl;
	// PresidentialPardonForm Pardon("someone");
	// std::cout << Pardon << std::endl;
	return (0);
}
