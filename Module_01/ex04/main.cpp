/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:13:51 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/30 19:33:45 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int ac, char**av)
{
    std::string str;
    std::string storage_str;
    std::string storage;
    std::string ext = ".replace";
    
    std::string nl = "\n";
    if (ac == 4)
    {
        std::string file = av[1];
        std::string find = av[2];
        std::string rep = av[3];
        std::string created_file = av[1] + ext;
        std::ifstream myfile;
        myfile.open(file);
        if (find.empty())
        {
            std::cout << "Error , string is empty" << std::endl;
            exit(1);
        }    
        if (myfile.is_open())
        {
            while (getline (myfile,str))
            { 
               size_t found = 0;
                 while ((found = str.find(find, found)) != std::string::npos)
                 {
                    str.erase(found,find.length());
                    str.insert(found,rep);
                    found += rep.length();
                 } 
               storage_str += str + nl;
            }
            myfile.close();
        }
        else 
        {
            std::cout << "Unable to open this file" << std::endl;
            exit(1);
        }
        std::ofstream file_replace;
        file_replace.open(created_file);
        if (file_replace.is_open())
        {
            file_replace << storage_str;
            file_replace.close();
        }
        else
        {
            std::cout << "Unable to open this replace file" << std::endl;
            exit(1);
        }
    }
    else
    {
        std::cout << "Error args , please  program takes three parameters : filename , string s1 and string s2" << std::endl;
        exit(1);
    }
    return 0;
}