#include "../inc/Form.hpp"

//============================COPLIAN==========================

Form::Form() : _name("default"), _signedStatus(false), _gradeToSign(1), _gradeToExecut(1)
{
}

Form::Form(std::string const name, bool signedForm, int gradeToSign, int gradeToExecut)
	: _name(name), _signedStatus(false), _gradeToSign(gradeToSign), _gradeToExecut(gradeToExecut)
{
}

Form::Form(Form const &cpy)
	: _name(cpy._name), _signedStatus(cpy._signedStatus), _gradeToSign(cpy._gradeToSign), _gradeToExecut(cpy._gradeToExecut)
{
	*this = cpy;
}

Form &Form::operator=(Form const &op)
{
	this->_name = op._name;
	this->_signedStatus = op._signedStatus;
	this->_gradeToSign = op._gradeToSign;
	this->_gradeToExecut = op._gradeToExecut;
	return *this;
}

Form::~Form()
{
}

//===========================OVERLOAD<<========================

std::ostream &operator<<(std::ostream &os, Form const &rhs)
{
	os << "Form name " << rhs.getName() << " | signed : " << rhs.getSignedStatus() << " | grade to sign : " << rhs.getGradeToSign() << " | grade to execut : " << rhs.getGradeToExecute();
	return os;
}

//============================METHODS==========================

bool Form::getSignedStatus(void) const
{
	return this->_signedStatus;
}

std::string Form::getName(void) const
{
	return this->_name;
}

int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return this->_gradeToExecut;
}