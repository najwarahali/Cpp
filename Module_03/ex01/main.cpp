/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:26:02 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/25 01:05:56 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){
    ScavTrap obj("Njiwa");
    obj.attack("Attacker");
    obj.takeDamage(1);
    obj.beRepaired(1);
    obj.guardGate();
}