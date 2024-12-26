#include <iostream>
#include <basic.h>
#include <stdlib.h>
#include <stdio.h>
#include <Car.h>
#include <Integer.h>

int main() {
    Car car;
    car.Dashboard();
    car.FillFuel(6);
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    car.Accelerate();
    const Car car2(10);
    car2.Dashboard();
    std::cout<<"==============================================================================="<<"\n";
    Integer i(5);
    Integer i2(i);
    std::cout<<i.GetValue()<<"\n";
    //std::cout<<i.SetValue()<<"\n";
    return 0;
}
