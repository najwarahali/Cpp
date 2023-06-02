/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:28:08 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/20 23:38:51 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed{
      private:
            int raw;
            static const int nb = 8;
      public:
      Fixed();
      Fixed(const Fixed &a);
      Fixed &operator = (const Fixed&a);
      ~Fixed();
      int getRawBits( void ) const;
      void setRawBits( int const raw );
};

#endif
