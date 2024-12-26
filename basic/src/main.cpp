#include <iostream>
#include <basic.h>
#include <stdlib.h>
#include <stdio.h>
#include <Car.h>
#include <Integer.h>
#include <Number.h>

int main() {
   /*  Car car;
    car.Dashboard();
    car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    const Car car2(10);
    car2.Dashboard(); */
    std::cout<<"==============================================================================="<<"\n";
    Integer a(1), b(3);
    a.SetValue(Add(a,b).GetValue());
    //std::cout<<i.GetValue()<<"\n";
    //std::cout<<i.SetValue()<<"\n";
    Number n1{1};
    auto n2{n1};
    n2 =n1;
    auto n3{CreateNumber(3)};
    n3 = CreateNumber(3);
    return 0;
}
