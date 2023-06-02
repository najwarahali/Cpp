/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:35:48 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/01 18:45:50 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat:Default constructor" << std::endl;
    this->type = "Cat";  
}

Cat::~Cat()
{
    std::cout << "Cat:Destructor" << std::endl;
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat:Copy constructor" << std::endl;
    this->type = obj.type;
}

Cat &Cat::operator=(const Cat&obj){
    std::cout << "Cat:Copy assignment" << std::endl;
    this->type = obj.type;
    return (*this);           
}

std::string Cat::getType() const{
   return (this->type); 
}

void Cat::makeSound() const{
    std::cout << "Meow Meow" << std::endl;
}