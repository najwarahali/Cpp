/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:18:23 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/30 23:01:52 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str,Weapon &club):name(str),W_HA(club)
{
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->W_HA.getType() << std::endl;
}