/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:23:46 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/01 18:45:42 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal:Default constructor" << std::endl;
    this->type = "Animal";   
}

Animal::~Animal()
{
    std::cout << "Animal:Destructor " << std::endl;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal:Copy constructor" << std::endl;
    this->type = obj.type;
}

Animal &Animal::operator=(const Animal&obj){
    std::cout << "Animal:Copy assignment" << std::endl;
    this->type = obj.type;
    return (*this);           
}

std::string Animal::getType() const{
   return (this->type); 
}

void Animal::makeSound() const{
    std::cout << "My Animal sound" << std::endl;
}