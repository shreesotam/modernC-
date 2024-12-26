#pragma once
class Car
{
private:
    float fuel;
    float speed;
    int passengers;
public:
    Car();
    Car(float amount);
    ~Car();
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard() const; //const for restricting the value change of the memebets
};