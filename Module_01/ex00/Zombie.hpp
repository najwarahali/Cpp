/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:19:59 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/28 17:24:35 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
    private:
    std::string name_n;
    
    public:
    void announce( void );
    Zombie(std::string zombie_name);
    Zombie();
    ~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif