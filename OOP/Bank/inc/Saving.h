#pragma once

#include <Account.h>

class Saving : public Account
{
    float mRate;
    public:
    Saving(const std::string &name, float balance, float rate);
    ~Saving();

    void AccumlateInterest()override;
    float GetInerest()const override;

};
