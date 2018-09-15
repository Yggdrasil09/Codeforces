#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int x[n];
    int y,count=0;
    for(y=0;y<n;y++)
    {
        std::cin>>x[y];
    }
    for(y=1;y<n-1;y++)
    {
        if((x[y-1]>x[y]&&x[y]<x[y+1])||(x[y-1]<x[y]&&x[y]>x[y+1]))
        {
            count++;
        }
    }   
    std::cout<<count;
}