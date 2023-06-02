/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:26:02 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 15:20:22 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
    DiamondTrap obj("Njiwa");
    std::cout << obj.GetName() << std::endl;
    std::cout << obj.ClapTrap::GetName() << std::endl;
    obj.ScavTrap::attack("Attacker");
    obj.FragTrap::takeDamage(1);
    obj.FragTrap::beRepaired(1);
    obj.whoAmI();
}