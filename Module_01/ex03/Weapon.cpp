/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:21:32 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/30 23:04:26 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string type){
    this->type = type;
}
const std::string &Weapon::getType(void){
   return(type);
}
Weapon::Weapon(std::string str):type(str)
{
}
