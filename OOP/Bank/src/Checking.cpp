#include "Checking.h"

/*Checking::Checking(const std::string &name, float balance): Account(name, balance)
{

}*/

Checking::~Checking()
{
}

void Checking::Withdraw(float amount)
{
    if((mBalance-amount)>50)
    {
        Account::Withdraw(amount);
    }
    else{
        std::cout<<"balance wil fall 50 or below"<<"\n";
    }
}
