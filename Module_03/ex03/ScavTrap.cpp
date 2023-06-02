/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:56:20 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/25 22:37:17 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap:Empty constructor" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap:destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj)
{
    std::cout << "ScavTrap:Copy constructor" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
}

ScavTrap &ScavTrap::operator=(const ScavTrap&obj){
    std::cout << "ScavTrap:Copy assignment" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
    return (*this);           
}

ScavTrap::ScavTrap(std::string name_):ClapTrap(name_)
{
    std::cout << "ScavTrap:parameterized constructor" << std::endl;
    HitPoints = 100;
    EnergyPoints = 50;
    EnergyPns = 50;
    AttackDamage = 20;
}

void ScavTrap::attack(const std::string& target){
    if (this->HitPoints >= 0 || this->EnergyPoints >= 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!\n";
        this->HitPoints--;
        this->EnergyPoints--;
    }
    else
        std::cout << "Not enough points" << std::endl; 
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
