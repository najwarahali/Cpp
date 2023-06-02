/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:34:57 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/30 23:57:49 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_H
#define Cat_H

#include "Animal.hpp"
class Cat : public Animal
{
public:
    Cat();
    ~Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat&obj);
    std::string getType() const;
    void makeSound() const;
};

#endif