#include "Integer.h"

Integer::Integer()
{
    mPInt =new int(0);
}

Integer::Integer(int value)
{
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
    delete mPInt;
}

Integer::Integer(const Integer &value)
{
    //deep copy
    mPInt = new int(*value.mPInt);   
}
