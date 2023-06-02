/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:15:33 by nrahali           #+#    #+#             */
/*   Updated: 2022/12/19 00:14:35 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
#define CONVERT_H

#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
#include <iomanip>

void ft_convert_to_char(std::string str);
void ft_convert_to_int(std::string str);
void ft_convert_to_float(std::string str);
void ft_convert_to_double(std::string str);

int find_point(std::string str);
int check_one_point(std::string str);
int check_error(std::string str);
int check_strings(std::string str);
int check_digit(std::string str);
#endif
