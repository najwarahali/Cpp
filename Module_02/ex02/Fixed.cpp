/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 23:28:29 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/21 00:01:37 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed&b){
    
    this->fixed = b.fixed;
    return (*this);                 
}

Fixed::Fixed(const Fixed &a)
{
    this->fixed = a.fixed;
}

Fixed::Fixed(const int n)
{
    this->fixed = n * pow(2 , this->nb);
}

Fixed::Fixed(const float n)
{
    this->fixed = roundf(n * pow(2 , this->nb));
}

Fixed::Fixed()
{
    this->fixed = 0;
}

Fixed::~Fixed()
{

}

float Fixed::toFloat( void ) const{
    return (this->fixed / (pow(2 , this->nb)));
}

int Fixed::toInt( void ) const{
    return ((this->fixed / (pow(2, this->nb))));
}

std::ostream &operator <<(std::ostream &output,const Fixed  &ojb){ 
    
    output << ojb.toFloat();
    return (output);
}

int Fixed::operator < (const Fixed &obj) const
{
      if (this->fixed < obj.fixed) 
            return 1;
      else
            return 0;
}
int Fixed::operator > (const Fixed &obj) const
{
      if (this->fixed > obj.fixed)
            return 1;
      else
            return 0;
}
int Fixed::operator >= (const Fixed &obj) const
{
      if (this->fixed >= obj.fixed)
            return 1;
      else
            return 0;
}
int Fixed::operator <= (const Fixed &obj) const
{
      if (this->fixed <= obj.fixed)
            return 1;
      else
            return 0;
}
int Fixed::operator == (const Fixed &obj) const
{
      if (this->fixed == obj.fixed)
            return 1;
      else
            return 0;
}
int Fixed::operator != (const Fixed &obj) const
{
      if (this->fixed != obj.fixed)
            return 1;
      else
            return 0;
}

Fixed Fixed::operator * (const Fixed &obj)
{
    Fixed obj1;

    obj1.fixed = this->toFloat() * obj.toFloat();
    obj1.fixed = roundf(obj1.fixed * (pow(2, this->nb)));
    return (obj1);
}

Fixed Fixed::operator + (const Fixed &obj)
{
    Fixed obj1;

    obj1.fixed = this->toFloat() + obj.toFloat();
    obj1.fixed = roundf(obj1.fixed * (pow(2, this->nb)));
    return (obj1);
}

Fixed Fixed::operator - (const Fixed &obj)
{
    Fixed obj1;

    obj1.fixed = this->toFloat() - obj.toFloat();
    obj1.fixed = roundf(obj1.fixed * (pow(2, this->nb)));
    return (obj1);
}

Fixed Fixed::operator / (const Fixed &obj)
{
    Fixed obj1;

    obj1.fixed = this->toFloat() / obj.toFloat();
    obj1.fixed = roundf(obj1.fixed * (pow(2, this->nb)));
    return (obj1);
}

Fixed &Fixed::operator++()
{
    ++this->fixed;
    return (*this);
}

Fixed Fixed::operator++(int){
    Fixed tmp = (*this);
    this->fixed++;
    return (tmp);
}

Fixed &Fixed::operator--() 
{
    --this->fixed;
    return (*this);
}

Fixed Fixed::operator--(int){
    Fixed tmp = (*this);
    this->fixed--;
    return (tmp);
}

const Fixed &Fixed::min(const Fixed &obj1,const Fixed &obj2){
    if (obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}

const Fixed& Fixed::max(const Fixed &obj1,const Fixed &obj2){
    if (obj1 > obj2)
        return (obj1);
    else
        return (obj2);
}

Fixed &Fixed::min(Fixed &obj1,Fixed &obj2){
    if (obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}

Fixed &Fixed::max(Fixed &obj1,Fixed &obj2){
    if (obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}