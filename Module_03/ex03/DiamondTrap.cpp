/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:17:20 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 18:30:15 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap:Empty constructor" << std::endl;
    
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap:destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
    std::cout << "DiamondTrap:Copy constructor" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj){
    std::cout << "DiamondTrap:Copy assignment" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
    return (*this);           
}

DiamondTrap::DiamondTrap(std::string name_):ClapTrap(name_ + "_clap_name"),ScavTrap(name_),FragTrap(name_)
{
    name = name_;
    std::cout << "DiamondTrap:parameterized constructor" << std::endl;
    HitPoints = FragTrap::HitPoints;
    EnergyPoints = EnergyPns;
    AttackDamage = FragTrap::AttackDamage;


}

std::string DiamondTrap::GetName() const{
    return (this->name);
}

void DiamondTrap::whoAmI(){
    std::cout << "Name of DiamondTrap is " << this->name << " and " << "Name of ClapTrap is " << ClapTrap::GetName() << std::endl;
}

void DiamondTrap::attack(std::string s)
{
    ScavTrap::attack(s);
}