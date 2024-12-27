#pragma once
#include"Account.h"
#include "Saving.h"

class Checking: public Account
{
    public:
    //using Account::Account;
    //Checking(const std::string &name, float balance);
    ~Checking();
    void Withdraw(float amount)override;
};
