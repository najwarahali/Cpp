/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:34:48 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/11 16:18:05 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137){
    std::cout << "ShrubberyCreationForm:Default constructor" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm:Destructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj):Form("ShrubberyCreationForm",145,137){
    std::cout << "ShrubberyCreationForm:Copy constructor" << std::endl;
    this->target = obj.target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj){
    std::cout << "ShrubberyCreationForm:Assignement constructor" << std::endl;
    this->target = obj.target;
    return (*this);
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target_):Form("ShrubberyCreationForm",145,137),target(target_){
    std::cout << "ShrubberyCreationForm:Parameterized Constructor" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if (this->GetSign() == true && this->GetGradeExecute() >= executor.getGrade()){
        std::ofstream file(this->target + "_shrubbery");
        if (file.is_open()){
            file << "          &&& &&  & &&\n";
            file << "      && &\\/&\\|& ()|/ @, &&\n";
            file << "      &\\/(/&/&||/& /_/)_&/_&\n";
            file << "   &() &\\/&|()|/&\\/ '% & ()'\\\n";
            file << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
            file << "&&   && & &| &| /& & % ()& /&&\n";
            file << " ()&_---()&\\&\\|&&-&&--%---()~\n";
            file << "     &&     \\|||\n";
            file << "             |||\n";
            file << "             |||\n";
            file << "             |||\n";
            file << "       , -=-~  .-^- _\n";
            }
        else
            std::cout << "Unable to open file";
        }
    else
        throw ShrubberyCreationForm::GradeTooLowException();
}