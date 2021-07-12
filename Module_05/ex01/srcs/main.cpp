/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:30:07 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/12 15:54:21 by gvenet           ###   ########.fr       */
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

	std::cout << std::endl;

	Form f2("N70", 99, 50);
	std::cout << f2 << std::endl;
	try
	{
		Jim.signForm(f2);
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << f2 << std::endl;

	std::cout << std::endl;

	Form f3("form3", 101, 50);
	std::cout << f3 << std::endl;
	Jim.signForm(f3);
	std::cout << f3 << std::endl;
	try
	{
		Jim.signForm(f3);
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << f3 << std::endl;

	std::cout << std::endl;

	try
	{
		Form formException("E27", 99, 50);
		std::cout << formException << std::endl;
		formException.beSigned(Jim);
		std::cout << formException << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form formException("Form", 1000, 50);
		std::cout << formException << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form formException("Form", 0, 50);
		std::cout << formException << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form formException("Form", 100, 1000);
		std::cout << formException << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout << std::endl;

	try
	{
		Form formException("Form", 100, 0);
		std::cout << formException << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}

	std::cout << std::endl
			  << "==================================================================" << std::endl;
	Form t1("t1", 150, 50);
	std::cout << t1 << std::endl;
	Form t2(t1);
	std::cout << t2 << std::endl;
	Jim.signForm(t1);
	Form t3("t3", 20, 15);
	std::cout << t3 << std::endl;
	t3 = t1;
	std::cout << t3 << std::endl;
	return (0);
}
