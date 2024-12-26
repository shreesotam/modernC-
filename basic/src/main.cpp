#include <iostream>
#include <basic.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    //int *p = (int*)calloc(1,sizeof(int));
    //int *p = (int*)malloc(sizeof(int));
    //int *p = new int;
    int *p = new int[5];
    for(int i=0;i<5;i++)
    {
        p[i] = i;
        std::cout<<"p: "<<p[i]<<std::endl;
        //std::cout<<"p: "<<*p<<std::endl;
    }
    
    
    
    delete []p;
    
    //free(p);
    p=NULL;
    //std::cout<<"p: "<<p<<std::endl;
    //std::cout<<"p: "<<*p<<std::endl;
    return 0;
}
