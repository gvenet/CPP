#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	std::string const &_name;
	bool _signedStatus;
	int const _gradeToSign;
	int const _gradeToExecut;
	Form();

public:
	//============================COPLIAN==========================
	Form(std::string const &name, int const gradeToSign, int const gradeToExecut);
	Form(Form const &cpy);
	Form &operator=(Form const &op);
	virtual ~Form();

	//============================GETTERS==========================
	std::string getName(void) const;
	bool getSignedStatus(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;

	//============================METHODS==========================
	void beSigned(const Bureaucrat &b);
	virtual void execute(Bureaucrat const &executor) const = 0;

	//============================EXCEPTIONS==========================
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw() {return "Form:GradeTooHighExeption";}
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw() {return "Form:GradeTooLowExeption";}
	};

	class ExceptionMsg : public std::exception
	{
	private:
		std::string _msg;

	public:
		ExceptionMsg(std::string const &msg) : _msg(msg) {}
		virtual ~ExceptionMsg() throw() {}
		virtual const char *what() const throw() { return _msg.c_str(); }
	};
};

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif
