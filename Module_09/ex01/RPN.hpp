#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <ctype.h>
#include <stack>

class RPN
{  
public:
    std::stack<float> Operand;
    RPN();
    ~RPN();
    RPN(const RPN &obj);
    RPN &operator=(const RPN &obj);
};

void Reverse_Polish_Notation(std::string s, RPN &obj);
int valide_string(std::string s);

#endif