#pragma once
class Integer
{
    int *mPInt;
    public:
    Integer();
    Integer(int value);
    Integer(const Integer &value); //to avoid the shallow copy. copy constructor
    Integer(Integer &&obj);//move constructor
    Integer & operator=(const Integer & obj); //copy assignment
    Integer & operator=(Integer && obj); //move assignment
    int GetValue() const;
    void SetValue(int value);
    ~Integer();
};

/*
Rule of 3:
Destructor
Copy constructor
copy assignment operator

Rule of 5
Destructor
Copy constructor
copy assignment operator
Move constructor
Move assignment operator

rule of 0
if no ownership 
*/