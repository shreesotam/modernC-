#include "Saving.h"

Saving::Saving(const std::string &name, float balance, float rate):Account(name, balance), mRate(rate)
{
}

Saving::~Saving()
{
}

float Saving::GetInerest() const
{
    return mRate;
}

void Saving::AccumlateInterest()
{
    mBalance+=(mBalance*mRate);
}