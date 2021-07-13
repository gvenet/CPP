/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:20 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 08:16:31 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/convert.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "bad argument" << std::endl;
		return 1;
	}
	std::cout << Convert(av[1]) << std::endl;
	return 0;
}
