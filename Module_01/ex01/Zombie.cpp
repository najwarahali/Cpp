/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:20:36 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/25 21:20:39 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string name_n){
    this->name_n = name_n;
}
void Zombie::announce( void ){
    std::cout << this->name_n<< " Zombie" << std::endl;
}

Zombie::Zombie(){}
Zombie::~Zombie()
{
    std::cout << "The zombie has been destroyed" << std::endl;
}