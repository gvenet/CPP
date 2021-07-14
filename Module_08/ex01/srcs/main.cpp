/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:46 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 18:38:06 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/span.hpp"

int main(void)
{
	Span sp(10);

	sp.addNumber(77);
	sp.addNumber(10);
	sp.addNumber(100);
	sp.addNumber(52);
	sp.addNumber(162);

	try
	{
		std::cout << sp << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n*****************************************\n";
	try
	{
		sp.addNumber(5);
		sp.addNumber(15);
		std::cout << sp << sp.shortestSpan() << std::endl
				  << sp.longestSpan() << std::endl
				  << std::endl;
		sp.addNumber(230);
		std::cout << sp << sp.shortestSpan() << std::endl
				  << sp.longestSpan() << std::endl
				  << std::endl;
		sp.addNumber(1);
		sp.addNumber(17);
		sp.addNumber(11);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n*****************************************\n";
	std::cout << sp;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	Span spp(10000);
	spp.autofill();
	std::cout << "shortest\t" << spp.shortestSpan() << std::endl;
	std::cout << "longest \t" << spp.longestSpan() << std::endl;
	std::cout << std::endl;

	return 0;
}