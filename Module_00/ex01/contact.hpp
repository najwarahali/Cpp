/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:30:39 by nrahali           #+#    #+#             */
/*   Updated: 2022/10/19 17:42:58 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACET_H
#define CONTACET_H

#include <iostream>
#include <iomanip>

void    print();
void    print_3();
void    print_2();
void    print_string(std::string str);
int     check_is_digits(std::string s);
void    print_string_2(std::string str);

class Contact{
    private:    
    std::string first_name;
    std::string last_name;
    std::string  nickname;
    std::string  phone_number;
    std::string darkest_secret;
    bool boolean;
    
    public:
    void set_first_name(std::string first_name);
    std::string get_first_name();
    void set_last_name(std::string last_name);
    std::string get_last_name();
    void set_nickname(std::string nickname);
    std::string get_nickname();
    void set_phone_number(std::string phone_number);
    std::string get_phone_number();
    void set_darkest_secret(std::string darkest_secret);
    std::string get_darkest_secret();
    void set_boolean(bool status);
    bool get_boolean();
};
#endif