/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:17:34 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 18:30:38 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_H
#define DiamondTrap_H

#include "iostream"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap ,public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &obj);
    DiamondTrap &operator=(const DiamondTrap&obj);
    DiamondTrap(std::string name_);
    std::string GetName() const;
    void whoAmI();
    void attack(std::string s);
};

#endif