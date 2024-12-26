#pragma once
#include "Integer.h"
class Number
{
    Integer m_Value;
    public:
    Number(int value);
   Number()=default; //default constructor
   Number(const Number & obj)=default;//default copy constructor
   Number &operator=(const Number&)= default;//copy assignment
   Number(Number && obj)=default;// move constructor
   Number &operator=(Number &&obj)= default; //move assignemert

};