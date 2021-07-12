/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:33:00 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/12 16:48:14 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::string const _name;
	int _grade;
	Bureaucrat();

public:
	//============================COPLIAN==========================

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
	void signForm(Form &form) const;

	//============================EXCEPTIONS=======================
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw() { return "Bureaucrate : GradeTooHighException"; }
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw() { return "Bureaucrate : GradeTooLowException"; }
	};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif