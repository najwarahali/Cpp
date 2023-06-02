#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <sstream>
#include <cstring>

class BitcoinExchange
{
public:
    std::map<std::string, double> myMap;
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(const BitcoinExchange &obj);
    BitcoinExchange &operator=(const BitcoinExchange&obj);
};

int check_lines(std::ifstream &input_file);


void construction_map(BitcoinExchange &my_btc);
void output(char** av, BitcoinExchange &my_btc);


std::string Remove_All_Spaces(std::string s);
int Space_Case(std::string s);
bool is_empty(std::string s);


std::string Skip_Space(std::string s);
int check_number_of_(std::string s);


int valide_date(std::string s);
int valide_value(std::string new_s);


int All_Spaces(std::string s);
int check_digit_of_date(std::string s);
int  check_floating(std::string s);
int check_number_of_(std::string s);


#endif