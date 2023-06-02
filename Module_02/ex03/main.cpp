/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:28:12 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/21 00:07:11 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) {

        Point a(0.0f, 0.0f);
        Point b(10.0f, 30.0f);
        Point c(20.0f, 0.0f);
        Point point(10.0f, 10);
        bool check = bsp(a,b,c,point);
        if (check == 1)
            std::cout << "Point is inside of triangle" << std::endl;
        else
            std::cout << "Point is outside of triangle" << std::endl;
    
    return 0;
}