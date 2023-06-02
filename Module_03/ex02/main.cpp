/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:26:02 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/25 15:15:35 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
    FragTrap obj("njiwa again");
    obj.attack("Attacker");
    obj.takeDamage(1);
    obj.beRepaired(1);
    obj.highFivesGuys();
}