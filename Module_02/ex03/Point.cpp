/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:32:15 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/20 22:20:48 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():_x(0),_y(0){
    
}

Point:: Point(float x, float y): _x(x), _y(y){
    
}

Point::Point(const Point &obj) : _x(obj.get_fixed_x()), _y(obj.get_fixed_y()) {
    
}

const Point &Point::operator = (const Point&obj) {
    (void) obj;
    return (*this);                 
}

Fixed Point::get_fixed_x() const
{
    return (_x);
}

Fixed Point::get_fixed_y() const
{
    return (_y);
}

Point::~Point()
{
}
