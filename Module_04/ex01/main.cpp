/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:22:20 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/04 16:54:05 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(){
    Animal *Obj[4];
    Obj[0] = new Dog();
    Obj[1] = new Dog();
    Obj[2] = new Cat();
    Obj[3] = new Cat();
    for (int i = 0; i < 4; i++ ){
        Obj[i]->makeSound();
    }
    for (int i = 0; i < 4; i++){
        delete Obj[i];
    }
    Dog a;
    std::cout << std::endl;
    {
        std::cout << std::endl;
        Dog j;
        a = j;
        std::cout << std::endl;
    }
}