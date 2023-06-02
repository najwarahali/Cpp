/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:21:39 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/25 23:56:15 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>


class Weapon{
    private:
    std::string type;
    
    public:
    void setType(std::string type);
    const std::string &getType(void);
    Weapon(std::string str);
};

#endif