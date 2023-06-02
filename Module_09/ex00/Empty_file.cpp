/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Empty_file.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:29:37 by nrahali           #+#    #+#             */
/*   Updated: 2023/06/02 13:55:46 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int check_lines(std::ifstream &input_file)
{   int i = 0;
    std::string line;
    while (getline(input_file, line)){
        if (line.empty() || All_Spaces(line) == 1)
            i++;
        else 
            return 0;
    }
    return i;
}

bool is_empty(std::string s)
{
    std::ifstream input_file(s);
    if (input_file.is_open()){
        if (input_file.peek() == -1 || check_lines(input_file) != 0)
            return true;
    }
    else
        return false;
    return false;
}

