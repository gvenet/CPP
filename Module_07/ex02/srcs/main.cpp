/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:33:59 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 19:40:55 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/array.hpp"
#include "string"

int main(void)
{
	std::cout << "===========int============\n";
	Array<int> a;
	Array<int> b(5);

	a = b;
	std::cout << "a => " << a;
	for (size_t i = 0; i < a.size(); i++)
		a[i] = i;
	std::cout << "a => " << a << "b => "<< b << std::endl;

	std::cout << "===========float============\n";
	Array<float> c(5);
	for (size_t i = 0; i < c.size(); i++)
		c[i] = 4.2;
	
	std::cout << "c => "<< c << std::endl;

	std::cout << "===========string============\n";
	Array<std::string> d(5);
	std::string stab[5] = {"s1", "s2", "s3", "s4", "s5"};
	for (size_t i = 0; i < d.size(); i++)
		d[i] = stab[i];
	
	std::cout << "d => "<< d;

	Array<std::string> e = d;
	for (size_t i = 0; i < 5; i++)
		e[i] = "ST";
	
	std::cout << "e => "<< e << std::endl;

	try
	{
		b[-1] = 2;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	try
	{
		b[999] = 2;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}

	std::cout << "\n=============dynamic=========\n";
	Array<int> *x = new Array<int>(5);
	for (size_t i = 0; i < x->size(); i++)
		x->operator[](i) = 42;
	std::cout << "x => "<< *x;
	delete x;
	
	Array<int> *y = new Array<int>(3);
	std::cout << "y => "<< *y << std::endl;
	delete y;
	
	return (0);
}
