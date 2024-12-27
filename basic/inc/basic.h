#include"Integer.h"
#include "Number.h"
#include <memory>
#include "Account.h"

int Add(int *a, int *b);
void AddVal(int *a, int *b, int *result);
void Swap(int *a, int *b);
void Factorial(int * a, int *result);

void sumup(int a, int b, int &result);
void xt(int &a, int& b);
void Fact(int &a, int &result);
Integer Add(const Integer &a, const Integer &b);
Integer Add(int a, int b);
Number CreateNumber(int num);
Integer operator +(int val, const Integer &y);
std::ostream & operator<<(std::ostream &out, const Integer &a);
std::istream & operator >>(std::istream &input, const Integer &a);
void operate(int val);
Integer *Getpointer(int val);
void Display(Integer *p);
void Store(std::unique_ptr<Integer> p);

void Transact(Account* acc);
