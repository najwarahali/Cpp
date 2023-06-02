/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:37:34 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 19:13:07 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm",72,45){
    std::cout << "RobotomyRequestForm:Default constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm:Destructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj){
    std::cout << "RobotomyRequestForm:Copy constructor" << std::endl;
    this->target = obj.target;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj){
    std::cout << "RobotomyRequestForm:Assignement constructor" << std::endl;
    this->target = obj.target;
    return (*this);
}
RobotomyRequestForm::RobotomyRequestForm(std::string target_):Form("RobotomyRequestForm",72,45),target(target_){
    std::cout << "RobotomyRequestForm:Parameterized Constructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
   
    int i = time(0);
    if (this->GetSign() == true && this->GetGradeExecute() >= executor.getGrade()){
       if (i % 2 == 0)
       {
           std::cout << "The " << this->target << " has been robotomized successfully" << std::endl;
       }
       else{
           
           std::cout << "The " << this->target << " has been robotomized unsuccessful" << std::endl;
       }
    }
    else
        throw RobotomyRequestForm::GradeTooLowException();
}