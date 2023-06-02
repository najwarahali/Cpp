/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:06:22 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/21 00:09:21 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed absl(Fixed b)
{
    if (b < Fixed(0))
        b = b * Fixed(-1);
    return (b);
}

Fixed area(Point const a, Point const b, Point const c){
    Fixed d(0.5f);

    return absl(((a.get_fixed_x() * (b.get_fixed_y() - c.get_fixed_y())) 
            +  (b.get_fixed_x() *  (c.get_fixed_y() - a.get_fixed_y()))
            + (c.get_fixed_x() * (a.get_fixed_y() - b.get_fixed_y())) ) * d);
}

bool line(Point const a, Point const point){
    if (point.get_fixed_y() == ((a.get_fixed_x() * point.get_fixed_x()) + (a.get_fixed_y())))
        return (true);
    else
        return (false);
}

bool bsp(Point const a, Point const b, Point const c, Point const point){

   Fixed A;
   A  = area (a,b,c);
   Fixed A1;
   A1 = area (point,b,c);
   Fixed A2;
   A2 = area (a,point,c);
   Fixed A3;
   A3 = area (a,b,point);
   if (line(a,point) == true || line(b,point) == true  || line(c,point) == true  || A == A1 + A2 + A3)
            return (1);
   else
        return (0);
}


