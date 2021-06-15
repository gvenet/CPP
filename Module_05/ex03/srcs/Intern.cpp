/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:30 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:34 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

//============================================CLASS INTERN==================================

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const &cpy)
{
	*this = cpy;
}

Intern &Intern::operator=(Intern const &op)
{
	(void)op;
	return *this;
}

Form *shrubb(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form *robot(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form *pardon(std::string const &target)
{
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *form = NULL;
	std::string input[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form *fct[3] = {shrubb(target), robot(target), pardon(target)};

	for (int i = 0; i < 3; i++)
	{	if (name == input[i])
		{
			form = fct[i];
			break;
		}
		if (i == 2)
			throw Intern::ExceptionMsg();
	}
	std::cout << "Intern made " << *form << std::endl;
	return form;
}