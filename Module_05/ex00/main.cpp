/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:20:53 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 23:13:11 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    
    try{
        Bureaucrat N("Njiwa", 149);
        std::cout << N << std::endl;
        N.decrement();
        }
    catch(std::exception  &e){
        std::cout << e.what() << std::endl;
        
    }
    return (0);
}