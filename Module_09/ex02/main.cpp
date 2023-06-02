/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:40:48 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:40:50 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av){
    PmergeMe obj;
    if (ac > 1){
      vector_fun(av, obj);
      deque_fun(av, obj);
      std::cout << "Time to process a range of  " << obj.numbers.size() << "  elements with std::vector : " << (obj.time_vector/CLOCKS_PER_SEC) * 1000000 << " us" <<  std::endl;
      std::cout << "Time to process a range of  " << obj.numbers_.size() << "  elements with std::deque  : " << (obj.time_deque/CLOCKS_PER_SEC) * 1000000 << " us"<< std::endl;  
    }
    else
        std::cout << "Error Args" << std::endl;
}

