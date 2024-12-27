#include "Account.h"
int Account::sAcGen =10000;
Account::Account(const std::string &name, float balance): mName(name), mBalance(balance)
{
    mAccNo = ++sAcGen;
}

const std::string Account::GetName() const
{
    return mName;
}

float Account::GetBalance() const
{
    return mBalance;
}

int Account::GetAccountNo()
{
    return mAccNo;
}

void Account::AccumlateInterest()
{

}

void Account::Withdraw(float amount)
{
    if(mBalance>=amount)
    {
        mBalance-=amount;
    }
    else
    {
        std::cout<<"insufficeint balanc"<<"\n";
    }
}

void Account::Deposite(float amount)
{
    mBalance+=amount;
}

float Account::GetInerest() const
{
    return 0.0f;
}

Account::~Account()
{
}
