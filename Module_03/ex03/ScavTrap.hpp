/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:56:01 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/25 22:38:33 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ScavTrap_H
#define ScavTrap_H

#include "ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap
{
protected:
    int EnergyPns;
public:
    ScavTrap();
    ~ ScavTrap();
    ScavTrap(const ScavTrap &obj);
    ScavTrap &operator=(const ScavTrap&obj);
    ScavTrap(std::string name_);
    void attack(const std::string& target);
    void guardGate();
};

#endif