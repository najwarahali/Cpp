/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:29:43 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/01 18:45:56 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog:Default constructor" << std::endl;
    this->type = "Dog";  
}

Dog::~Dog()
{
    std::cout << "Dog:Destructor" << std::endl;
}

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog:Copy constructor" << std::endl;
    this->type = obj.type;
}

Dog &Dog::operator=(const Dog&obj){
    std::cout << "Dog:Copy assignment" << std::endl;
    this->type = obj.type;
    return (*this);           
}

std::string Dog::getType() const{
   return (this->type); 
}

void Dog::makeSound() const{
    std::cout << "Howl Howl" << std::endl;
}