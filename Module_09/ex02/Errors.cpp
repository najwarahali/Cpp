/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Errors.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:25:40 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:26:36 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int valide_number(std::string s){
    int i = 0;
    while (s[i]){
 
        if (isdigit(s[i]) == 1 || (s[i] == '+' && isdigit(s[i + 1]) == 1 && isdigit(s[i - 1]) == 0))
            i++;
        else{
            std::cout << "Error" << std::endl;
            exit(1);
        }
    }
           
    return 1;
}
