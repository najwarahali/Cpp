/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:40:15 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:40:17 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int check_number_of_(std::string s){
    int i = 0,c = 0;
    while (s[i]){
        if(s[i] == '-')
            c++;
        i++;
    }
    return c;
}

int check_digit_of_date(std::string s){
    int i = 0;
    while (s[i]){
        if(isdigit(s[i]) == 1 || s[i] == '-')
            i++;
        else
            return 0;
    }
    return 1;
}
int  check_floating(std::string s){
    int i = 0 , c = 0;
    while (s[i])
    {
        if (s[i] == '.' || s[i] == ',')
            c++;
        i++;
    }
    return (c);
}

int All_Spaces(std::string s){
    int i = 0;
    while (s[i]){
        if(isspace(s[i]) != 0)
            i++;
        else
            return 0;
    }
    return 1;
}


