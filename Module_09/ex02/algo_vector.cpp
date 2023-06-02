/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_vector.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:58:14 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:37:47 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void vector_fun(char **av, PmergeMe &obj){
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
                exit(-1);
            }
            obj.numbers.push_back(num);
        }
        else
            return ;
        i++;
    }
    std::cout << "Before: ";
    for(std::vector<int>::iterator it = obj.numbers.begin(); it != obj.numbers.end() ; it++){
        std::cout << " " << *it;
    }
    std::cout << std::endl;
    
    clock_t commence = clock();
    
    
    if (obj.numbers.size() % 2 != 0)
        last_num = *(obj.numbers.end() - 1); 


    for(std::vector<int>::iterator it = obj.numbers.begin(); it != obj.numbers.end() ; it+= 2){ 
        if(obj.numbers.size() % 2 != 0){
             if(it + 1 == obj.numbers.end())
                break;
        }
        obj.pair_numbers.push_back(std::make_pair(*it ,*(it + 1)));
    }

    
    for(std::vector<std::pair <int , int > >::iterator it = obj.pair_numbers.begin(); it != obj.pair_numbers.end() ; it++){
        if(it->first > it->second)
            my_swap(it->first,it->second);
    }


    for(std::vector<std::pair <int , int > >::iterator it = obj.pair_numbers.begin(); it != obj.pair_numbers.end() ; it++){
        obj.small.push_back((*it).first);
        obj.big.push_back((*it).second);
    }
 
    std::vector<int>::iterator low;
    for(std::vector<int>::iterator it = obj.big.begin(); it != obj.big.end() ; it++){
        low = lower_bound(obj.SortedV.begin(), obj.SortedV.end(), *(it));
        obj.SortedV.insert(low,*(it));
    }
    
    std::vector<int>::iterator lower;
    for(std::vector<int>::iterator it = obj.small.begin(); it != obj.small.end() ; it++){
        lower = lower_bound(obj.SortedV.begin(), obj.SortedV.end(), *it);
        obj.SortedV.insert(lower,*it);
    }
    
    if (obj.numbers.size() % 2 != 0){
        lower = lower_bound(obj.SortedV.begin(), obj.SortedV.end(), last_num);
        obj.SortedV.insert(lower,last_num);
    }
    
    clock_t stop = clock();
    obj.time_vector = stop - commence;

    
    std::cout << "After: ";
    for(std::vector<int>::iterator it = obj.SortedV.begin(); it != obj.SortedV.end() ; it++){
        std::cout << " " << *it;
    }
    std::cout << std::endl;
}
