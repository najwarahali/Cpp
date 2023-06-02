/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:24:03 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/08 16:49:36 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_H
#define Bureaucrat_H

#include <iostream>

class Bureaucrat
{
private:
    const std::string Name;
    int Grade;
public:
    Bureaucrat();
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& obj);
    Bureaucrat &operator=(const Bureaucrat &obj);
    Bureaucrat(const std::string Name, int grade);
    const std::string getName() const;
    int getGrade() const;
    void increment();
    void decrement();
    class GradeTooHighException : public std::exception
    {
    public:
          const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
          const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &output,const Bureaucrat &obj);

#endif