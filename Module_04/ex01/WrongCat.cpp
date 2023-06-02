/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:35:25 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/01 18:46:52 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat:Default constructor" << std::endl;
    this->type = "WrongCat";  
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat:Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat:Copy constructor" << std::endl;
    this->type = obj.type;
}

WrongCat &WrongCat::operator=(const WrongCat&obj){
    std::cout << "WrongCat:Copy assignment" << std::endl;
    this->type = obj.type;
    return (*this);           
}

std::string WrongCat::getType() const{
   return (this->type); 
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat Meow Meow " << std::endl;
}