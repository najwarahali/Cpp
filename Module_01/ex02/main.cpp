/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:21:04 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/28 18:19:25 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string  str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "The memory address of the string : "<< &str << std::endl;
    std::cout << "The memory address held by stringPTR : "<< stringPTR  << std::endl;
    std::cout << "The memory address held by stringREF : "<< &stringREF  << std::endl;
    
    std::cout << "The value of the string : "<< str  << std::endl;
    std::cout << "The value pointed to by stringPTR : "<< *stringPTR << std::endl;
     std::cout << "The value pointed to by stringREF : "<< stringREF  << std::endl;
    return 0;
}