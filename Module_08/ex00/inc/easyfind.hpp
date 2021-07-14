/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 08:59:41 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/14 08:59:42 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>
#include <list>

template <typename T>
typename T::iterator easyfind(T &container, int tofind)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), tofind);
	if (it == container.end())
		std::cout << tofind << " is not in container";
	else
		std::cout << tofind << " is in container";
	std::cout << std::endl;
	return it;
}

#endif