/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:20:07 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/28 17:26:43 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(int ac, char **av){

    int N = 10;

    Zombie *Zombies;
    Zombies = zombieHorde(N,"is Number of this ");
    delete []Zombies;
    return 0;
}