/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:33 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 07:59:34 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/base.hpp"

int main()
{
	srand((unsigned)time(NULL) * getpid());

	for (int i = 0; i < 10; i++)
	{
		Base *X = generate();
		identify_from_pointer(X);
		identify_from_reference(*X);
		delete X;
		std::cout << std::endl;
	}
	return 0;
}
