/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 08:33:44 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 11:24:44 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

int main()
{
	int a[5] = {0, 1, 2, 3, 4};
	iter(a, 5, display);
	std::cout << std::endl;

	float b[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	iter(b, 5, display);
	std::cout << std::endl;

	std::string c[5] = {"s1", "s2", "s3", "s4", "s5"};
	iter(c, 5, display);
	std::cout << std::endl
			  << std::endl;

	//========================================
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	iter(tab, 5, display);
	std::cout << std::endl;
	iter(tab2, 5, display);
	std::cout << std::endl;

	return 0;
}
