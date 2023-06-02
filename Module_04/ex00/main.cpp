/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:22:20 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/02 23:29:06 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    const WrongAnimal* Wrong = new WrongAnimal();
    const WrongAnimal* WrCat = new WrongCat();
    std::cout << Wrong->getType() << " " << std::endl;
    std::cout << WrCat->getType() << " " << std::endl;
    WrCat->makeSound();
    WrCat->makeSound();
    delete Wrong;
    delete WrCat;
}