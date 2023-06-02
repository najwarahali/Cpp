/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:36:19 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 15:52:44 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int Space_Case(std::string s){
    int  i = 0 , j = 0, c = 0;
    
    std::string value;
    std::string value_2;
    std::string value_3;
    while (s[i])
    {
        if(s[i] == ' ' || isdigit(s[i]) == 1)
            i++;
        if (s[i] == '|')
            break;
        i++;
    }
    i++;
    while (s[i])
    {
        value += s[i];
        i++;
    }
    while(value[j]){
        if (value[j] == ' ')
            j++;
        else
            break;
    }
    while (value[j])
    {
        value_2 += value[j];
        j++;
    }
    while(value_2[c]){
        if(isdigit(value_2[c]) == 1 || value_2[c] == '.' || value_2[c] == ',' || value_2[c] == '+' || value_2[c] == '-')
            c++;
        else
            break;
    }
    while (value_2[c])
    {
        value_3 += value_2[c];
        c++;
    }
    for(size_t i = 0;i < value_3.length();i++){
        if (!isspace(value_3[i])){
            return 0;
        }
    }
    return 1;
}

std::string Remove_All_Spaces(std::string s){
    std::string str;
    for(size_t i = 0;i < s.length() ; i++){
        if (!isspace(s[i]))
            str += s[i];
    }
    return str;
}