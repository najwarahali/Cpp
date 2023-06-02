/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:11:23 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/04 16:56:36 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_H
#define Brain_H

#include "iostream"

class Brain
{
private:
std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain &operator=(const Brain&obj);
    void SetBrain(std::string idea);
};

#endif