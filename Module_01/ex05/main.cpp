/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:13:51 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/27 22:04:28 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char**av)
{
    Harl cmp;
    std::cout << "DEBUG : ";
    cmp.complain("DEBUG");
    std::cout << "INFO : ";
    cmp.complain("INFO");
    std::cout << "WARNING :";
    cmp.complain("WARNING");
    std::cout << "ERROR : ";
    cmp.complain("ERROR");
    return 0;
}