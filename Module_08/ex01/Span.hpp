/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 22:55:47 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/27 18:59:05 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>


class Span
{
private:
    std::vector<int> arry;
    unsigned int N;    
public:
    Span();
    ~Span();
    Span(const Span&obj);
    Span & operator=(const Span&obj);
    Span(unsigned int N);
    void addNumber(int n);
    class SpanExceptionER : public std::exception{
    const char *what() const throw();
    };
    class SpanExceptionERR : public std::exception{
    const char *what() const throw();
    };
    int  shortestSpan() const;
    int longestSpan() const;
    void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator second);
};


#endif