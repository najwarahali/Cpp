/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 23:32:54 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/27 22:47:40 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():N(0){

}

Span::~Span(){

}

Span::Span(const Span&obj){
    this->N = obj.N;
    this->arry = obj.arry;
}

Span::Span(unsigned int N){
    this->N = N;
}

Span & Span::operator=(const Span&obj){
    this->N = obj.N;
    this->arry = obj.arry;
    return (*this);
}

void Span::addNumber(int n){
    if (arry.size() >= N)
        throw SpanExceptionER();
    arry.push_back(n);
}

const char*Span::SpanExceptionER::what() const throw(){
    return ("There are already enough elements stored");
}

const char*Span::SpanExceptionERR::what() const throw(){
    return ("There are no numbers stored or only one");
}

int SortedShorterDis(int count){
    static std::vector<int> ar;
    ar.push_back(count);
    sort(ar.begin(), ar.end());
    std::vector<int>::const_iterator i = ar.begin();
    return (*i);
}

int Span::shortestSpan() const {
    if (arry.size() <= 1)
        throw SpanExceptionERR();
    std::vector<int> coy_arr(arry);
    sort(coy_arr.begin(), coy_arr.end());
    std::vector<int>::const_iterator it = coy_arr.begin();
    int n1 = 0, n2 = 0, count = 0, res = 0;
    while (it != coy_arr.end())
    {
        n1 = *it;
        it++;
        n2 = *it;
        count = n2 - n1;
        res = SortedShorterDis(count);
        if (it + 1 == coy_arr.end()){
            return(res);
        }
    }
    return (-1);
}

int Span::longestSpan() const {
     if (arry.size() <= 1)
        throw SpanExceptionERR();
    std::vector<int> coy_arr(arry);
    sort(coy_arr.begin(), coy_arr.end());
    std::vector<int>::const_iterator it = coy_arr.begin();
    std::vector<int>::const_iterator itt = coy_arr.end() - 1;
    return (*itt - *it);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator second){
    if (arry.size() >= N)
        throw SpanExceptionER();
    for (; first != second ; first++)
        arry.push_back(*first);
}