#include "Car.h"
#include<iostream>

int Car::totalCount =0;
void Car::FillFuel(float amount)
{
    fuel = amount;
}

void Car::Accelerate()
{
    speed++;
    fuel-=0.5f;
}

void Car::Brake()
{
    speed=0;
}

void Car::AddPassengers(int count)
{
    passengers= count;
}

void Car::Dashboard() const
{
    std::cout<<"Fuel: "<<fuel<<"\n";
    std::cout<< "speed: "<<speed<<std::endl;
    std::cout<< "passengers: "<<passengers<<std::endl;
    
}

Car::Car(): Car(0)
{

}

Car::~Car()
{
    std::cout<<"~Car()"<<"\n";
}

Car::Car(float amount):Car(amount,0)
{
    std::cout<<"param Car()"<<"\n";
}

Car::Car(float amount, int pass): fuel(amount), passengers(pass), speed(0)
{
    ++totalCount;
    
}
