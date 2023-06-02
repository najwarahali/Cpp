/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:28:08 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/20 23:54:19 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed{
      private:
            float fixed;
            static const int nb = 8;
      public:
      Fixed();
      Fixed(const Fixed &a);
      Fixed(const int n);
      Fixed(const float n);
      Fixed &operator = (const Fixed&a);
      float toFloat( void ) const;
      int toInt( void ) const;
      ~Fixed();
};

std::ostream &operator <<(std::ostream &output,const Fixed  &ojb);

#endif
