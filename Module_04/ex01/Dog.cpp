/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:29:43 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/04 17:02:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog:Default constructor" << std::endl;
    this->type = "Dog";
    this->objDog = new Brain();
    objDog->SetBrain("Dog ideas");
}

Dog::~Dog()
{
    std::cout << "Dog:Destructor" << std::endl;
    delete (this->objDog);
}

Dog::Dog(const Dog &obj) 
{
    this->objDog = NULL;
    std::cout << "Dog:Copy constructor" << std::endl;
    DeepCopy(obj);
}

Dog &Dog::operator=(const Dog&obj){
    std::cout << "Dog:Copy assignment" << std::endl;
    DeepCopy(obj);
    return (*this);           
}

std::string Dog::getType() const{
   return (this->type); 
}

void Dog::makeSound() const{
    std::cout << "Howl Howl" << std::endl;
}

void Dog::DeepCopy(const Dog&obj){
    if (this->objDog != NULL)
        delete(this->objDog);
    this->objDog = new Brain();
    *this->objDog = *obj.objDog;
}