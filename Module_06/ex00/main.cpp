/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:11:58 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/19 17:29:37 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"


int main(int ac, char **av){
    if (ac == 2){
        std::string s = av[1];
        ft_convert_to_char(s);
        ft_convert_to_int(s);
        ft_convert_to_float(s); 
        ft_convert_to_double(s);
    }
    else
        std::cout << "Error of arguments" << std::endl;
    return (0);
}