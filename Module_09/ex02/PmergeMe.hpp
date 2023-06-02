#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>
#include <limits>
#include <algorithm>
#include <ctime>
#include <deque>


class PmergeMe{
public:
    double time_vector;
    double time_deque;
    
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe &obj);
    PmergeMe& operator=(const PmergeMe &obj);

    std::vector<int> numbers;
    std::vector<std::pair <int,int> > pair_numbers;
    std::vector<int> small;
    std::vector<int> big;
    std::vector<int> SortedV;
 
    std::deque<int> numbers_;
    std::deque<std::pair <int,int> > pair_numbers_;
    std::deque<int> small_;
    std::deque<int> big_;
    std::deque<int> SortedD;
};

int valide_number(std::string s);
void my_swap(int &a, int&b);
void vector_fun(char **av, PmergeMe &obj);
void deque_fun(char **av, PmergeMe &obj);

#endif