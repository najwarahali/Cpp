/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 17:41:54 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 20:30:13 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
#define Intern_H

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:

public:
    Intern();
    ~Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);
    Form* makeForm(std::string name, std::string target);
};

#endif