/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:16:23 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/19 19:06:52 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void ft_convert_to_char(std::string str){
    if (str.length() == 1 && isdigit(str[0]) == 0){
         std::cout << "char: '" << str[0] << "'" <<std::endl;
         return ;
    }
    if (check_one_point(str) == 1 ||check_error(str) == 1 || find_point(str) > 1)
    {
        std::cout << "char : impossible" << "\n"; 
        return ;
    }
    
    int num = std::atoi(str.c_str()); 
    if (num >= 0 && num <= 255)
    {
        if(isprint(num) == 0)
            std::cout << "char: Non displayable" << std::endl;
        else
        {
            char c = static_cast<char>(num);
            std::cout << "char: '" << c << "'" <<std::endl;
        }
    }
    else{
        std::cout << "char: impossible" << std::endl;
    }
}

void ft_convert_to_int(std::string str){
    if (check_one_point(str) == 1 || check_error(str) == 1 || find_point(str) > 1 || check_digit(str) == 1 )
    {
        std::cout << "int : impossible" << "\n"; 
        return ;
    }
    int n = std::atoi(str.c_str());
    if ((n >= -2147483648 && n < 0 && str[0] != '-') || (n <= 2147483647 && n > 0 && str[0] == '-'))
    {
        std::cout << "int: impossible" << '\n';
        return ;
    }
    int num = static_cast<int>(n);
    std::cout << "int :" << num << std::endl;
}


void ft_convert_to_float(std::string str){
    if ((check_one_point(str) == 1 || check_error(str) == 1 || find_point(str) > 1|| check_digit(str) == 1)  && check_strings(str) == 0 )
    {
        std::cout << "float : impossible" << "\n"; 
        return ;
    }
    int point = str.find('.');
    std::string s = str.substr(point + 1,str.length());  
    int len = 0;
    unsigned long  i = point + 1;
    if (point != -1){
        while (str[i])
        {
            if (isdigit(str[i]) == 1)
                len++;
            else
                break;
            i++;
         } 
    }
    if (point == -1)
    len  = 1;
    float n = std::strtof(str.c_str(),NULL);
    float num = static_cast<float>(n);
    std::cout << std::fixed << std::setprecision(len) << "float :" << num << "f" <<  std::endl;
}

void ft_convert_to_double(std::string str){
    if ((check_one_point(str) == 1 || check_error(str) == 1 || find_point(str) > 1|| check_digit(str) == 1)  && check_strings(str) == 0 )
    {
        std::cout << "double : impossible" << "\n";
        return ;
    }
    double n = std::strtod(str.c_str(), NULL);
    double num = static_cast<double>(n);
    std::cout << "double :" << num  << std::endl;
}
