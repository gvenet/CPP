/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 09:01:36 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 19:03:30 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/mutantstack.hpp"
#include <stack>
#include <iostream>
#include <vector>
#include <exception>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "mstack size =>\t" << mstack.size() << std::endl;
	std::cout << "mstack top =>\t" << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "mstack pop\n";
	std::cout << "mstack size =>\t" << mstack.size() << std::endl;
	std::cout << "mstack top =>\t" << mstack.top() << std::endl
			  << std::endl;
	mstack.push(3);
	mstack.push(9);
	mstack.push(123);
	mstack.push(737); //[...] mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	
	std::cout << "***********\nmstack top =>\t" << mstack.top() << std::endl;
	std::cout << "mstack =>   \n";
	while (it != ite)
	{
		std::cout << *it << " | ";
		++it;
	}

	std::stack<int> s1(mstack);
	std::stack<int> s2;
	s2 = s1;
	std::cout << "\n\n************\ns1 top =>\t" << s1.top() << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		s1.pop();
		std::cout << "s1 pop\n";
		std::cout << "s1 top =>\t" << s1.top() << std::endl;
	}

	mstack.pop();
	std::cout << "\n***************\nms pop" << "\nms top =>\t" << mstack.top() << "\ns1 top =>\t" << s1.top() << "\ns2 top =>\t" << s2.top() << "\n";
	std::cout << "\n\n************\n\n";




	return 0;
}
