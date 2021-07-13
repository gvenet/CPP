/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:24 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 08:05:07 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
	int n;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data ptr;
	ptr.n = 42;

	std::cout << deserialize(serialize(&ptr))->n << std::endl;
	return 0;
}
