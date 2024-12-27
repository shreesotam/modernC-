#pragma once
#include<string>
#include<iostream>

class Account
{
    std::string mName;
    
    int mAccNo;
    static int sAcGen;
    protected:
    float mBalance;
    public:
    Account(const std::string &name, float balance);
    ~Account();
    const std::string GetName()const;
    float GetBalance()const;
    int GetAccountNo();

    void AccumlateInterest();
    virtual void  Withdraw(float amount);
    virtual void Deposite(float amount);
    float GetInerest()const;
};