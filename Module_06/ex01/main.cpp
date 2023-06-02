/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 16:11:58 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/18 21:04:34 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(){
    Data *obj = new Data();
    std::cout << "Address of obj : "<<obj << std::endl;
    obj->a = 4;
    obj->b = 6;
    obj->c = 'A';
    std::cout << "Value of a "<< obj->a << std::endl;
    std::cout << "Value of b "<< obj->b << std::endl;
    std::cout << "Value of c "<<obj->c << std::endl;
    Data *obj2;
    std::cout << "Adress of obj 2 : "<<obj2 << std::endl;
    uintptr_t num = serialize(obj);
    int *i = reinterpret_cast<int*>(num);
    std::cout << "Value of first num : "<< *i << std::endl;
    i++;
    std::cout << "Value of second num : " << *i << std::endl;
    i++;
    char *ch = reinterpret_cast<char*>(i);
    std::cout << "Value of char : " << *ch << std::endl;
    obj2 = deserialize(num);
    obj2->a = 12;
    std::cout << "Adress of obj 2 again : "<<obj2 << std::endl;
    std::cout << "Value of a again : " << obj2->a << std::endl;
    std::cout << "Value of b again : " << obj2->b << std::endl;
    std::cout << "Value of c again : " << obj2->c << std::endl;
    delete(obj);
    return (0);
}