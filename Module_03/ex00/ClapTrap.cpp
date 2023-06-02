/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:08:57 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 15:07:00 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
    std::cout << "ClapTrap:Empty constructor" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap:destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "ClapTrap:Copy constructor" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap&obj){
    std::cout << "ClapTrap:Copy assignment" << std::endl;
    HitPoints = obj.HitPoints;
    EnergyPoints = obj.EnergyPoints;
    AttackDamage = obj.AttackDamage;
    return (*this);           
}

ClapTrap::ClapTrap(std::string name_):name(name_)
{
    std::cout << "ClapTrap:parameterized constructor" << std::endl;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

void ClapTrap::attack(const std::string& target){
    if (this->HitPoints <= 0 || this->EnergyPoints <= 0)
        std::cout << "Not enough points" << std::endl;
    else
    {
    std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!\n";
    this->HitPoints--;
    this->EnergyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
     this->HitPoints = this->HitPoints - amount;
     if (this->HitPoints <= 0 || this->EnergyPoints <= 0)
        std::cout << "Not enough points" << std::endl;
     else
        std::cout << "ClapTrap " << this->name << " take demage" <<  " causing " << this->HitPoints << " points of damage!\n";
}

void ClapTrap::beRepaired(unsigned int amount){
     this->HitPoints = this->HitPoints + amount;
     if (this->HitPoints <= 0 || this->EnergyPoints <= 0)
        std::cout << "Not enough points" << std::endl;
    else 
    {
        std::cout << "ClapTrap " << this->name << " beRepaired " <<  " causing " << this->HitPoints << " Hit points!\n";
        this->EnergyPoints--;
     }
}