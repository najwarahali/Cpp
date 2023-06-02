/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utlis.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:19:16 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/19 17:30:00 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int find_point(std::string str){
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
            count++;
    }
    return (count);
}

int find_ft(std::string str){
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == 'f')
            count++;
    }
    return (count);
}


int check_one_point(std::string str){
    size_t point = str.find('.');
    if (point != std::string::npos){
        if (str[0] == '.'){
            return 1;
        }
        if (str[point + 1] == '\0' || isdigit(str[point + 1]) == 0){  
        return 1;
        }
    }
    return 0;
}

int check_error(std::string str){
    int point = str.find('.');
    int i = 0;
    while (i < point)
    {
        if (str[0] == '-' || str[0] == '+' ){
            i++;
        }
        if  (isdigit(str[i]) == 0 && str[i] != '.') {
            return 1;
        }
        else
            i++;
    }
    i = point;
    unsigned int k = point + 2;
    while (k < str.length())
    {
        if (str[k] == 'f' && str[k + 1] != '\0')
            return 1;
        if ((isdigit(str[k]) == 0) && str[k] != 'f' ){
            return 1;
        }
        k++;
    }
    return 0;
}

int check_strings(std::string str){
    if (str == "nan" || str == "nanf")
        return 1;
    if (str == "inf" || str == "inff")
        return 1;
    if (str == "-inf" || str == "-inff")
        return 1;
    if (str == "+inf" || str == "+inff")
        return 1;   
    return 0;
}

int check_digit(std::string str){
    for (size_t i = 0; i < str.length() ; i++)
    {
        if (str[0] == '+' || str[0] == '-')
            i++;
        else if ((isdigit(str[i])) == 0 && find_point(str) == 0)
            return 1;
    }
    return 0;
}