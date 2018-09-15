#include<iostream>
#include<cmath>
#include<iomanip>

int main()
{
    double n,m;
    std::cin>>n>>m;
    double list[(long int)n];
    long int y,z;
    for(y=0;y<n;y++)
    {
        std::cin>>list[y];
    }
    std::cout<<std::setprecision(100);
    double page[(long int)n];
    for(y=0;y<n;y++)
    {
        page[y]=0;
        page[y]=(long int)list[y]/(long int)m;
        list[y]=fmod(list[y],m);
        list[y+1]+=list[y];
        std::cout<<page[y]<<" ";
    }
}