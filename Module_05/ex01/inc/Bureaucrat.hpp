#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <string>
#include <stdexcept>
#include <sstream>
#include "../inc/Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string _name;
	int _grade;

public:
	//============================COPLIAN==========================

	Bureaucrat();
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const &cpy);
	Bureaucrat &operator=(Bureaucrat const &op);
	virtual ~Bureaucrat();

	//============================GETTERS==========================
	int getGrade(void) const;
	std::string const &getName(void) const;

	//============================METHODS==========================
	void incGrade(void);
	void decGrade(void);
	void signForm(Form &f) const;

	class GradeTooHighException : public std::exception
	{
		//============================1st_exception==========================
	private:
		std::string _msg;

	public:
		GradeTooHighException() throw() {}
		GradeTooHighException(std::string const &msg) : _msg(msg) {}
		virtual ~GradeTooHighException() throw() {}

		virtual const char *what() const throw() { return _msg.c_str(); }
	};

	class GradeTooLowException : public std::exception
	{
		//============================2nd_exception==========================
	private:
		std::string _msg;

	public:
		GradeTooLowException() throw() {}
		GradeTooLowException(std::string const &msg) : _msg(msg) {}
		virtual ~GradeTooLowException() throw() {}

		virtual const char *what() const throw() { return _msg.c_str(); }
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif