/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:28:14 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/19 16:56:41 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void    print()
{
        std::cout << std::endl;
        std::cout << "------- PLEASSE CHOOSE ONE OF THE OPTIONS -------" << std::endl;
        std::cout << std::endl;
        std::cout << "OPTION 1 : ADD" << std::endl;
        std::cout << std::endl; 
        std::cout << "OPTION 2 : SEARCH" << std::endl;
        std::cout << std::endl;
        std::cout << "OPTION 3 : EXIT" << std::endl;
        std::cout << std::endl;
}
void print_3()
{
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "*** What are the contact indices to search for? ***" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}
void print_2()
{
       std::cout << std::setw(10);
       std::cout << "index |";
       std::cout << std::setw(10);
       std::cout << "First name|";
       std::cout << std::setw(10);
       std::cout << "Last name |";
       std::cout << std::setw(10);
       std::cout << "Nickname";
       std::cout  << "\n";
       std::cout << std::setw(10);
       std::cout << "-------------------------------------------\n";
}

void print_string(std::string str)
{
    int l = str.length();
    int inx = 0;
    while (str[inx])
    {
        std::cout << str[inx];
        if (inx == 8)
            break;
        inx++;
    }
    if (inx == 8)
        std::cout << ".";
    else
        std::cout << std::setw((10 - l) + 1);
    std::cout << '|';
}

void print_string_2(std::string str)
{
    int l = str.length();
    int inx = 0;
    while (str[inx])
    {
        std::cout << str[inx];
        if (inx == 8)
            break;
        inx++;
    }
    if (inx == 8)
        std::cout << ".";
    else
        std::cout << std::setw((10 - l));
}

int   check_is_digits(std::string s)
{
    int id = 0;
    while (id < s.length()) 
    {
        if (isdigit(s[id]))
            id++;
        else
            return (0);
    }
    return (1);
}