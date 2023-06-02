/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:40:34 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:40:37 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av){
    RPN obj;

    if(ac == 2){
        if(valide_string(av[1]) == 1){
            std::cout << "Error" << std::endl;
            return 1;
        }
        Reverse_Polish_Notation(av[1], obj);
        if (obj.Operand.size() == 1)
            std::cout << obj.Operand.top() << std::endl;
        else{
            std::cout << "Error" << std::endl;
            return 1;
        }
    }
    else 
        std::cout << "Error Args" << std::endl;
    return 0;
}