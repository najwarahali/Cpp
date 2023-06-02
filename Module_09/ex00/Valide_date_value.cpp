/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Valide_date_value.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:12:09 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/31 19:55:09 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int valide_date(std::string s){
    int i = 0;
    std::string year;
    std::string month;
    std::string day;

    if (check_digit_of_date(s) == 0 || check_number_of_(s) != 2)
        return 1;
    while (s[i])
    {
         if(s[i] == '-')
            break;
        year += s[i];
        i++;      
    }
    i++;
    while (s[i])
    {
         if(s[i] == '-')
            break;
        month += s[i];
        i++;      
    }
    i++;
    while (s[i])
    {
        day += s[i];
        i++;      
    }
    if (year.size() != 4 || month.size() != 2 || day.size() != 2)
        return 1;
    int y = atoi(year.c_str());
    int m = atoi(month.c_str());
    int d = atoi(day.c_str());
    if (((y == 2012 || y == 2016 || y == 2020) && (m == 2)) && d > 29){
        return 1;
    }
    if (((y != 2012 && y != 2016 && y != 2020) && (m == 2)) && d >= 29){
        return 1;
    }
    if ((m == 4 || m == 6 || m == 9 || m == 11) && (d > 30 || d < 1))
        return 1;
    if ((m != 4 && m != 6 && m != 9 && m != 11) && (d > 31 || d < 1))
        return 1;
    if (y < 2009 || y > 2022)
        return 1;
    if (m < 1 || m > 12)
        return 1;
    return 0;
} 



int valide_value(std::string s){
    int i = 0;
    i = 0;
    if(s[0] == '-' || s[0] == '+')
            i++;
    if(s[0] == '.')
        return 0;
    while (s[i]){ 
        if ((s[i] == '.' || s[i] == ',') && (isdigit(s[i + 1]) == 0))
            return 0;
        else if (isdigit(s[i]) == 1)
            i++;
        else if(s[i] == '.' || s[i] == ','){
            if(check_floating(s) != 1){
                return 0;
            }
            i++;
        } 
        else
            return 0;
    }
    return 1;
}






