/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:40:57 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:40:59 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){

}

PmergeMe::~PmergeMe(){
    
}

PmergeMe::PmergeMe(const PmergeMe &obj){
    (void)obj;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &obj){
    (void)obj;
    return(*this);
}