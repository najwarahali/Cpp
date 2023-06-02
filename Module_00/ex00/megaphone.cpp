/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 23:22:39 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/07 19:17:43 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    if (ac > 1)
    {
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if (islower(av[i][j]))
                    av[i][j] = toupper(av[i][j]);
                std::cout << (av[i][j]);
                j++;
            } 
            i++;
        }
        std::cout << "\n";  
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}