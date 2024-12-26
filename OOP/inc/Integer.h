#pragma once
class Integer
{
    int *mPInt;
    public:
    Integer();
    Integer(int value);
    Integer(const Integer &value); //to avoid the shallow copy 
    int GetValue() const;
    void SetValue(int value);
    ~Integer();
};