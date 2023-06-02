/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:15:15 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/27 21:21:40 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl{
    private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
    public:
    void complain( std::string level );
};

#endif
