/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:22:43 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/28 22:43:39 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_H
#define Animal_H

#include <iostream>

class Animal
{
protected:
    std::string type;
public:
    Animal();
    virtual ~Animal();
    Animal(const Animal &obj);
    Animal &operator=(const Animal&obj);
    std::string getType() const;
    virtual void makeSound() const;
};

#endif