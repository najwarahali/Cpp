  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:36:14 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/08 18:24:40 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():NameForm(" "),Sign(false),GradeSign(0),GradeExecute(0){
    std::cout << "Form:Default constructor" << std::endl;
}

Form::~Form(){
    std::cout << "Form:Destructor" << std::endl;
}

Form::Form(const Form &obj):NameForm(obj.NameForm),GradeSign(0),GradeExecute(0){
    std::cout << "Form:Copy constructor" << std::endl;
    this->Sign = obj.Sign;
}

Form &Form::operator=(const Form &obj){
    std::cout << "Form:Assignement constructor" << std::endl;
    this->Sign = obj.Sign;
    return (*this);
}
Form::Form(const std::string NameForm_,int gradeSign_, int gradeExecute_):NameForm(NameForm_),GradeSign(gradeSign_),GradeExecute(gradeExecute_){
    std::cout << "Form:Parameterized Constructor" << std::endl;
    if (gradeSign_ < 1 || gradeExecute_ < 1)
        throw Form::GradeTooHighException();
    if (gradeSign_ > 150 || gradeExecute_ > 150)
        throw Form::GradeTooLowException();
    this->Sign = false;
}
const std::string Form::GetNameForm() const{
    return(this->NameForm);
}

bool Form::GetSign() const{
    return(this->Sign);
}

int Form::GetGradeSign() const{
    return(this->GradeSign);
}

int Form::GetGradeExecute() const{
    return(this->GradeExecute);
}

std::ostream &operator<<(std::ostream &output, const Form &obj){
    output << obj.GetNameForm() << " , with sign " << obj.GetSign() << " and grade required to sign is " << obj.GetGradeSign() << 
        " grade required to execute is " << obj.GetGradeExecute() << " .";
    return (output);
}

const char * Form::GradeTooHighException::what() const throw(){
            return ("Form:The Grade Is Too High .");
}
const char * Form::GradeTooLowException::what() const throw(){
            return ("Form:The Grade Is Too Low .");
}

void Form::beSigned(Bureaucrat &obj){
    if (obj.getGrade() >  150)
        throw Form::GradeTooLowException();
    if (obj.getGrade() < 1)
        throw Form::GradeTooHighException();
    else
        this->Sign = true;
}