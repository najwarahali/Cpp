/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:39:59 by nrahali           #+#    #+#             */
/*   Updated: 2023/06/02 13:43:22 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange&obj){
    (void)obj;
}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange&obj){
    (void)obj;
    return (*this);
}

void construction_map(BitcoinExchange &my_btc){
    int i = 0;
    std::string d;
    std::string key;
    std::string value;
    
    if(is_empty("data.csv") == true) {
        std::cout << "Empty file." << std::endl;
        exit(1) ;
    }
    std::ifstream data("data.csv");
    if (data.is_open()) {
        while (getline(data, d)) {
            i = 0;
            while (d[i])
            {
                if(d[i] == ',')
                    break;
                key += d[i];
                i++;
            }
            i++;
            while (d[i])
            {
                value += d[i];
                i++;
            }
            std::stringstream value_(value);
            double val;
            value_ >> val;
            my_btc.myMap.insert(std::pair<std::string, double>(key,val));
            key.clear();
            value.clear();
        }
    }
    else {
        std::cout << "Unable to open file." << std::endl;
        exit(1);
    }
    data.close();
}


void output(char** av, BitcoinExchange &my_btc){
    std::ifstream input_file(av[1]);
    int flag = 0;

    std::string date;
    std::string val;
    std::string line;
    std::string new_line;
    std::string find_date;

    if(is_empty(av[1]) == true) {
        std::cout << "Empty file." << std::endl;
        input_file.close();
        return ;
    }
    if (input_file.is_open()) {
            while (getline(input_file, line)){
            if (line.empty() || All_Spaces(line) == 1){
                continue;
            }
            flag++;
            size_t f = line.find("date");
            if (f == 0)
            {
                if (f == 0 && flag == 1)
                    continue;
                else
                {
                    std::cout << "Error: bad input => " << line << std::endl;
                    continue;
                }
            }
            if(Space_Case(line) == 0){
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            new_line  = Remove_All_Spaces(line);
            size_t pos = new_line.find("|");
            date = new_line.substr(0, pos);
            val = new_line.substr(pos + 1);
            for (size_t i = 0; i < val.length(); i++)
            {
                if(val[i] == ',')
                    val[i] = '.';
            }
            if (valide_date(date) == 1 || valide_value(val) == 0 || pos == std::string::npos || val.empty() ){
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            else
            {
                std::stringstream vall(val);
                double num ;
                vall >> num;
                if (num < 0){
                        std::cout << "Error: not a positive number." << std::endl;
                        continue;
                }
                if (num > 1000){
                        std::cout << "Error: too large a number." << std::endl;
                        continue;
                }
                std::map<std::string ,double>::iterator upp;
                upp = my_btc.myMap.upper_bound(date);
                    if((*upp).first != my_btc.myMap.begin()->first){
                        upp--;
                        std::cout << date << " => " << num << " = " << upp->second * num << std::endl;
                    }
                    else{
                       std::cout << "Error: bad input => " << date << " => " << val << std::endl; 
                }  
            }
        }
    }
    else {
        std::cout << "Unable to open file." << std::endl;
    }
    input_file.close();
}