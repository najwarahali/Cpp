/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:30:45 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/30 23:57:54 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_H
#define Dog_H

#include "Animal.hpp"
class Dog : public Animal
{
public:
    Dog();
    ~Dog();
    Dog(const Dog &obj);
    Dog &operator=(const Dog&obj);
    std::string getType() const;
    void makeSound() const;
};

#endif