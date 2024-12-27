#include <iostream>
#include <basic.h>
#include <stdlib.h>
#include <stdio.h>
#include <Car.h>
#include <Integer.h>
#include <Number.h>

Integer operator +(int val, const Integer &y)
{
    Integer temp;
    temp.SetValue(val+y.GetValue());
    return temp;
}
std::ostream & operator<<(std::ostream &out, const Integer &a)
{
    out << a.GetValue();
    return out;
}

std::istream & operator >>(std::istream &input, const Integer &a)
{
    int x;
    input>>x;
    *a.mPInt =x;
    return input;
}

int main() {
    operate(5);

    return 0;
}
