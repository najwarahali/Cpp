/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 19:31:58 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/20 22:47:51 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"
#include "iostream"
#include <cstdlib>

class Point{
    private:
        Fixed const _x;
        Fixed const _y;
    public:
    Point();
    Point(float x, float y);
    Point(const Point &obj);
    const Point &operator = (const Point&obj);
    Fixed get_fixed_x() const;
    Fixed get_fixed_y() const;
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
 
#endif