#include <iostream>
#include <basic.h>
#include <stdlib.h>
#include <stdio.h>
#include <Car.h>
#include <Integer.h>
#include <Number.h>
#include <memory>
#include<Project.h>
#include <Account.h>
#include <Checking.h>

void ShowInfo(std::shared_ptr<Employee> &emp)
{
    emp->GetProject()->ShowProjectDetails();
}
int main() {
    
    //Checking chk("shree", 100);
    //chk.Withdraw(60);
    Saving sav("shree", 100, 0.05f);
    Transact(&sav);

    return 0;
}
