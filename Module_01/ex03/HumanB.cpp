/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:21:20 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/28 22:11:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str):name(str), W_HB(NULL)
{
}

void HumanB::setWeapon(Weapon &W){
    this->W_HB = &W;
}

void HumanB::attack()
{
    if (this->W_HB == NULL)
    {
        std::cout << "Error" << std::endl;
    }
    else
        std::cout << this->name << " attacks with their " << this->W_HB->getType() << std::endl;
}