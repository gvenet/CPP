/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:32 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 08:32:12 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/base.hpp"

Base *genA()
{
	return new A;
}

Base *genB()
{
	return new B;
}

Base *genC()
{
	return new C;
}

Base *generate(void)
{
	Base *baseTab[3] = {genA(), genB(), genC()};
	return baseTab[rand() % 3];
}

void identify_from_pointer(Base *p)
{
	std::cout << "ptr : ";
	A *a = dynamic_cast<A *>(p);
	if (a)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B *>(p);
	if (b)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C *>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p)
{
	std::cout << "ref : ";
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
	}
	catch (const std::bad_cast &bc)
	{
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
	}
	catch (const std::bad_cast &bc)
	{
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
	}
	catch (const std::bad_cast &bc)
	{
	}
}