/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:18:04 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/26 00:03:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA{
    std::string name;
    Weapon &W_HA;
    public:
    void attack();
    HumanA(std::string str,Weapon &club);
};