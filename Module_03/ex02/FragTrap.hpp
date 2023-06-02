/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:58:35 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/25 19:42:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_H
#define FragTrap_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &obj);
    FragTrap &operator=(const FragTrap &obj);
    FragTrap(std::string name_);
    void highFivesGuys(void);
};

#endif