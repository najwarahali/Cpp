/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:49:31 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/17 19:46:42 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include<iostream>
#include<cstdlib>

class Base
{
public:
    virtual ~Base(){};
};

class A: public Base{};
class B: public Base{};
class C: public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif