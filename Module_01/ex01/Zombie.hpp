/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:20:47 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/30 19:28:07 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie* zombieHorde( int N, std::string name );

class Zombie{
    private:
    std::string name_n;
    
    public:
    void announce( void );
    Zombie(std::string zombie_name);
    Zombie();
    ~Zombie();
    void set_name(std::string name_name);
};

#endif