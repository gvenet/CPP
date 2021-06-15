/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:20:26 by gvenet            #+#    #+#             */
/*   Updated: 2021/06/15 14:20:27 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include <sstream>

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::stringstream str;
	str << av[1];
	int x;
	str >> x; //char* to int
	try
	{
		Bureaucrat Jim("Jim", x);
		std::cout << Jim << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
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
		std::cout << "ERROR : " << e.what() << std::endl;
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
		std::cout << "ERROR : " << e.what() << std::endl;
	}
	return 0;
}