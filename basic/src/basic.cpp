#include "basic.h"
#include <iostream>

int Add(int *a, int *b)
{
    int result = *a+*b;
    return result;
}
void AddVal(int *a, int *b, int *result)
{
    *result = *a+*b;
}
void Swap(int *a, int *b)
{
    int *temp = b;
    b= a;
    a = temp;
    std::cout<<"a: "<<*a<<" b :"<<*b<<std::endl;
}
void Factorial(int * a, int *result)
{
    int f = *a;
    for(int i =1; i<= f; ++i)
    {
        f=f*i;
        std::cout<<"f: "<<f<<" i: "<<i<<"\n";
    }
    *result = f;
    std::cout<<"result: "<<*result<<"\n";
}

void sumup(int a, int b, int &result)
{
    result= a+b;
}
void xt(int &a, int& b)
{
    int temp =a;
    a =b;
    b=temp;
}
void Fact(int &a, int &result)
{
    int temp =a;
    for(int i = 1; i<=a;i++)
    {
        temp= temp*i;
    }
    result =temp;
}