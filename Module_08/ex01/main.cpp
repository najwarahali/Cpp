/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:16:11 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/27 22:48:06 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try{
          Span sp = Span(5);
          sp.addNumber(6);
          sp.addNumber(3);
          sp.addNumber(17);
          sp.addNumber(9);
          sp.addNumber(11);
          std::cout << sp.shortestSpan() << std::endl;
          std::cout << sp.longestSpan() << std::endl;

        //    Span sp(10000);
        //    for (int i = 0; i < 10000; i++)
        //    {
        //       sp.addNumber(i);
        //    }
        //    std::cout << sp.shortestSpan() << std::endl;
        //    std::cout << sp.longestSpan() << std::endl;


        //    Span sp(1);
        //    sp.addNumber(55);
        //    std::cout << sp.shortestSpan() << std::endl;
           
        //    Span sp;
        //    std::cout << sp.longestSpan() << std::endl;

        // std::vector<int> v;
        // for (int i = 0; i < 10; i++)
        //    v.push_back(i);
        // Span sp(10);
        // sp.addNumber(v.begin() , v.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}