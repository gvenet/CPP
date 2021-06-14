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
public:
	Intern();
	Intern(Intern const &cpy);
	Intern &operator=(Intern const &op);
	~Intern();

	Form* makeForm(std::string const &name, std::string const &target);

	class ExceptionMsg : public std::exception
	{
	private:
		std::string _msg;

	public:
		ExceptionMsg(std::string const &msg) : _msg(msg) {}
		virtual ~ExceptionMsg() throw() {}
		virtual const char *what() const throw() {return _msg.c_str();}
	};
};

#endif