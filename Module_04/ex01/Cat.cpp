/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:35:48 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/04 17:01:59 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"


Cat::Cat()
{
    std::cout << "Cat:Default constructor" << std::endl;
    this->type = "Cat";
    this->objCat = new Brain();
    objCat->SetBrain("Cat Ideas");
}

Cat::~Cat()
{
    std::cout << "Cat:Destructor" << std::endl;
    delete(this->objCat);
}

Cat::Cat(const Cat &obj)
{
    this->objCat = NULL;
    std::cout << "Cat:Copy constructor" << std::endl;
    DeepCopy(obj);
}

Cat &Cat::operator=(const Cat&obj){
    std::cout << "Cat:Copy assignment" << std::endl;
    DeepCopy(obj);
    return (*this);           
}

std::string Cat::getType() const{
   return (this->type); 
}

void Cat::makeSound() const{
    std::cout << "Meow Meow" << std::endl;
}

void Cat::DeepCopy(const Cat&obj){
    if (this->objCat != NULL)
        delete (this->objCat);
    this->objCat = new Brain();
    *this->objCat = *obj.objCat;
}
