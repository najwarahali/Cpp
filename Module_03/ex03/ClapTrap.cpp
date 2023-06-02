/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:08:57 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 14:56:08 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
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
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
}

void ClapTrap::attack(const std::string& target){
    if (this->HitPoints >= 0 || this->EnergyPoints >= 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->AttackDamage << " points of damage!\n";
        this->HitPoints--;
        this->EnergyPoints--;
    }
    else
        std::cout << "Not enough points" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount){
     this->HitPoints = this->HitPoints - amount;
     if (this->HitPoints >= 0 || this->EnergyPoints >= 0)
        std::cout << "ClapTrap " << this->name << " take demage" <<  " causing " << this->HitPoints << " points of damage!\n";
     else
        std::cout << "Not enough points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
     this->HitPoints = this->HitPoints + amount;
     if (this->HitPoints >= 0 || this->EnergyPoints >= 0)
     {
        std::cout << "ClapTrap " << this->name << " beRepaired " <<  " causing " << this->HitPoints << " Hit points!\n";
        this->EnergyPoints--;
     }
    else
        std::cout << "Not enough points" << std::endl;
}

std::string ClapTrap::GetName() const
{
    return (this->name);
}