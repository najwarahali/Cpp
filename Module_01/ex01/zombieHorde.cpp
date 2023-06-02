/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:20:53 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/25 22:27:37 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    if (N < 0)
      return (NULL);
    Zombie *Zombies = new Zombie[N];
    for(int i = 0;i < N;i++)
    {
      Zombies[i].set_name(name);
      std::cout << i << " ";
      Zombies[i].announce();
    }
    return(Zombies);
}