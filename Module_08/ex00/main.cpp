/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:16:19 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/27 18:27:19 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main(){
    try
    { 
        std::vector<int> v;
        for(int i = 0; i < 10 ; i++)
            v.push_back(i);
        easyfind(v, 9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    { 
        std::list<int> l;
        for(int i = 0; i < 20 ; i++){
            if (i % 2 == 0)
                l.push_back(i);
        }
        easyfind(l, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}