/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 00:18:40 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/19 16:22:06 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"


int main(int ac, char **av)
{
    Phone_Book contact;
    std::string option;
    std::string str;
    
    int i = 0;
    while (1)
    {
        print();
        std::cin >> option;
         if (std::cin.eof())
             exit(0);
        if (strcmp(option.c_str(), "ADD") == 0)
        {
            std::cout << "------- ADD CONTACT NUMBER " << i << "-------" << std::endl;
            std::cout << std::endl;
            while(getline(std::cin,str))
            {
                contact.nmb_cont[i].set_first_name(str);
                if(!str.empty())
                    break;
                std::cout << "First name : ";
            }
            std::cout << "Last name: ";
                while(getline(std::cin,str))
            {
                contact.nmb_cont[i].set_last_name(str);
                if(!str.empty())
                    break;
                std::cout << "Last name: ";
            }
            std::cout << "Nickname: ";
            while(getline(std::cin,str))
            {
                contact.nmb_cont[i].set_nickname(str);
                if(!str.empty())
                    break;
                std::cout << "Nickname: ";
            }
            std::cout << "Phone number: "; 
            std::string s;
            while(getline(std::cin,str))
            { 
                contact.nmb_cont[i].set_phone_number(str);
                s = str;
                if (check_is_digits(s) == 1 && !s.empty())
                    break;
                std::cout << "Phone number: ";
            }
            std::cout << "Darkest secret: ";
            while(getline(std::cin,str))
            {
                contact.nmb_cont[i].set_darkest_secret(str);
                if(!str.empty())
                    break;
                std::cout << "Darkest secret: ";
            }
            contact.nmb_cont[i].set_boolean(true);
            i++;
            if (i == 8)
                i = 0; 
        }
        
        else if (strcmp(option.c_str(), "SEARCH") == 0)
        {
            int j = 0;
            print_2();
            while (j < 8)
            {
                if (contact.nmb_cont[j].get_boolean() == false)
                    break;
                std::cout << std::setw(5);
                std::cout << j;
                std::cout << std::setw(5);
                std::cout << "|";
                std::string str_first_name = contact.nmb_cont[j].get_first_name();
                print_string(str_first_name);
                std::string str_last_name = contact.nmb_cont[j].get_last_name();
                print_string(str_last_name);
                std::string str_nickname = contact.nmb_cont[j].get_nickname();
                print_string_2(str_nickname);
                std::cout << std::endl;
                j++;
            }
            print_3();
            std::string o;
            std::cin >> o;
            j = 0;
            if (check_is_digits(o) == 0)
            {
                std::cout << "INVALIDE OPTION" << std::endl;
            }
            else
            {
                int num = atoi(o.c_str());
                if (num < 0)
                {
                    std::cout << "--------------------" << std::endl;
                    std::cout << "Wrong index" << std::endl;
                    break ;
                }
                else if (num >= 0)
                {
                    while (j < i)
                    {
                        if (j == num)
                        {
                            std::cout << "------- CONTACT INFORMATION -------" << std::endl;
                            std::cout << std::endl;
                            std::cout << std::endl;
                            std::cout << "First name : ";
                            std::cout << contact.nmb_cont[j].get_first_name() << std::endl;
                            std::cout << "Last name: ";
                            std::cout << contact.nmb_cont[j].get_last_name() << std::endl;
                            std::cout << "Nickname: ";
                            std::cout << contact.nmb_cont[j].get_nickname() << std::endl;
                            std::cout << "Phone number: ";
                            std::cout << contact.nmb_cont[j].get_phone_number() << std::endl;
                            std::cout << "Darkest secret: ";
                            std::cout << contact.nmb_cont[j].get_darkest_secret() << std::endl;
                            break;
                        }
                        else
                            j++;
                    }
                }
            }
        }
        else if (strcmp(option.c_str(), "EXIT") == 0)
        {
            exit(1);
        }
        else {
            std::cout << std::endl;
             std::cout << "INCORRECT OPTION , PLEASE TRY AGAIN" << std::endl;
        }
    }
    return 0;
}


