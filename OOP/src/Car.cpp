#include "Car.h"
#include<iostream>

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

Car::Car()
{
    std::cout<<"Car()"<<"\n";
    fuel =0;
    speed =0;
    passengers=0;
}

Car::~Car()
{
    std::cout<<"~Car()"<<"\n";
}

Car::Car(float amount) :fuel(amount), speed(0), passengers(0)
{
    std::cout<<"param Car()"<<"\n";
}
