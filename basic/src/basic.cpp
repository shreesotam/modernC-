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

Integer Add(const Integer &a, const Integer &b)
{
    Integer temp;
    temp.SetValue(a.GetValue()+b.GetValue());
    return temp;
}

Integer Add(int a, int b)
{
    Integer temp(a+b);
    return temp;
}

Number CreateNumber(int num)
{
    Number n{3};
    return n;
}

void operate(int val)
{
    Integer *p = Getpointer(val);
    if (p==nullptr)
    {
        p = new Integer{val};
    }
    p->SetValue(100);
    Display(p);
    delete p;
    p =nullptr;
    p = new Integer{};
    *p =__LINE__;
    Display(p);
    delete p;

}

Integer *Getpointer(int val)
{
    Integer *p = new Integer{val};
    return p;
}

void Display(Integer *p)
{
    if(!p)
    {
        return;
    }
    std::cout<<p->GetValue()<<std::endl;
}
