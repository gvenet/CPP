/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:39:35 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:39:36 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Intern.hpp"

#include <sstream>

int main(void)
{
	try
	{
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequest", "Bender");
		delete rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("ShrubberyCreation", "Home");
		delete rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("PresidentialPardon", "Home");
		delete rrf;
		std::cout << std::endl;
		rrf = someRandomIntern.makeForm("kldskldaka", "Home");
		delete rrf;
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mError : " << e.what() << "\e[0m" << std::endl;
	}

	return 0;
}