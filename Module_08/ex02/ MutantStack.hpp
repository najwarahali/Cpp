/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    MutantStack.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 22:50:16 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/28 19:52:56 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  MUTANSTACK_HPP
#define  MUTANSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class  MutantStack : public std::stack<T>
{
public:
   	typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack();
    ~ MutantStack();
    MutantStack(const MutantStack &obj);
    MutantStack &operator=(const MutantStack &obj);
    iterator begin();
    iterator end();
};

template <class T>
MutantStack<T>::MutantStack(){}

template <class T>
MutantStack<T>::~MutantStack(){}

template <class T>
MutantStack<T>::MutantStack(const MutantStack &obj){
    (void)obj;
}

template <class T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack &obj){
    (void)obj;
    return(*this);
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return(this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return(this->c.end());
}
#endif