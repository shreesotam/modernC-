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
#include <limits>

void ShowInfo(std::shared_ptr<Employee> &emp)
{
    emp->GetProject()->ShowProjectDetails();
}

int ProcessRecord(int count)
{
    if (count<10)
    {
        throw std::out_of_range("Count out of range");
    }
    int *p = new int[count];
    int *pArry = (int*)malloc(count * sizeof(int));
    if (pArry==nullptr)
    {
        throw std::runtime_error("failed to allocate memeory");
    }
    for (int i=0; i<count; ++i)
    {
        pArry[i]=i;
    }
    free(pArry);
    return 0;
}
int main() {
    try{
        //ProcessRecord(6);
        ProcessRecord(std::numeric_limits<int>::max());
    }
    /* catch(std::runtime_error &ex){
        std::cout<<ex.what()<<std::endl;
    }
    catch(std::out_of_range &ex){
        std::cout<<ex.what()<<"\n";

    }
    catch(std::bad_alloc &ex){
        std::cout<<ex.what()<<"\n";
    } 
    */
   catch(std::exception &ex){
    std::cout<<ex.what()<<"\n";
   }
   /*catch(....){
        std::cout<<"Exception"<<"\n";
    }*/
    return 0;
}
