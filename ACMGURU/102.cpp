#include<iostream>

int main()
{
    int n,y,count=0;
    std::cin>>n;
    for(y=1;y<=n;y++)
    {
        int temp=y;
        int temp1=n;
        while(temp!=temp1)
        {
            if(temp>temp1)
            {
                temp-=temp1;
            }
            else
            {
                temp1-=temp;
            }
        }
        if(temp==1)
        {
            count++;
        }
    }
    std::cout<<count;
}