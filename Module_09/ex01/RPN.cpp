/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrahali <nrahali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 16:40:27 by nrahali           #+#    #+#             */
/*   Updated: 2023/05/30 16:40:30 by nrahali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &obj){
    (void)obj;
}

RPN &RPN::operator=(const RPN &obj){
    (void)obj;
    return (*this);
}

int check_space(std::string s){
    int i = 0;
    while (s[i])
    {
        if(isspace(s[i]) == 1)
            i++;
        else
            return 0;
    }
    return 1;
}

int valide_string(std::string s){
     if (s.empty() || check_space(s) == 1)
        return 1;
    unsigned long i = 0;
    for(i = 0; i < s.length(); i++){
        if (isdigit(s[i]) == 1 || isspace(s[i]) == 1 || s[i] == '-'
            || s[i] == '+' || s[i] == '*' || s[i] == '/')
            i++;
        else
            return 1;
    }
    return 0;
}


float operation(float op1, float op2, char operand){
    float result = 0 ;
    switch(operand){
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
        {
            if (op2 == 0)
                return -1;
            result = op1 / op2;
            break;
        }
    }
    return (result);
}

void Reverse_Polish_Notation(std::string s, RPN &obj){
    
    int i = 0;
    float result = 0 ;
    while (s[i])
    {
        if (s[i] == ' ')
            i++;
        if (isdigit(s[i]) == 1){
            std::string c(1,s[i]);
            obj.Operand.push(atoi(c.c_str()));
        }
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            if(obj.Operand.empty()){
                std::cout << "Error" << std::endl;
                exit(1);
            }

            float num_1 = obj.Operand.top();
            obj.Operand.pop();

            if(obj.Operand.empty()){
                std::cout << "Error" << std::endl;
                exit(1);
            }
            float num_2 = obj.Operand.top();
            obj.Operand.pop();

            result = operation(num_2 , num_1, s[i]);
            
            if (result == -1){
                std::cout << "Error : Devide by 0" << std::endl;
                exit(1);
            }
            obj.Operand.push(result);
        }
        i++;
    }
}
