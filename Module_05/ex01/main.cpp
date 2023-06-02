/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:20:53 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/11 15:37:56 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    
    try{
        Bureaucrat N("Njiwa", 150);
        Form N1("Form", 15 , 5);
        std::cout << N << std::endl;
        std::cout << N1 << std::endl;
        N.signForm(N1);
        N1.beSigned(N);
        N.signForm(N1);
        }
    catch(std::exception  &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}