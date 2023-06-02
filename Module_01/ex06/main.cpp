/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:13:51 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/30 23:12:19 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    std::string levels[4]
        = { "DEBUG", "INFO","WARNING", "ERROR"};
    Harl cmp;
    int i = -1;
    int j = 0;
    if (ac == 2)
    {
        while(j < 4)
        {
            while(strcmp(av[1], levels[j].c_str()) == 0)
            {
                i = j;
                break;
            }
            j++;
        }
        switch (i)
        {
            case 0 :
            {
                std::cout << "[ DEBUG ]" << std::endl;
                cmp.complain("DEBUG");
                std::cout << std::endl;
            }
            case 1 :
            {
                std::cout << "[ INFO ]" << std::endl;;
                cmp.complain("INFO");
                std::cout << std::endl;
            }
            case 2 :
            {
                std::cout << "[ WARNING ]" << std::endl;;
                cmp.complain("WARNING");
                std::cout << std::endl;
            }
            case 3 :
            {
                std::cout << "[ ERROR ]" << std::endl;;
                cmp.complain("ERROR");
                std::cout << std::endl;
                break;
            }   
            default:
            {
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                break;
            }
        }
    }
    return 0;
}