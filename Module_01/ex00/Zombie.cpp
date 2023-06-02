/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:19:50 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/28 16:12:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void Zombie::announce( void ){
    std::cout << this->name_n<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(){}
Zombie::Zombie(std::string zombie_name):name_n(zombie_name){}
Zombie::~Zombie()
{
    std::cout << "The zombie "<< this->name_n << " has been destroyed" << std::endl;
}