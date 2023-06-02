/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:58:25 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 15:18:14 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap:Empty constructor" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap:destructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj)
{
    std::cout << "FragTrap:Copy constructor" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap&obj){
    std::cout << "FragTrap:Copy assignment" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
    return (*this);           
}

FragTrap::FragTrap(std::string name_):ClapTrap(name_)
{
    std::cout << "FragTrap:parameterized constructor" << std::endl;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

void FragTrap::highFivesGuys(void){
    std::cout << "Positive high fives " << std::endl;
} 