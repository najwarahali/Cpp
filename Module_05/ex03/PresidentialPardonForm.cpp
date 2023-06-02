/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:22:08 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 20:25:29 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm",25,5){
    std::cout << "PresidentialPardonForm:Default constructor" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm:Destructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj){
    std::cout << "PresidentialPardonForm:Copy constructor" << std::endl;
    this->target = obj.target;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj){
    std::cout << "PresidentialPardonForm:Assignement constructor" << std::endl;
    this->target = obj.target;
    return (*this);
}
PresidentialPardonForm::PresidentialPardonForm(std::string target_):Form("PresidentialPardonForm",25,5),target(target_){
    std::cout << "PresidentialPardonForm:Parameterized Constructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
     if (this->GetSign() == true && this->GetGradeExecute() >= executor.getGrade()){
        std::cout << this->target << "has been pardoned by Zaphod Beeblebrox ." << std::endl;
     }
    else
        throw PresidentialPardonForm::GradeTooLowException();
}