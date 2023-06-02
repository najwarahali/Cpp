/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:28:08 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/20 22:09:15 by nrahali          ###   ########.fr       */
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
      int operator < (const Fixed &obj) const;
      int operator > (const Fixed &obj) const;
      int operator >= (const Fixed &obj) const;
      int operator <= (const Fixed &obj) const;
      int operator == (const Fixed &obj) const;
      int operator != (const Fixed &obj) const;
      Fixed operator * (const Fixed &obj);
      Fixed operator - (const Fixed &obj);
      Fixed operator + (const Fixed &obj);
      Fixed operator / (const Fixed &obj);
};

std::ostream &operator <<(std::ostream &output,const Fixed  &ojb);

#endif
