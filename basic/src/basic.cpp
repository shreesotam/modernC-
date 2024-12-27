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

void operate(int val)
{
    std::unique_ptr<Integer>p{Getpointer(val)};
    if (p==nullptr)
    {
        //p = new Integer{val};
        p.reset(new Integer{val});
    }
    p->SetValue(100);
    Display(p.get());
    //p =nullptr;
    //p = new Integer{};
    p.reset(new Integer{val});
    *p =__LINE__;
    Display(p.get());
    Store(std::move(p));
    

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

void Store(std::unique_ptr<Integer> p)
{
    std::cout<<"storing"<<p->GetValue()<<"\n";
}

void Transact(Account *acc)
{
    std::cout<<"Transact started"<<"\n";
    std::cout<<"Intial bal: "<<acc->GetBalance()<<"\n";
    acc->Deposite(100);
    std::cout<<"after deposite bal: "<<acc->GetBalance()<<"\n";
    acc->AccumlateInterest();
    acc->Withdraw(170);
    std::cout<<"final bal: "<<acc->GetBalance()<<"\n";
}
