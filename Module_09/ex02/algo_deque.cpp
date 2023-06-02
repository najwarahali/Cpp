/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_deque.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:58:04 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:36:18 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void deque_fun(char **av, PmergeMe &obj){
    double num  = 0;
    int last_num = 0;
    int i = 1;
    
    while (av[i])
    {
        if (valide_number(av[i]) == 1){
            std::stringstream s;
            s << av[i]; 
            s >> num;
            if (num > INT_MAX){
                std::cout << "Error" << std::endl;
                exit(1);
            }
            obj.numbers_.push_back(num);
        }
        else
            return ;
        i++;
    }
    
    // std::cout << "Before: ";
    // for(std::deque<int>::iterator it = obj.numbers_.begin(); it != obj.numbers_.end() ; it++){
    //     std::cout << " " << *it;
    // }
    // std::cout << std::endl;
    
    clock_t commence_ = clock();
    
    if (obj.numbers_.size() % 2 != 0)
        last_num = *(obj.numbers_.end() - 1); 

    for(std::deque<int>::iterator it = obj.numbers_.begin(); it != obj.numbers_.end() ; it+=2){ 
        if(obj.numbers_.size() % 2 != 0){
             if(it + 1 == obj.numbers_.end())
                break;
        }
        obj.pair_numbers_.push_back(std::make_pair(*it ,*(it + 1)));
    }

    
    for(std::deque<std::pair <int , int > >::iterator it = obj.pair_numbers_.begin(); it != obj.pair_numbers_.end() ; it++){
        if(it->first > it->second)
            my_swap(it->first,it->second);
    }


    for(std::deque<std::pair <int , int > >::iterator it = obj.pair_numbers_.begin(); it != obj.pair_numbers_.end() ; it++){
        obj.small_.push_back((*it).first);
        obj.big_.push_back((*it).second);
    }

    std::deque<int>::iterator low;
    for(std::deque<int>::iterator it = obj.big_.begin(); it != obj.big_.end() ; it++){
        low = lower_bound(obj.SortedD.begin(), obj.SortedD.end(), *it);
        obj.SortedD.insert(low,*it);
    }

    std::deque<int>::iterator lower;
    for(std::deque<int>::iterator it = obj.small_.begin(); it != obj.small_.end() ; it++){
        lower = lower_bound(obj.SortedD.begin(), obj.SortedD.end(), *it);
        obj.SortedD.insert(lower,*it);
    }

    
    if (obj.numbers_.size() % 2 != 0){
        lower = lower_bound(obj.SortedD.begin(), obj.SortedD.end(), last_num);
        obj.SortedD.insert(lower,last_num);
    }

    
    clock_t stop_ = clock();
    obj.time_deque =  stop_ - commence_;
    // std::cout << "After: ";
    // for(std::deque<int>::iterator it = obj.SortedD.begin(); it != obj.SortedD.end() ; it++){
    //     std::cout << " " << *it;
    // }
    // std::cout << std::endl;
}
