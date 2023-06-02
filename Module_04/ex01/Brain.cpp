/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:11:14 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/04 16:58:05 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain:Default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain:Destructor" << std::endl;
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain:Copy constructor" << std::endl;
    for (int i = 0; i < 100 ;i++){
        ideas[i] = obj.ideas[i];
    }
}

Brain &Brain::operator=(const Brain&obj){
    std::cout << "Brain:Copy assignment" << std::endl;
    for (int i = 0; i < 100 ;i++){
        ideas[i] = obj.ideas[i];
    }
    return (*this);       
}

void Brain::SetBrain(std::string idea){
    for (int i = 0; i < 100; i++)
    {
        ideas[i] = idea;
    }
}