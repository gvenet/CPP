/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:20:26 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/12 15:23:02 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include <sstream>

int main(void)
{
	try
	{
		Bureaucrat Jim("Jim", 100);
		std::cout << Jim << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Bob("Bob", 149);
		std::cout << Bob << std::endl;
		Bob.decGrade();
		std::cout << Bob << std::endl;
		Bob.decGrade();
		std::cout << Bob << std::endl;
	}

	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Mik("Mik", 2);
		std::cout << Mik << std::endl;
		Mik.incGrade();
		std::cout << Mik << std::endl;
		Mik.incGrade();
		std::cout << Mik << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "\e[01;31mERROR : " << e.what() << "\e[0m" << std::endl;
	}
	return 0;
}
