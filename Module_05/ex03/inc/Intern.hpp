#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	class ClassFct
	{
	private:
		std::string const _name;
		Form *(*_fct)(std::string const _name);

	public:
		ClassFct();
		ClassFct((*fct)(std::string const &target));
		ClassFct(ClassFct const &cpy);
		ClassFct &operator=(ClassFct const &op);
		~ClassFct();
	};

public:
	Intern();
	Intern(Intern const &cpy);
	Intern &operator=(Intern const &op);
	~Intern();

	Form* makeForm(std::string const &name, std::string const &target);

	class ExceptionMsg : public std::exception
	{
		virtual const char *what() const throw() {return "Form does not exist";}
	};
};

#endif