/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:30:07 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:30:07 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"
#include <sstream>

int main(void)
{
	Bureaucrat Jim("Jim", 100);
	std::cout << Jim << std::endl;

	Form f1("E24", 100, 50);
	std::cout << f1 << std::endl;
	f1.beSigned(Jim);
	std::cout << f1 << std::endl;

	std::cout <<  std::endl;

	Form f2("N70", 99, 50);
	std::cout << f2 << std::endl;
	try
	{
		Jim.signForm(f2);
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << f2 << std::endl;

	std::cout <<  std::endl;

	Form f3("form3", 101, 50);
	std::cout << f3 << std::endl;
	Jim.signForm(f3);
	std::cout << f3 << std::endl;
	try
	{
		Jim.signForm(f3);
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << f3 << std::endl;

	std::cout <<  std::endl;

	try
	{
		Form formException("E27", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(Jim);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout <<  std::endl;

	try
	{
		Form formException("Form", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout <<  std::endl;

	try
	{
		Form formException("Form", 0, 50);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout <<  std::endl;

	try
	{
		Form formException("Form", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout <<  std::endl;

	try
	{
		Form formException("Form", 100, 0);
		std::cout << formException << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	return (0);
}
