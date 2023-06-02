/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:49:19 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/18 16:22:02 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base * generate(void){
    //int random = offset + (rand() % range);
    srand(time(0)); // Initialize random number generator. 
    int random = 0 + (rand() % 3);
    if (random == 0){
        Base *a = new A;
        return a;   
    }
    if (random == 1){
        Base *b = new B;
        return b;   
    }
    if (random == 2){
        Base *c = new C;
        return c;
    }
    return (NULL);
}


void identify(Base* p){
    A *a = dynamic_cast<A *>(p);
    if (a == nullptr){
        std::cout << "A:UnSuccessful Cast" << std::endl;
    }
    else{
        std::cout << "A:Successful Cast" << std::endl;
    }
    B *b = dynamic_cast<B *>(p);
    if (b == nullptr){
        std::cout << "B:UnSuccessful Cast" << std::endl;
    }
    else{
        std::cout << "B:Successful Cast" << std::endl;
    }
    C *c = dynamic_cast<C *>(p);
    if (c == nullptr){
        std::cout << "C:Unsuccessful Cast" << std::endl;
    }
    else{
        std::cout << "C:Successful Cast" << std::endl;
    }
}


void identify(Base& p){
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A:Successful Cast" << std::endl;
    }
    catch(std::bad_cast& e)
    {
        std::cout << "A:UnSuccessful Cast" << std::endl;
    }
    try
    {
        B &b = dynamic_cast<B &>(p); 
        (void)b;
        std::cout  << "B:Successful Cast" << std::endl;
    }
    catch(std::bad_cast& e)
    {
        std::cout << "B:UnSuccessful Cast" << std::endl;
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C:Successful Cast" << std::endl;
    }
    catch(std::bad_cast& e)
    {
        std::cout << "C:UnSuccessful Cast" << std::endl;
    }
}