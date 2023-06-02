/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:41:55 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/01 18:46:45 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal:Default constructor" << std::endl;
    this->type = "WrongAnimal";   
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal:Destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal:Copy constructor" << std::endl;
    this->type = obj.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal&obj){
    std::cout << "WrongAnimal:Copy assignment" << std::endl;
    this->type = obj.type;
    return (*this);           
}

std::string WrongAnimal::getType() const{
   return (this->type); 
}

void WrongAnimal::makeSound() const{
    std::cout << "My WrongAnimal sound" << std::endl;
}