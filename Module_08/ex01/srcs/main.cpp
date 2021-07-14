/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:58:46 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 18:55:50 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/span.hpp"

void disp(Span &s)
{
	std::cout << "nbFilled :\t" << s.getNbFill() << std::endl
			  << "shortest :\t" << s.shortestSpan() << std::endl
			  << "longest :\t" << s.longestSpan() << std::endl
			  << std::endl;
}

int main(void)
{
	Span sp(10);

	sp.addNumber(77);
	sp.addNumber(10);
	sp.addNumber(100);
	sp.addNumber(90);
	sp.addNumber(200);

	try
	{
		std::cout << sp << "shortest :\t" << sp.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << "longest :\t" << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\n*****************************************\n";
	try
	{
		sp.addNumber(0);
		sp.addNumber(20);
		std::cout << sp;
		disp(sp);
		sp.addNumber(230);
		std::cout << sp;
		disp(sp);
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
	disp(sp);

	std::cout << "\n*****************************************\n";
	Span spp(10000);
	spp.autofill();
	disp(spp);

	return 0;
}