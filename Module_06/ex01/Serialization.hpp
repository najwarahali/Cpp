/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:15:33 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/16 18:40:20 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_H
#define SERIALISATION_H

#include <iostream>

struct Data
{
    int a;
    int b;
    char  c;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif
