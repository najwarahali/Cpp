/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:28:29 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/20 23:54:12 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed&b){
    
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed = b.fixed;
    return (*this);                 
}

Fixed::Fixed(const Fixed &a)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = a;
}

std::ostream &operator <<(std::ostream &output,const Fixed  &ojb){
    
    output << ojb.toFloat();
    return (output);
}

Fixed::Fixed(const int n)
{
    this->fixed = n * pow(2 , this->nb);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n)
{
    this->fixed = roundf(n * pow(2 , this->nb));
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
    return ((this->fixed / (pow(2 , this->nb))));
}

int Fixed::toInt( void ) const{
    return ((this->fixed / (pow(2, this->nb))));
}