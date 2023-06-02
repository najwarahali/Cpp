/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:18:17 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/26 00:14:28 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB{

    std::string name;
    Weapon *W_HB;
    
    public:
    void attack();
    void setWeapon(Weapon &W);
    HumanB(std::string str);
};