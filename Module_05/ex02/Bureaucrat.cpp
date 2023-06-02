/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:28:00 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/10 00:46:20 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():Name(" "), Grade(150){
    std::cout << "Bureaucrat:Default constructor" << std::endl;
}

Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat:Destructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : Name(obj.Name){
    std::cout << "Bureaucrat:Copy constructor" << std::endl;
    this->Grade = obj.Grade;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj){
    std::cout << "Bureaucrat:Assignement constructor" << std::endl;
    this->Grade = obj.Grade;
    return (*this);
}

Bureaucrat::Bureaucrat(const std::string name, int grade):Name(name){
    std::cout << "Bureaucrat:Parameterized Constructor" << std::endl;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->Grade = grade;
}

const std::string Bureaucrat::getName() const{
    return (this->Name);
}

int Bureaucrat::getGrade() const{
     return (this->Grade);     
}

void Bureaucrat::increment(){
    if (Grade == 1)
        throw  Bureaucrat::GradeTooHighException();
    this->Grade--;
}

void Bureaucrat::decrement(){
    if (Grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->Grade++;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &obj){
    output << obj.getName() << " , bureaucrat grade " << obj.getGrade() << "." ;
    return (output);
}

const char * Bureaucrat::GradeTooHighException::what() const throw(){
            return ("Bureaucrat:The Grade Is Too High .");
}
const char * Bureaucrat::GradeTooLowException::what() const throw(){
            return ("Bureaucrat:The Grade Is Too Low .");
}

void Bureaucrat::signForm(Form &obj){
    if (obj.GetSign() == true){
        std::cout << this->getName() << " signed " << obj.GetNameForm() << "." << std::endl;
    }
    if (obj.GetSign() == false){
         std::cout << this->getName() << " couldn’t sign " << obj.GetNameForm() << " because  of its sign value" << std::endl;
    }
}

void Bureaucrat::executeForm(Form const & form){
    form.execute(*this);
    std::cout << this->Name << " executed " << form.GetNameForm() << std::endl;
}