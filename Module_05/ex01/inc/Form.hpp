#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>
#include <exception>

class Form
{
private:
	std::string _name;
	bool _signedStatus;
	int _gradeToSign;
	int _gradeToExecut;

public:
	//============================COPLIAN==========================

	Form();
	Form(std::string const name, bool signedStatus, int const gradeToSign, int const gradeToExecut);
	Form(Form const &cpy);
	Form &operator=(Form const &op);
	~Form();

	//============================METHODS==========================

	std::string getName(void) const;
	bool getSignedStatus(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;

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

std::ostream &operator<<(std::ostream &os, Form const &rhs);

#endif
