/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:34:57 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/30 21:39:28 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_H
#define Cat_H

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
private:
Brain* objCat;
public:
    Cat();
    ~Cat();
    Cat(const Cat &obj);
    Cat &operator=(const Cat&obj);
    std::string getType() const;
    void makeSound() const;
    void DeepCopy(const Cat&obj);
};

#endif