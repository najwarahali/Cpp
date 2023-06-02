/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:19:28 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/28 18:19:33 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie first_zombie("First Zombie");
    first_zombie.announce();

    Zombie *second_zombie;
    second_zombie = newZombie("Second Zombie");
    second_zombie->announce();
    
    randomChump("Third Zombie");
    delete(second_zombie);
    return 0;
}
