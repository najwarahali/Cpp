/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:35:08 by nrahali           #+#    #+#             */
/*   Updated: 2022/11/28 22:50:00 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_H
#define WrongCat_H

#include "iostream"
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &obj);
    WrongCat &operator=(const WrongCat&obj);
    std::string getType() const;
    void makeSound() const;
};


#endif