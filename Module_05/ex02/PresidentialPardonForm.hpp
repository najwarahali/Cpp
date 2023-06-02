/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:22:01 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/09 16:25:01 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_H
#define PresidentialPardonForm_H

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
   std::string target;
public:
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
    PresidentialPardonForm(std::string target_);
    void execute(Bureaucrat const & executor) const;
};


#endif