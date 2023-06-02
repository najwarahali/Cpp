/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:44:22 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 21:42:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern:Default constructor" << std::endl;
}

Intern::~Intern(){
    std::cout << "Intern:Destructor" << std::endl;
}

Intern::Intern(const Intern &obj){
    std::cout << "Intern:Copy constructor" << std::endl;
    (void)obj;
}

Intern &Intern::operator=(const Intern &obj){
    std::cout << "Intern:Assignement constructor" << std::endl;
    (void)obj;
    return (*this);
}

int check_indx(std::string name){
    std::string Names[3];
    Names[0] = "robotomy request";
    Names[1] = "presidential pardon";
    Names[2] = "shrubbery creation";

    for (int i = 0; i < 3; i++)
    {
        if (name == Names[i])
            return (i);
    }
    
    return (-1);
}
Form* Intern::makeForm(std::string name, std::string target){
    
    Form *ptr[3];
    ptr[0] = new RobotomyRequestForm(target);
    ptr[1] = new PresidentialPardonForm(target);
    ptr[2] = new ShrubberyCreationForm(target);

    int idx = check_indx(name);
    for (int i = 0; i < 3; i++)
    {
        if (i != idx)
            delete ptr[i];
    }
    for (int i = 0; i < 3; i++)
    {
        if (i == idx){
            std::cout << std::endl;
            std::cout << "Intern creates " << name << std::endl;
            return (ptr[i]);
        }  
    }
    std::cout << std::endl;
    std::cout << "Intern did not create " << name << std::endl;
    throw Form::GradeTooLowException();
    return (NULL);
}