/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:20:53 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/11 15:40:07 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
      try{
        std::cout << " ShrubberyCreationForm " <<std::endl;
        Bureaucrat Shrubbry("Njiwa", 15);
        std::cout << Shrubbry << std::endl;
        ShrubberyCreationForm obj1("njiwa_targ");
        obj1.beSigned(Shrubbry);
        Shrubbry.executeForm(obj1);
        
        }
    catch(std::exception  &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    try{
        std::cout << "RobotomyRequestForm " <<std::endl;
        Bureaucrat Roboto("Njiwa", 15);
        std::cout << Roboto << std::endl;
        RobotomyRequestForm obj2("njiwa_targ");
        obj2.beSigned(Roboto);
        Roboto.executeForm(obj2);
        
        }
    catch(std::exception  &e){
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    try{
        std::cout << "PresidentialPardonForm " <<std::endl;
        Bureaucrat President("Njiwa", 4);
        std::cout << President << std::endl;
        PresidentialPardonForm obj3("njiwa_targ");
        obj3.beSigned(President);
        President.executeForm(obj3);
        }
    catch(std::exception  &e){
        std::cout << e.what() << std::endl;
    }
    return (0);
}