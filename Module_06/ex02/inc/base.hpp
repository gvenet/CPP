/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvenet <gvenet@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 07:59:30 by gvenet            #+#    #+#             */
/*   Updated: 2021/07/13 08:32:38 by gvenet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <unistd.h>

class Base{public:	virtual ~Base() {}};
class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void);
void identify_from_pointer(Base * p);
void identify_from_reference( Base & p);


#endif