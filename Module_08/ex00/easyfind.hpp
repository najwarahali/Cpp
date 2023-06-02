/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:55:47 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/27 18:27:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <vector>

class NotFound : public std::exception{
    const char *what() const throw();
};

const char*NotFound::what() const throw(){
    return ("Element not found.");
}

template<typename T>
void easyfind(T t, int j){
    typename T::iterator ptr;
    ptr = std::find (t.begin(), t.end(),j);
    if (ptr != t.end())
        std::cout << "Element " << j <<" found \n";
    else
        throw NotFound();
}

#endif