#include "Integer.h"
#include <iostream>

Integer::Integer()
{
    std::cout<<"Integer ()"<<std::endl;
    mPInt =new int(0);
}

Integer::Integer(int value)
{
    std::cout<<"Integer (int)"<<std::endl;
    mPInt = new int(value);
}

int Integer::GetValue() const
{
    return *mPInt;
}

void Integer::SetValue(int value)
{
    *mPInt =value;
}

Integer::~Integer()
{
    std::cout<<"~Integer ()"<<std::endl;
    delete mPInt;
}

Integer::Integer(const Integer &value)
{
    std::cout<<"Integer (const Integer &value)"<<std::endl;
    //deep copy
    mPInt = new int(*value.mPInt);   
}

Integer::Integer(Integer &&obj) //shallow copy. move constructor
{
    std::cout<<"Integer (Integer &&obj)"<<std::endl;
    mPInt=obj.mPInt; //no new address but same address referenced
    obj.mPInt =nullptr;
}

Integer &Integer::operator=(const Integer &obj)
{
    std::cout<<"Integer &Integer::operator=(const Integer &obj)"<<std::endl;
    if(this == &obj)
    {
        return *this;
    }
    delete mPInt;
    mPInt = new int(*obj.mPInt);
    return *this;
}

Integer &Integer::operator=(Integer &&obj)
{
    if(this == &obj)
    {
        return *this;
    }
    delete mPInt;
    mPInt = obj.mPInt;
    obj.mPInt = nullptr;
    return *this;
}

Integer Integer::operator+(const Integer &a)const
{
    Integer temp;
    *temp.mPInt = *mPInt+*a.mPInt;
    return temp;
}

Integer &Integer::operator++()
{
    ++(*mPInt);
    return *this;
}

Integer Integer::operator++(int)
{
    Integer temp(*this);
    ++(*mPInt);
    return temp;
}

bool Integer::operator==(const Integer &obj)const
{
    return *mPInt==*obj.mPInt;
}

void Integer::operator()()
{
    std::cout<<*mPInt<<std::endl;
}
