#include<iostream>

int main()
{
    int n,a,b;
    int y;
    std::cin>>n;
    int x[n-1];
    for(y=0;y<n-1;y++)
    {
        std::cin>>x[y];
    }
    std::cin>>a>>b;
    int count=0;
    while(a<b)
    {
        count=count+x[a-1];
        a++;
    }
    std::cout<<count;
}