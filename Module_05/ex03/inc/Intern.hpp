/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:16 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:17 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	Form *makeForm(std::string const &name, std::string const &target);

	class ExceptionMsg : public std::exception
	{
		virtual const char *what() const throw() { return "Form does not exist"; }
	};
};

#endif