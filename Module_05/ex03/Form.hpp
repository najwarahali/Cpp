/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 15:31:27 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 20:45:22 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  Form_H
#define  Form_H

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;
class  Form
{
private:
    const std::string NameForm;
    bool Sign;
    const int GradeSign;
    const int GradeExecute;
public:
    Form();
    virtual ~Form();
    Form (const Form &obj);
    Form &operator=(const Form &ojb);
    Form(const std::string NameForm_, int gradeSign_, int gradeExecute_);
    const std::string GetNameForm() const;
    bool GetSign() const;
    int GetGradeSign() const;
    int GetGradeExecute() const;
    class GradeTooHighException: public std::exception
    {
    public:
          const char* what() const throw();
    };
    class GradeTooLowException: public std::exception
    {
    public:
          const char* what() const throw();
    };
    void beSigned(Bureaucrat &obj);
    virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &output,const Form &obj);

#endif