#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"

#include <sstream>

int main(void)
{
	//=======================================SHRUBB===================================
	std::cout << "\e[01;34m=======================================SHRUBB===================================\e[0m" << std::endl
			  << std::endl;
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
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
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
		Shrubb.execute(Jim);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm Shrubb("home");
		std::cout << Shrubb << std::endl;
		Bob.signForm(Shrubb);
		std::cout << Shrubb << std::endl;
		Shrubb.execute(Jim);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;
	//=======================================ROBOTOMY===================================
	std::cout << "\e[01;34m=======================================ROBOTOMY===================================\e[0m" << std::endl
			  << std::endl;
	Bureaucrat Mik("Mik", 50);
	Bureaucrat Dan("Dan", 30);
	std::cout << Mik << std::endl
			  << Dan << std::endl;
	try
	{
		RobotomyRequestForm Robotomy("robot");
		std::cout << Robotomy << std::endl;
		Robotomy.execute(Dan);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm Robotomy("robot");
		std::cout << Robotomy << std::endl;
		Mik.signForm(Robotomy);
		std::cout << Robotomy << std::endl;
		Robotomy.execute(Mik);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm Robotomy("robot");
		std::cout << Robotomy << std::endl;
		Mik.signForm(Robotomy);
		std::cout << Robotomy << std::endl;
		Robotomy.execute(Dan);
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}

	//=======================================PARDON===================================
	std::cout << std::endl
			  << "\e[01;34m=======================================PARDON===================================\e[0m" << std::endl
			  << std::endl;

	// PresidentialPardonForm Pardon("someone");
	// std::cout << Pardon << std::endl;
	return (0);
}
