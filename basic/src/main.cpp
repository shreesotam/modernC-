#include <iostream>
#include <basic.h>

int main() {
    float i{343.324};
    float *x = &i;
    std::cout<<x<<std::endl;
    std::cout<<*x<<std::endl;
    std::cout<<&x<<std::endl;
   int a{2};
   int b{6};
   int sum = Add(&a, &b);
   std::cout<<"sum: "<<sum<<std::endl;
   Swap(&a, &b);
   a=4;
   b=8;
   //AddVal(&a, &b, &sum);
   std::cout<<"sum: "<<sum<<std::endl;
   //Factorial(&a, &sum);
   std::cout<<"==========================================================================================="<<std::endl;
   //std::cout<<"sum: "<<sum<<std::endl;
   int &z =a;
   int &y =b;
   int &result =sum;
    sumup(z, y, result);
    std::cout<<"result: "<<result<<std::endl;
    std::cout<<"sum: "<<sum<<std::endl;
    xt(a, b);
    std::cout<<"a: "<<a<<" b:"<<b<<std::endl;
    std::cout<<"z: "<<z<<" y:"<<y<<std::endl;
    Fact(a, result);
    std::cout<<"result: "<<result<<std::endl;
    std::cout<<"sum: "<<sum<<std::endl;
    //char x[512];
    //std::cin.getline(x, 64, '\n');
    //sstd::cout<<i<<std::endl;s
    std::cout<<"a: "<<a<<std::endl;
    return 0;
}
