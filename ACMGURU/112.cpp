#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    int a,b;
    std::cin>>a>>b;
    std::cout<<std::setprecision(1000);
    std::cout<<pow(a,b)-pow(b,a);
}