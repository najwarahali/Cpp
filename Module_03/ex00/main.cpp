/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:26:02 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/26 15:10:54 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
int main(){
    ClapTrap obj("njiwa");
    obj.attack("Attacker");
    obj.takeDamage(1);
    obj.beRepaired(1);
}