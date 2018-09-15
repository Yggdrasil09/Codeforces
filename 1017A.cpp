#include<iostream>

int main()
{
    int n;
    std::cin>>n;
    int y;
    int sum[n];
    for(y=0;y<n;y++)
    {
        int x1,x2,x3,x4;
        std::cin>>x1>>x2>>x3>>x4;
        sum[y]=x1+x2+x3+x4;
    }
    int count=1;
    for(y=1;y<n;y++)
    {
        if(sum[0]<sum[y])
        {
            count++;
        }
    }
    std::cout<<count;
}